#include<stdio.h>

int extern_in_function =20;

void  d()
{
	extern int extern_in_function ;
	printf(" % d",extern_in_function);


        void a()
        {
	 	;
	}

        a();
}

void a()
{
   printf("  this is a \n");
}


