#include<stdio.h>


void show_byte(unsigned char *str, int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		printf("%x ",str+i);
		printf("%2x ",str[i]);
		putchar('\n');
	}

	printf("\n");

}

main()
{

	int a = 10;
	int b ;
	
	printf("    %x     ", &a);
	show_byte( (unsigned char *)&a, sizeof(int) );
	printf("   &%x     ", &b);
	show_byte( (unsigned char *)&b, sizeof(int) );

}
