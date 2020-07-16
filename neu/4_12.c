/* This is an software aiming to convert integer into string using the recursion algorithm*/
#include <stdio.h>
#include <string.h>
#define MAXLINE 100

void itoa(int, char[]);

int main()
{
	char s[MAXLINE];
	int a = 3245;
	itoa(a, s);
	printf("%s\n", s);
	return 0;
}

void itoa(int input, char output[])
{
	if (input)
	{
		itoa((input - input % 10)/10, output);
	output[strlen(output)] = '0' + (input % 10);
	output[strlen(output)] = '\0';
	}
	return;
}
