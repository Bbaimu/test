#include<string.h>
#define IN 1
#define OUT 0


void deblank( char string[] )
{
	int j = 0, i = 0;
	int status = IN;
	char str[100];

	while( string[i] != '\0' )
	{
		if( status == IN || string[i] != ' ' )
		{
				str[j++] = string[i];
		}

		if( string[i] == ' ' )
			status = OUT;
		else
			status = IN;

		i++;

	}
	str[j] = '\0';
	strcpy(string,str);

}
