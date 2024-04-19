#pragma once
#include <cuda_runtime.h>

template<typename T>
__global__ 
void vectorAdd_kernel(const T *A, const T *B, T *C, int numElements) 
{
  int i = blockDim.x * blockIdx.x + threadIdx.x;

  if (i < numElements) {
    C[i] = A[i] + B[i] + 0.0f;
  }
}

