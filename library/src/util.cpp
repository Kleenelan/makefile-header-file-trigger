#include "util.h"

#ifdef __cplusplus
extern "C"{
#endif

void print_func(float a, char op, float b)
{
	printf("%7.4f ", a);
	printf("%c ", op);
	printf("%7.4f\n", b);
}


#ifdef __cplusplus
}
#endif


