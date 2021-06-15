#include <pthread.h>
#include <glm/glm.hpp>
#include "render.h"
#include "glcontext.h"
#include "../../include/gl/common.h"

#define GET_PIPELINE(P) glPipeline *P = &(glapi_ctx->pipeline)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define GET_INDEX(x, y, width, height) ((height - 1 - y) * width + x)

// static helpers
static glm::vec3 interpolate(float alpha, float beta, float gamma, glm::vec3 &vert1, glm::vec3 &vert2, glm::vec3 &vert3, float weight);
static void default_vertex_shader();
static void default_vertex_shader();
// gl inner variables
glm::vec4 gl_Position;
glm::vec3 gl_VertexColor;
// vertex shader input
int layouts[] = {0, 1};
int layout_cnt = 2;
glm::vec3 input_Pos;
glm::vec3 vert_Color;
// fragment shader input
glm::vec3 diffuse_Color;
// fragment shader output, pixel value
glm::vec3 frag_Color;

static void default_vertex_shader(){
    gl_Position = glm::vec4(input_Pos.x, input_Pos.y, input_Pos.z, 1.0f);
    gl_VertexColor = vert_Color;
}

static void default_fragment_shader(){
    frag_Color = diffuse_Color;
}

// geometry processing
void process_geometry()
{
    // 1. parse vbo and do vertex shading
    GET_PIPELINE(P);
    GET_CURRENT_CONTEXT(C);
    vertex_attrib_t* vattrib_data = (vertex_attrib_t*) P->vao_ptr->getDataPtr();
    char* vbuf_data = (char *) P->vbo_ptr->getDataPtr();
    int vbuf_size = P->vbo_ptr->getSize();
    int vertex_num = P->vertex_num;
    // 2. check if the config is activated
    for (int i=0; i<layout_cnt; i++){
        if (!vattrib_data[layouts[i]].activated)
            throw std::runtime_error("using inactive layout\n");
    }
    // 3. parse vertex data
    vbuf_data += (P->first_vertex)*(vattrib_data[0].stride); // use the first stride to determine start of vertex buffer
    // float * temp = (float*) vbuf_data;
    // for (int i=0; i<18; i++){
    //     std::cout<<temp[i]<<std::endl;
    // }
    
    int cnt = 0;
    char* buf;
    int indices[] = {0,0};
    glm::vec3* vec3_ptr;
    int flag = 1;
    Triangle* tri = new Triangle();
    while (cnt<vertex_num){
        if (!flag){
            delete tri;
            break;
        }
        for (int i=0; i<layout_cnt; i++){
            vec3_ptr = nullptr;
            switch(layouts[i]){
                case 0:
                    vec3_ptr = &input_Pos;
                    break;
                case 1:
                    vec3_ptr = &vert_Color;
                    break;
                default:
                    throw std::runtime_error("invalid layout\n");
            }
            vertex_attrib_t& config = vattrib_data[layouts[i]];
            buf = vbuf_data + (indices[i] + (int)((long long)config.pointer));
            switch(config.type){
                case GL_FLOAT:
                    switch(config.size){
                        case 3:
                            (*vec3_ptr).x = *(float*)(buf+0);
                            (*vec3_ptr).y = *(float*)(buf+sizeof(float)*1);
                            (*vec3_ptr).z = *(float*)(buf+sizeof(float)*2);
                            std::cout<<"extracted float: "<<(*vec3_ptr).x<<" "<< (*vec3_ptr).y<<" "<< (*vec3_ptr).z<<std::endl;
                            break;
                        default: 
                            throw std::runtime_error("not supported size\n");
                    }
                    break;
                default: 
                    throw std::runtime_error("not supported type\n");
            }
            indices[i] += config.stride;
            if (indices[i] >= vbuf_size){
                flag = 0;
            }
        }
        default_vertex_shader();
        // view port transformation
        gl_Position.x = 0.5*C->width*(gl_Position.x+1.0);
        gl_Position.y = 0.5*C->height*(gl_Position.y+1.0);
        // float f1 = (50 - 0.1) / 2.0;
        // float f2 = (50 + 0.1) / 2.0;
        // gl_Position.z = gl_Position.z * f1 + f2;
        tri->screen_pos[cnt%3] = glm::vec3(gl_Position);
        tri->color[cnt%3] = gl_VertexColor;
        cnt += 1;
        if (cnt>0 && cnt % 3 == 0){
            P->triangle_stream.push(tri);
            tri = nullptr;
            if (cnt+3<=vertex_num)
                tri = new Triangle();
        }
    }
    
    // naive impelment
    // float vertices[] = {
    //     0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f,
    //     -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,
    //     0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f};
    // Triangle *triangle = new Triangle();
    // for (int i = 0; i < 3; ++i)
    // {
    //     triangle->screen_pos[i].x = 0.5 * C->width * (vertices[i * 6] + 1);
    //     triangle->screen_pos[i].y = 0.5 * C->height * (vertices[i * 6 + 1] + 1);
    //     triangle->screen_pos[i].z = vertices[i * 6 + 2];
    //     // z
    //     triangle->color[i].x = vertices[i * 6 + 3] * 255;
    //     triangle->color[i].y = vertices[i * 6 + 4] * 255;
    //     triangle->color[i].z = vertices[i * 6 + 5] * 255;
    // }
    // P->triangle_stream.push(triangle);
}

static glm::vec3 interpolate(float alpha, float beta, float gamma, glm::vec3 &vert1, glm::vec3 &vert2, glm::vec3 &vert3, float weight)
{
    return (alpha * vert1 + beta * vert2 + gamma * vert3) / weight;
}

void rasterize()
{
    GET_CURRENT_CONTEXT(C);
    std::queue<Triangle *> &triangle_stream = C->pipeline.triangle_stream;
    int width = C->width, height = C->height;

    while (!triangle_stream.empty())
    {
        Triangle *t = triangle_stream.front();
        triangle_stream.pop();
        glm::vec3 *screen_pos = t->screen_pos;
        int minx, maxx, miny, maxy, x, y;
        minx = MIN(screen_pos[0].x, MIN(screen_pos[1].x, screen_pos[2].x));
        miny = MIN(screen_pos[0].y, MIN(screen_pos[1].y, screen_pos[2].y));
        maxx = MAX(screen_pos[0].x, MAX(screen_pos[1].x, screen_pos[2].x));
        maxy = MAX(screen_pos[0].y, MAX(screen_pos[1].y, screen_pos[2].y));

        float *zbuf = (float *)C->zbuf->getDataPtr();
        color_t* frame_buf = (color_t*)C->framebuf->getDataPtr();
        // AABB algorithm
        for (y = miny; y <= maxy; ++y)
        {
            for (x = minx; x <= maxx; ++x)
            {
                int index = GET_INDEX(x, y, width, height);
                if (!t->inside(x + 0.5f, y + 0.5f))
                    continue;

                // alpha beta gamma
                std::array<float, 3> coef = t->computeBarycentric2D(x + 0.5f, y + 0.5f);
                float zp = coef[0] * screen_pos[0].z + coef[1] * screen_pos[1].z + coef[2] * screen_pos[2].z;
                float Z = 1.0 / (coef[0] + coef[1] + coef[2]);
                zp *= Z;

                if (zp < zbuf[index])
                {
                    zbuf[index] = zp;
                    // set input to fragment shader
                    diffuse_Color = interpolate(coef[0], coef[1], coef[2], t->color[0], t->color[1], t->color[2], 1);
                    default_fragment_shader();
                    // calculated fragment color
                    frame_buf[index].R = frag_Color.x * 255.0f;
                    frame_buf[index].G = frag_Color.y * 255.0f;
                    frame_buf[index].B = frag_Color.z * 255.0f;
                }
            }
        }

        delete t;
    }
}

// void process_pixel()
// {
// }

void *_thr_process_vertex(void *thread_id)
{

    return nullptr;
}

void *_thr_rasterize(void *thread_id)
{

    return nullptr;
}
