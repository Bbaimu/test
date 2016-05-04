size_t strlen( char *string )
{
	int length = 0;

	while( *string++ != '\0' )
	{
		length++;
	}

	return length;
}
