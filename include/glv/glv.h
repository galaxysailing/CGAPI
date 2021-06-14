///

#ifndef _glv_h_
#define _glv_h_

#ifdef __cplusplus
extern "C" {
#endif

/*************************************************************************
 * GLV API tokens
 *************************************************************************/

#define GLV_FALSE       0
#define GLV_TRUE        1

/*************************************************************************
 * GLV API types
 *************************************************************************/

typedef struct GLVFile GLVFile;

/*************************************************************************
 * GLV API functions
 *************************************************************************/

/**
 * initialize glv environment
 * @return GLV_TRUE or GLV_FALSE
 */
int glvInit(void);

/**
 * The function creates file pointer for storing framebuffer result.
 * 
 * @param width image width
 * @param height image height
 * @param filename image name
 * 
 * @return file pointer
 */
GLVFile* glvCreateFile(int width, int height, const char *filename);

/**
 * The function creates file pointer for storing framebuffer result.
 * 
 * @param file file pointer
 * 
 * @return GLV_TRUE or GLV_FALSE
 */
int glvMakeFileCurrent(GLVFile* file);

/**
 * the function writes framebuffer result in file.
 * 
 * @param file file pointer
 * @return GLV_TRUE or GLV_FALSE
 */
int glvWriteFile(GLVFile* file);

void glvTerminate();

#ifdef __cplusplus
}
#endif 

#endif  /* _glv_h_ */