#include "constant.h"
#include "../dev/icSvectorAdd.h"
#include "stdio.h"

#ifdef __cplusplus
extern "C"{
#endif
API_
int icSvectorAdd(const float *A, const float *B, float *C, int numElements)
{
    printf("%s: %s: %d\n", __FILE__, __func__, __LINE__);
    vectorAdd_S_gpgpu(A, B, C, numElements);

    return 0;
}

#ifdef __cplusplus
}
#endif

