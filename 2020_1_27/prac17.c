#include <stdio.h>
#define MAXLINE 1000
#define NEED 80
int gline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	while ((len = gline(line, MAXLINE)) > 0)
		if (len > NEED)
		{
			printf("%s", line);
		}
	return 0;
}

int gline(char s[], int lim)
{
	int c, i;

	for (i=0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
