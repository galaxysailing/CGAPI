#ifndef _GLCONTEXT_H
#define _GLCONTEXT_H

#include "globj.h"

class gl_context{
    public:
    // construct 
    gl_context(int npixels, bool double_buf);
    // data
    glShareData         share;
    // multi-threading
    glThreads           threads;
    // frame buffer info and depth test
    glStorage<color_t> *framebuf;
    glStorage<float>   *zbuf;
    glStorage<color_t> *windowbuf;
    glStorage<color_t>  framebuf_1;
    glStorage<color_t>  framebuf_2;
    glStorage<float>    zbuf_1;
    glStorage<float>    zbuf_2;
    bool                use_double_buf;
    bool                use_z_test;
    // shader
    glProgram           shader;
    // redering pipeline requirement
    glRenderPayload     payload;
    // pipeline of function pointers and their data 
    glPipeline          pipeline;
};

extern gl_context* glapi_ctx;

#define GET_CURRENT_CONTEXT(C) gl_context *C = glapi_ctx

extern void _cg_context_sanity_check(gl_context * ctx);
extern gl_context* _cg_create_context(int width, int height, bool double_buf);
extern void _cg_make_current(gl_context* ctx);
extern void _cg_free_context_data(gl_context* ctx);
extern void _cg_reset_current_context();

#endif