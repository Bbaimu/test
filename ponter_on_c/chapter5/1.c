#include<stdio.h>


main()
{
	int c;
	while(  c = getchar() )
	{
		if( c >= 65 && c < 91 )
			c += 32;

		putchar( c );
	}
}
