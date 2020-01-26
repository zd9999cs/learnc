#include <stdio.h>
int main()
{
	int ch,countSpace,countTable,countEnter;
	countSpace = countTable = countEnter = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch == ' ')
			++countSpace;
		else if(ch == '\t')
			++countTable;
		else if(ch == '\n')
			++countEnter;
	}
	printf("space:%d\ntable:%d\nenter:%d\n",countSpace,countTable,countEnter);
	return 0;
}
