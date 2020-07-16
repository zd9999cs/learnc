#include<stdio.h>
#define MAXLINE 1024
void strcat1(char *l1, char *l2) ;
void cpc(char *l1, char *l2) ;
int strend(char *s, char *t);

int main()
{
	char a[MAXLINE];
	cpc(a, "I am big");
	char *b = "I am big";
	int c;
	c = strend(a,b);
	printf("%d",c);
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

int strend(char *s, char *t)
{
	char p[MAXLINE], q[MAXLINE];
	char *p0, *q0, *p1, *q1;
	p0 = p;
	p1 = p;
	q1 = q;
	q0 = q;
	while ((*p1++ = *s++) != '\0')
		;
	p1--;
	while ((*q1++ = *t++) != '\0')
		;
	q1--;
	while (q1 - q0 >= 0 && p1 - p0 >= 0)
		if (*q1-- != *p1--)
			return 0;
	return 1;

}

