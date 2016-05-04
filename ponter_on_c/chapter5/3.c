#include<stdio.h>

unsigned revese( unsigned c )
{
	unsigned temp = 0;
	int i = sizeof( unsigned ) << 3;

	while( i > 0 )
	{
		temp = ( temp << 1) | ( c & 1 ) ;
		c = c >> 1;
		i--;
	}

	return temp;
}


main()
{
	unsigned t = 25;
	printf(" %u \n", revese( t ) );
}
