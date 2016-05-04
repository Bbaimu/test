/****
     copy string
****/

#include<stdio.h>

#define SIZE 10
#define MAX  100
void copy_n(char dest[],  char src[], int n)
{
	int i;
	for(i = 0; i < n && src[i] != '\0'; i ++)
	{
		dest[i] = src[i];
	}

	while( i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

void show(char str[])
{
	int i = 0;

	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}

main()
{
	char src[MAX] = "abcdefghijklmnopqrstuvwxyz";
	char dest[MAX];

	copy_n(dest,src,10);

	show(dest);
	show(src);
}
