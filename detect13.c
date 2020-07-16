{
	int c;
	long l, ass;
	state = OUT;
	while ((c=getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t')
			if (state == IN)
				if(ass >= l)
				{
					l = ass;
					state = OUT;
				}
		else 
			if (state == OUT) 
			{
			state = IN;
			++ass;
			}
			else 
			{
			++ass;
			}
}	
