#include<stdio.h>

/*
	computer and printf all the prime numbers from 1 to 100

	beacuse only 2 is the even number in prime numbers
***/

main()
{
	int divisor, number;

	printf( " 1\n2\n" );

	for( number = 3; number <= 100; number += 2 )
	{
		for( divisor = 3; divisor < number; divisor += 2 )
		{
			if( number % divisor == 0 )
				break;
		}


		if( divisor >= number )
			printf(" %d\n", number);
	}
}
