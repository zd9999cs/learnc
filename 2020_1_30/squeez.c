#include<stdio.h>

void sqz(char a[], char b[]);

int main()
{
	char s1[] = "hello";
	char s2[] = "el";
	sqz(s1, s2);
	printf("%s\n", s1);
}

void sqz(char s1[], char s2[])
{
	int i, j, k;

	for (i = j = 0;s1[i] != '\0'; i++)
	{
		for (k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++)
			;
		if (s2[k] == '\0')
			s1[j++] = s1[i];
		else 
			;
	}
	s1[j] = '\0';
}

