/**
	This is very low_quality code
	It is intended to illustrate bad programming pratices
	see program
*****/

char *getline()
{
	char buf[8];
	char *result;
	gets( buf );

	result = malloc( sizeof( buf ) );
	strcpy( result, buf );

	return result;
}
