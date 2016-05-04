#include<stdio.h>

extern int extern_in_function ;
extern int a;

main()
{
	d();
	printf("%d  ", extern_in_function);
}
