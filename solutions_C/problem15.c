#include <stdio.h>

int main ()
{
	const int size = 20 ;
	unsigned long int routes = 1 ;
	int i ;
	for (i = 1;	i <= size; i++)
	{
		routes *= size + i ;
		routes /= i ;
	}
	printf ("Num. routes: %ld\n",routes) ;

	return 0 ;
}
