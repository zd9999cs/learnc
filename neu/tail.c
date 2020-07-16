#include


int main(int argc, char *argv[])
{
	int limit;


	while (--argc > 0 && (*++argv)[0] == '-')
		while (c = *++argv[0])
		{
			switch (c)
			{
				case '-':
					break;
				case 'n':
					limit = atoi(n);
					break;
				default:
					break;
			}
		}
	printf("%d\n", limit);
	return 0;
}

