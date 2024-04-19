#include <stdio.h>
#include "include/vectorAdd.cuh"

void vectorAdd_S_gpgpu(const float *d_A, const float *d_B, float *d_C, int numElements)
{
  int threadsPerBlock = 256;
  int blocksPerGrid = (numElements + threadsPerBlock - 1) / threadsPerBlock;

  printf("CUDA kernel launch with %d blocks of %d threads\n", blocksPerGrid, threadsPerBlock);
  vectorAdd_kernel<float><<<blocksPerGrid, threadsPerBlock>>>(d_A, d_B, d_C, numElements);
}
