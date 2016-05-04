void copy( char dest[], char src[], int n )
{
	int index_d, index_s ;
	for( index_d = 0, index_s = 0; index_d < n; index_d++)
	{
		dest[index_d] = src[index_s];

		if( src[index_s] != '\0' )
			index_d++;
	}
}
