#include<stdio.h>

int store_bit_filed( int original_value, int value_to_store, 
					 int ending_bit, int start_bit )
{
	int  shift = ending_bit - start_bit + 1;
	unsigned  mask = ( 1 <<  shift ) - 1 ;
	
	unsigned low = ( value_to_store & mask ) << start_bit;

	unsigned high = original_value & ~ ( mask << start_bit ) ;

	return high | low;
}



main()
{
	printf(" %x \n", store_bit_filed( 0x0, 0x1, 4, 4 ) );
	printf(" %x\n ", store_bit_filed( 0xffff, 0x123, 15, 4 ) );
	printf(" %x \n", store_bit_filed( 0xffff, 0x123, 13, 9 ) );
}
