#include <stdio.h>
#include "math.h"

int main()
{
	unsigned int a = 0x0FFF1111;
	unsigned int b = 0xF0120113;
//	int b = 0b11111111111111111111;
	printf("Sum: %X\n", math_add(a, b));
	printf("Difference: %d\n", math_sub(a, b));
	printf("Product: %I64d\n", math_mul(a, b));
	printf("Product in HEX: %I64X\n", math_mul(a, b));
	printf("Integer division: %X\n", math_div(a, b));

	return 0;
}