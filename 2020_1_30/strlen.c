#include <stdio.h>

int baka(char a[]);

int main()
{
	char a[] = "deahkrbaehkrbaekhurbaekrn";
	int b;
	b = baka(a);
	printf("%d\n", b);
	return 0;
}

int baka(char c[])
{
	int p;
	while (c[p] != '\0')
		++p;
	return p;
}
