#ifndef _RENDER_H
#define _RENDER_H

#include "configs.h"

typedef void (*render_fp)();

#define PROCESS_VERTEX_THREAD_COUNT 1
#define RASTERIZE_THREAD_COUNT      8
#define BINNING_THREAD_COUNT        8
#define DOING_VERTEX_PROCESSING     1
#define DOING_BINNING               2
#define DOING_RASTERIZATION         3
#define DOING_PIXEL_SHADING         4
#define PIPELINE_FINISH             5

// single thread interface
void process_geometry();
void rasterize();
void process_pixel();
void rasterize_with_shading();

// openmp version of multi-threading
void process_geometry_ebo_openmp();
void process_pixel_openmp();
void binning_openmp();
void rasterize_with_shading_openmp();

// interface multi-thread version
void terminate_all_threads();
void process_geometry_threadmain();
void binning_threadmain();
void rasterize_threadmain();
// void process_pixel_threadmain();

#endif