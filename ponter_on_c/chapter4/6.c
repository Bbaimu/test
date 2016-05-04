#include<stdio.h>
#define MAX 100

void clear()
{
	int c;
	while( ( c = getchar() ) != EOF && c != '\n' )
			;

}
main()
{
	int length;
	int start;
	
	char dest[MAX];
	char src[MAX];

	printf( "input the start and length \n" );
	scanf( "%d  %d", &start, &length );
	clear();

	while( gets( src ) != 0)
	{
		substr( dest , src , start, length );
		puts( dest );
	}
}
