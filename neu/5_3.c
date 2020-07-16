#include<stdio.h>
#define MAXLINE 1024
void strcat1(char *l1, char *l2) ;
void cpc(char *l1, char *l2) ;

int main()
{
	char a[MAXLINE];
	cpc(a, "I am big");
	char b[MAXLINE];
	cpc(b, ", yet I am little");
	strcat1(a, b);
	printf("%s\n", a);
	return 0;
}

void cpc(char *l1, char *l2)
{
	while ((*l1++ = *l2++))
		;
}
void strcat1(char *l1, char *l2)
{
	while (*l1++ != '\0')
		;
	l1--;
	while ((*l1++ = *l2++))
		;
}



