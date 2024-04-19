#include <stdlib.h>
#include "constant.h"

#ifdef __cplusplus
extern "C"{
#endif

API_ float div_(float a, float b)
{
    if(b!=0.0f)
        return a/b;
    else
        exit(-1);
}

#ifdef __cplusplus
}
#endif
