#pragma once

void vectorAdd_S_gpgpu(const float *d_A, const float *d_B, float *d_C, int numElements);
void vectorAdd_I_gpgpu(const int *d_A, const int *d_B, int *d_C, int numElements);

