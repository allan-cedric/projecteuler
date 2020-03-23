#include <stdio.h>

#define NUM 600851475143

int main ()
{
	unsigned long int i = 2;
	unsigned long int largest = 0 ;
	unsigned long int num = NUM ;
	
	while (num != 1)
	{
		if (num % i == 0)
		{
			num = num/i ;
			largest = i ;
		}
		else i++ ;
	}

	printf ("Largest prime factor: %ld\n",largest) ;	

	return 0 ;
}
