#include<stdio.h>

void sqz(char a[], char b[]);

int main()
{
	char s2[] = "hello";
	char s1[] = "el";
	sqz(s2, s1);
}

void sqz(char s2[], char s1[])
{
	int i, j, k;

	for (i = 0;s2[i] != '\0'; i++)
	{
		for (k = 0; s1[k] != '\0' && s1[k] != s2[i]; k++)
			;
		if (s1[k] == '\0')
			printf("-1\n");
		else 
			printf("%d\n", k+1);
	}
}

