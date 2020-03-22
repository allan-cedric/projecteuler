#include <stdio.h>

int main ()
{
	/*1000-digit number's input*/
	unsigned long int v[1000] ;
	unsigned long int i ;
	for (i = 0; i < 1000; i++)
		scanf ("%li",(v+i)) ;
	
	unsigned long int beg, end, prod = 1, largest = 0 ;	
	for (beg = 0, end = 12; end < 1000; beg++, end++, prod = 1)
	{
		for (i = beg; i <= end; i++)
			prod *= *(v+i) ;
		if (prod > largest)
			largest = prod ;
	}
	printf ("Greatest product: %li\n",largest) ;
		
	return 0 ;
}
