#include<stdio.h>

#define MAX 100
#define IN 1
#define OUT 0

int is_white( char c )
{
	return c == ' ' || c == '\n' || c == '\f'
			|| c == '\v' || c == '\r' ;
}


int count( char str[] )
{
	int i = 0, count = 0;
	int status = OUT;

	while( str[i] != '\0' )
	{
		if( is_white(str[i]) )
		{
			status = OUT;
		}
		else if( status == OUT) 
		{
			count++;
			status = IN;
		}

		i++;
	}

	return count;
}


main()
{
	char str[MAX];

	while( gets( str ) )
	{
		printf( "%d \n", count(str) );
	}
}
