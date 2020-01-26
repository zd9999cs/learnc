#include <stdio.h>
main()
{
	int a ;
	while((a = getchar()) != EOF)
	{
		if(a == '\n')
		{
			putchar('\\');
			putchar('n');

		}
		else if(a == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else 
			putchar(a);
	}
}

