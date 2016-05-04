#include<stdio.h>

int is_triangle(int a, int b, int c)
{
	return (a + b) > c &&
		   (b + c) > a &&
		   (a + c) > b;
}


void judge(int a, int b, int c)
{
	if(a == b)
	{
		if(a == c)
			printf("3\n");
		else
			printf("2\n");
	}
	else
	{
		if((a == c) || (b == c))
			printf("2\n");
		else
			printf("1\n");
	}
}


main( )
{
	int argv[3];

	printf(" input the \n");

	scanf("%d %d %d",argv,argv+1,argv+2);

	

	if( is_triangle(argv[0],argv[1],argv[2]) == 0 )
	{
		printf(" not tirangle \n");
		return ;
	}


	judge(argv[0],argv[1],argv[2]);

}
