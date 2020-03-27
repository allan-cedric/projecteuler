#include <stdio.h>

#define MAX 10

int factorial (int n) ;

int main ()
{
	int POSITION = 1000000 ;
	int v[MAX] ;
	int i, j, f = 0, sum = 0 ;
	for (i = 0; i < MAX; i++) *(v+i) = 0 ;

	f = factorial(MAX) ;
	POSITION > f ? POSITION = f : (POSITION *= 1) ;

	printf ("Millionth permutation: ") ;
	i = MAX-1 ;			
	while (sum < POSITION)
	{
		j = 0 ;
		f = factorial(i--) ;
		while (*(v+j)) j++ ;
		while (!*(v+j))
		{
			if (f+sum < POSITION)
			{
				sum += f ;
				while (*(v+(++j))){}
			}
			else *(v+j) = 1 ;
		}
		printf ("%i",j) ;
		if (f+sum == POSITION) break ;
	}
	for (i = MAX-1; i >= 0; i--)
	{
		if(!*(v+i))
			printf ("%i",i) ;
	}
	printf ("\n") ;
	return 0 ;
}

int factorial (int n)
{
	if (n == 0) return 1 ;
	return (n*factorial(n-1)) ;
} 
