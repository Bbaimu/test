int sub( char dest[], char src[], int start, int len )
{
	int index_d,index_s;

	if( start >=0 && len > 0 )
	{
		for( index_s = 0; src[index_s] != '\0' &&  index_s < start; index_s++ )
				;
		
		index_d = 0;
		while( len > 0 && src[index_s] != '\0' )
		{
			dest[index_d] = src[index_s];
			index_s++;
			len--;
		}

	}

	dest[index_d] = '\0';
}
