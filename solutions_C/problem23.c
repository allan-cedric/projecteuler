#include <stdio.h>

int SumTwoAbundant (int n, int *v) ;
int IsAbundant (int n) ;

int main ()
{
	int sum = 276, i ; 
	int v[28124] ;
	for (i = 0; i < 28124; i++) 
		v[i] = 1 ;
	for (i = 25; i < 28124; i++)
	{
		if (i % 12 && i % 18 && i % 20)
		{
			if (!SumTwoAbundant(i,v)) 
				sum += i ;
		}
	}
	
	printf ("Sum: %i\n",sum) ;	

	return 0 ;
}

int SumTwoAbundant (int n, int *v)
{
	int a, b, c, d ;
	for (a = 1, b = n-1; a <= b; a++, b--)
	{
		if (v[a] && v[b])
		{ 
			c = IsAbundant(a) ;
			d = IsAbundant(b) ;
			if (c && d) 
				return 1 ;
			if (!c)
				v[a] = 0 ;
			if (!d)
				v[b] = 0 ;
		}		
	}
	return 0 ;
}

int IsAbundant (int n)
{
	int i, sum = 0 ;
	for (i = 1; i < n; i++)
	{ 
		if (!(n % i)) 
			sum += i ;
	}
	if (sum > n) 
		return 1 ;
	return 0 ;
}
