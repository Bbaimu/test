/*
    printf the same line
******/


#include<stdio.h>
#include<string.h>


#define MAX 128
#define IN 1
#define OUT 0

main()
{
	char get_string[MAX];  
	char temp[MAX]="";     //store the last line
	int status = OUT;

	while( gets(get_string) )
	{
		if(strcmp(get_string,temp) != 0)
		{
			if(status == IN)
				puts(temp);

			strcpy(temp,get_string );
			status = OUT;
		}
		else 
			status = IN;
		
	}
}
