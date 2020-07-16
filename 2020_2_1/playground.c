#include<stdio.h>

int main()
{
	unsigned int a, b;
	b = 0b1111111111111111;
	a = ~b;
	printf("%u ", b);
	printf("%u", a);
	return 0;
}
