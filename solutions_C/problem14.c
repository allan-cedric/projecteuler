#include <stdio.h>

/*
	Return the size of a collatz's sequence
*/
unsigned long int collatz_chain (unsigned long int i, short int *v) ;

int main ()
{
	short int v[1000000] ;
	unsigned long int i ;
	for (i = 1; i < 1000000; i++)
		v[i] = 1 ;
	
	unsigned long int size_chain, largest = 0 ;
	int start_number ;
	for (i = 1; i < 1000000; i++)
	{
		if (v[i])
		{
			size_chain = collatz_chain(i,v) ;
			if (size_chain > largest)
			{
				largest = size_chain ;
				start_number = i ;
			}
		}
	}
	printf ("Start number: %i\n",start_number) ;
	
	return 0 ;
}

unsigned long int collatz_chain (unsigned long int i, short int *v)
{
	unsigned long int size = 1 ;
	while (i != 1)
	{
		if (i < 1000000)
			v[i] = 0 ;
		if (i % 2 == 0)
			i /= 2 ;
		else i = 3*i + 1 ;
		size++ ;
	}
	return size ;
}
