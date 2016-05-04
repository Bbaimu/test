#include<stdio.h>
#define IN 1
#define OUT 0


void deblank1( char string[] )
{
	char *head, *p;
	int status = IN;

	head = string;
	p = string;

	while( *p != '\0' )
	{
		if( *p != ' ' || status == IN )
		{
			*head = *p;
			head++;
			status = IN;
		}
		
	 if( *p == ' ' )
			status = OUT;


		p++;
	}

	*head = '\0';
	
}

main()
{
	char string[100];

	while( gets( string ) )
	{
		deblank1( string );
		puts(string);
	}
}
