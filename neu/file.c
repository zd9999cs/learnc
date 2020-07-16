#include<stdio.h>
#define MAXLINE 64
#define MAXWIDTH 64
int main()
{
	FILE *fp;
	fp = fopen("text.txt", "r+");
	char *strptr[MAXLINE];
	int i = 0;
	while(fgets(*(strptr + i), MAXWIDTH,fp) != NULL)
		i++;
	i = 0;
	rewind(fp);
	while((*(strptr + i))[0] != '\0')
		fputs(*(strptr + i++), fp);
	return 0;
}

