#include <stdio.h>
main()
{
	int c;
	int b;

	while ((c = getchar()) != EOF) {
		putchar(c);
		b = c != EOF;
		printf("%d", b);
	}
}
