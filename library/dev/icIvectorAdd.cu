#include <stdio.h>
#include "include/vectorAdd.cuh"

void vectorAdd_I_gpgpu(const int *d_A, const int *d_B, int *d_C, int numElements)
{
  int threadsPerBlock = 256;
  int blocksPerGrid = (numElements + threadsPerBlock - 1) / threadsPerBlock;

  printf("CUDA kernel launch with %d blocks of %d threads\n", blocksPerGrid, threadsPerBlock);
  vectorAdd_kernel<int><<<blocksPerGrid, threadsPerBlock>>>(d_A, d_B, d_C, numElements);
}
