#include <stdio.h>
/* count characters in input; 1st version */ 
main()
{
	int c, nl;
	nl = 0;
	for(c = getchar(); (c= getchar()) != EOF; )
		if(c == '/n')
			++nl;
	;
	printf("%d\n", nl);
}


