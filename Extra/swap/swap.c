#include <stdio.h>

int main()
{
	long int number = 0b011011011;
	long int a0,a1,a2,a3;
	long int result;

	a0 = (number & 0x000000ff) << 24u;
	a1 = (number & 0x0000ff00) << 8u;
	a2 = (number & 0x00ff0000) >> 8u;
	a3 = (number & 0xff000000) >> 24u;

	result = a0 | a1 | a2 | a3;

	printf("%d\n", result);
}