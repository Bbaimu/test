#include<stdio.h>
#include<string.h>

#define PASSWORD "1234567"

int verify_password( char *password )
{
	int authenticated;
	char buf[8];

	authenticated = strcmp( password, PASSWORD );
	strcpy( buf, password );

	return authenticated;
}


main()
{
	int vaild_flag = 0;
	char s[1024];

	while( 1 )
	{
		printf( "please input the password\n" );

		gets( s );
		vaild_flag = verify_password( s );

		if(! vaild_flag )
		{
			printf( "Congratulations ! You have passed the verification \n" );
			break;
		}
		else
			printf( " incorrect password\n" );
	}
}
