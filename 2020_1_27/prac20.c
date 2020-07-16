/* detab */
#include <stdio.h>
#define n 8    /* 8 spaces needed to compromise for the /t*/

int main()
{
	int a, i;
	a = 0;
	while ((a = getchar()) != EOF)
	{
		if (a == '\t')
		{
			for (i = 0; i < n; i++)
				putchar(' ');
		}
		else
		{
			putchar(a);
		}
	}
	return 0;
}
