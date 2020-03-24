#include <stdio.h>

int main ()
{
	int v[1000000] ;
	int i = 0 ;
	while (!feof(stdin))
		scanf ("%i",&v[i++]) ;

	unsigned long int sum = 0 ;
	while (--i >= 0)
		sum += v[i] ;

	printf ("Sum: %li\n",sum) ;
	return 0 ;
}
