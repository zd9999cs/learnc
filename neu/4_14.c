#include <stdio.h>
#define swap(t, x, y) { t temp; temp = x; x = y; y = temp;} 
#define c_var(i) int var ## i

int main()
{
	int a, b;
	a = 1;
	b = 0;
	swap(int, a, b);
	printf("%d\n", a);
	return 0;
}
