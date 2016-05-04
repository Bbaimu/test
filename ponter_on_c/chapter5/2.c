#include<stdio.h>

int md( int c)
{
	int temp;

	if( c >= 'a' && c <= 'z' )
		temp = 97;
	else 
		if( c >= 'A' && c <= 'Z' )
			temp = 65;
		else
			return c;

	c = ( ( c - temp ) + 13 ) % 26;
	
	return c + temp;

}


main()
{
	int c;

	while( c = getchar() )
	{
		putchar( md(c) );
	}
}
