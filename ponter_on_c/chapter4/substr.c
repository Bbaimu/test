#include<string.h>

int substr( char dest[], char src[], int start, int length )
{
	if( start > strlen( src ) || 
		start < 0 || length < 0 )
		{
			dest[0] = '\0';
			return 0;
		}

	int i = 0;

	while( length > i && src[start] != '\0' )
	{
		dest[i] = src[start];
		i++;
		start++;
	}

	dest[i] = '\0';

	return i;

}
