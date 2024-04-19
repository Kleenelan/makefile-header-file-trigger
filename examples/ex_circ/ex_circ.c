#include <stdio.h>
#include "icarithmetic.h"


int main()
{
	float a = 3.3;
	float b = 6.7;
	float c = 0.0f;

	c = circ_(a+b);

	printf("circ = %7.4f\n", c);

	return 0;
}


