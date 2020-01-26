#include <stdio.h>

main()
{
	long line;
	int meat;

	for(line = 0; (meat = getchar()) != EOF;)
		if (meat == '\n' || meat == ' ' || meat == '\t')
			++line;
	printf("%ld\n", line);
}
