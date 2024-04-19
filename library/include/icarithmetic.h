#ifndef __ICARITHMETIC_H__
#define __ICARITHMETIC_H__

#include "internal/constant.h"

#ifdef __cplusplus
extern "C"{
#endif

float add_(float a, float b);
float sub_(float a, float b);
float mul_(float a, float b);
float div_(float a, float b);
float circ_(float r);
int icIvectorAdd(const int *A, const int *B, int *C, int numElements);
int icSvectorAdd(const float *A, const float *B, float *C, int numElements);

#ifdef __cplusplus
}
#endif


#endif
