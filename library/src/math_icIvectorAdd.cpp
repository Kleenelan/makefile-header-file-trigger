#include "constant.h"
#include "../dev/icIvectorAdd.h"
#include "stdio.h"

#ifdef __cplusplus
extern "C"{
#endif

API_
int icIvectorAdd(const int *A, const int *B, int *C, int numElements)
{
    printf("%s: %s: %d\n", __FILE__, __func__, __LINE__);
    vectorAdd_I_gpgpu(A, B, C, numElements);

    return 0;
}

#ifdef __cplusplus
}
#endif

