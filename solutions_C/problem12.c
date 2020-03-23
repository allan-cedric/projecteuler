#include <stdio.h>

/*
	Return the number of n's divisors
*/
int NumberDivisors (unsigned long int n) ;

int main ()
{
	unsigned long int tri_num = 55 ;
	unsigned long int k ;
	for (k = 11; NumberDivisors(tri_num) < 500; k++)
		tri_num += k ;

	printf ("Tri. number: %li\n",tri_num) ;

	return 0 ;
}

int NumberDivisors (unsigned long int n)
{
	int p = 2 ;
	int count = 0 ;
	int mult = 1 ;

	while (n != 1)
	{
		if (n % p == 0)
		{
			count++ ;
			n = n/p ;
		}
		else
		{
			mult *= count+1 ;
			p++ ;
			count = 0 ;
		}
	}
	mult *= count+1 ;
	return mult ;
}
