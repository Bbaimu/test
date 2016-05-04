/****
	simple implementation of library function gets()
****/

char * get(  char * s )
{
	char *dest = s;
	int getchar = 0;
	int c;

	while( ( c = getchar() ) != EOF && c != '\n' )
	{
		getchar++;
		*dest = c;
		dest++;
	}
	
	*dest = '\0';

	if( getchar == 0 && c == EOF )
		return NULL;

	return s;
}

void echo()
{
	char buf[8];
	get(buf);
	puts(buf);
}
