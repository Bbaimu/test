/**
	find a char in char  a[*][*]

	a[0]------->'a' 'b' 'c' 'd' 'e'
	a[1]------->'a' 'b' 'c' 'd' 'e'
	a[2]------->'a' 'b' 'c' 'd' 'e'
	a[3]------->'a' 'b' 'c' 'd' 'e'
	a[4]------->'a' 'b' 'c' 'd' 'e'
	a[5]------->'a' 'b' 'c' 'd' 'e'
****/

#define FAILURE 0
#define SUCCESS 1


int find1_char( char **strings, char value )
{
	char *string;

	while( ( string == *strings++ ) != 0 )
	{
		/**
			string == *strings++;
			
			< = >

			string == *strings;
			strings++;

		***/
		while( *string != '\0' )
		{
			if( *string++ == value )
				return SUCCESS;
		}
	}

	return FAILURE;
}

int find2_char( char **strings, char value )
{
	char *string ;

	while( ( string == *strings ) != 0 )
	{
		/*
			about string++
			you can put ++ at such place
			while( *string++ != '0' )

			or
			
			if( *string++ == value )

		****/
		while( *string != '\0' )
		{
			if( *string == value )
				return SUCCESS;

			string++;
		}

		strings++;
	}

	return FAILURE;
}

int find3_char( char **strings, char value )
{
	while( *strings != 0 )
	{
		/*
			*strings   char*
			**strings  char

			string[a][b]

			(*string)++     < = >  b++
			string++     < = >     a++
		***/
		while( **strings != '\0' )
		{
			if(  *(*strings)++ == value )
				return SUCCESS;
		}

		strings++;
	}
}


