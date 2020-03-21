#include <stdio.h>

/*
	If 'p' is prime then return 1,
	else return 0.
*/
int is_prime (unsigned long int p) ;

int main ()
{
	unsigned long int p = 600851475143 ;
	unsigned long int i ;
	unsigned long int mult = 1 ;
	unsigned long int largest = 0 ;
	
	for (i = 2 ; i <= p; i++)
	{
		if (p % i == 0)
		{
			if (is_prime(i))
			{
				largest = i ;
				mult *= i ;
			}
		}
		if (mult ==	p)
			break ;	
	}

	printf ("Largest prime factor: %ld\n",largest) ;	

	return 0 ;
}

int is_prime (unsigned long int p)
{
	unsigned long int i ;
	for (i = 2; i < p; i++)
	{
		if (p % i == 0)
			return 0 ;
	}
	return 1 ;
}
