#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, d, state, i;
	long l, ass;
	state = OUT;
	l = ass = 0;
	while ((c=getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
				if(ass >= l)
				{
					l = ass;
					state = OUT;
					ass = 0;
				}
		}
		else 
		{
			if (state == OUT) 
			{
			state = IN;
			++ass;
			}
			else 
			{
			++ass;
			}
		}
	}
	long gra[l];
	for (int i = 0; i < l;++i)
	{
		gra[i] = 0;
	}
	state = OUT;
	ass = 0;
	while ((d=getchar()) != EOF)
		if (d == ' ' || d == '\n' || d == '\t')
		{
			if (state == IN)
			{
				++gra[ass - 1];
				ass = 0;
				state = OUT;
			}
		}
		else 
		{
			if (state == OUT) 
			{
			state = IN;
			++ass;
			}
			else 
			{
			++ass;
			}
		}
	for (i = 0; i < l; ++i)
	{
		printf(" %ld",gra[i]);
	}
}
