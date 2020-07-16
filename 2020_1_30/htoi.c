#include <stdio.h>
#include <ctype.h>
#define MAXLINE = 100
int htoi();
int main()
{
	char line[] = "0x3";
	int n;
	n = htoi(line);
	printf("%d\n", n);
	return 0;
}
int htoi(char line[])
{
	int n;
	for (int i = 2; line[i] != '\0'; i++)
	{
		if (isdigit(line[i]))
			n = 16 * n + (line[i] - '0');

		else if (islower(line[i]))
		{
			line[i] = toupper(line[i]);
			n = 16 * n + 10 + (line[i] - 'A');
		}
		else
			n = 16 * n + 10 + (line[i] - 'A');
	}
	return n;
}
