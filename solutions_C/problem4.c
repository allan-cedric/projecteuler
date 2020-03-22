#include <stdio.h>

/*
	If 'n' is palindromic then return 1,
	else return 0
*/
int is_palindromic (int n) ;

int main ()
{
	int i, j, largest = 0, num ;
	for (i = 100; i < 1000; i++)
	{
		for (j = i; j < 1000; j++)
		{
			num = i*j ;
			if (is_palindromic(num))
			{
				if (num > largest)
					largest = num ;
			}
		}
	
	}
	printf ("Largest: %i\n",largest) ;

	return 0 ;
}

int is_palindromic (int n)
{
	/* 999 x 999 = 998001 - 6 digits */
	int v[6] ;
	int i, j, w ;
	
	for (i = 0; n != 0; i++)
	{
		v[i] = n % 10 ;
		n = n/10 ;
	}
	
	for (j = 0, w = i-1; j <= (i-1)/2; j++, w--)
	{
		if (v[j] != v[w])
			return 0 ;
	}

	return 1 ;
}
