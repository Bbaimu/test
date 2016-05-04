#include<stdio.h>

int extern_in_function =20;
int a = 15 ;

void printf1()
{
	printf("  %d  \n", a);
}

int d(int e)
{
	extern int extern_in_function = 15;
	printf(" % d",extern_in_function);
	return 0;
}

//extern_in_function =11 + extern_in_function;


