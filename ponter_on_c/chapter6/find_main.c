#include<stdio.h>
#include<assert.h>

main()
{
	char strings[10][10];

	char *str;
	int i = 10;

	while( i-- > 0 )
	{
		str = *strings;
		gets( str++ );
	}

	find1_char( strings, 'a' );
	find2_char( strings, 'a' );
	find3_char( strings, 'a' );
}
