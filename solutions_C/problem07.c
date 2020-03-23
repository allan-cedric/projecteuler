#include <stdio.h>

/*
	If 'p' is prime then return 1,
	else return 0
*/
int is_prime (unsigned long int p) ;

int main ()
{
	unsigned long int num = 17 ;
	unsigned long int i ;
	for (i = 6; i < 10001; num += 2)
		if (is_prime(num)) {i++ ;} 
	num -= 2 ;
	printf ("%list prime: %li\n",i,num) ;	

	return 0 ;
}

int is_prime (unsigned long int p)
{
	int i ;
	for (i = 2; i < p; i++)
	{
		if (p % i == 0)
			return 0 ;
	}
	return 1 ;
}
