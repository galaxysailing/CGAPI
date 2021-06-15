#ifndef _GEOMETRY_H
#define _GEOMETRY_H

#include <stdio.h>
#include <glm/glm.hpp>
#include <array>
#include <assert.h>
#include <math.h>

class Triangle
{
public:
    /**
     * counter clockwise order
     */
    glm::vec3 screen_pos[3];
    glm::vec3 color[3];

    bool inside(float x, float y)
    {
        glm::vec3 f0, f1, f2;
        f0 = glm::cross(screen_pos[1], screen_pos[0]);
        f1 = glm::cross(screen_pos[2], screen_pos[1]);
        f2 = glm::cross(screen_pos[0], screen_pos[2]);
        glm::vec3 p(x, y, 1.0f);
        // if ((glm::dot(p, f0) * glm::dot(f0, screen_pos[2]) < 0) 
        //     && (glm::dot(p, f1) * glm::dot(f1, screen_pos[0]) < 0) 
        //     && (glm::dot(p, f2) * glm::dot(f2, screen_pos[1]) < 0))
        // {
            return true;
        // }
        // return false;
    }

    std::array<float, 3> computeBarycentric2D(float x, float y)
    {
        glm::vec3 *v = screen_pos;
        float c1 = (x * (v[1].y - v[2].y) + (v[2].x - v[1].x) * y + v[1].x * v[2].y - v[2].x * v[1].y) / (v[0].x * (v[1].y - v[2].y) + (v[2].x - v[1].x) * v[0].y + v[1].x * v[2].y - v[2].x * v[1].y);
        float c2 = (x * (v[2].y - v[0].y) + (v[0].x - v[2].x) * y + v[2].x * v[0].y - v[0].x * v[2].y) / (v[1].x * (v[2].y - v[0].y) + (v[0].x - v[2].x) * v[1].y + v[2].x * v[0].y - v[0].x * v[2].y);
        // float c3 = (x * (v[0].y - v[1].y) + (v[1].x - v[0].x) * y + v[0].x * v[1].y - v[1].x * v[0].y) / (v[2].x * (v[0].y - v[1].y) + (v[1].x - v[0].x) * v[2].y + v[0].x * v[1].y - v[1].x * v[0].y);
        // assert(_sanity_check(c1, c2, c3));
        return {c1, c2, 1-c1-c2};
    }

private:
    inline int _sanity_check(float c1, float c2, float c3){
        printf("%f, %f, %f\n", c1, c2, c3);
        if (abs(1-c1-c3-c3) < 0.01)
            return 1;
        return 0;
    }
};

#endif