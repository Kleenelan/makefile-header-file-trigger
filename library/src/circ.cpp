#include "constant.h"

#ifdef __cplusplus
extern "C"{
#endif

#include "util.h"

API_ float circ_(float r)
{
	print_func(r, 'C', r);
    return 2.0f*PI*r;
}

#ifdef __cplusplus
}
#endif
