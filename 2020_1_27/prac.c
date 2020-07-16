#include <stdio.h>
#include <stdlib.h>
int main()
{
        int j;                                       //定义一个对比变量
        signed char sc_i;
        for (sc_i=1, j=0; sc_i==j+1; sc_i++, j++)
	{
		printf("%c",sc_i);
	}
        printf("signed char max=%d, ", j);
        for (sc_i=-1, j=0; sc_i==j-1; sc_i--, j--);
        printf("signed char min=%d\n", j);
	return 0;
}
