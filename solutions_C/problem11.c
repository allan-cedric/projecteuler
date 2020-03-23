#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int mat[20][20] ;
	int i, j ;
	/* Only 2-digit number */
	char str[2] ;
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{	
			scanf ("%s",str) ;
			mat[i][j] = atoi (str) ;
		}
	}

	int k ;
	unsigned long int prod_1 = 1, prod_2 = 1, prod_3 = 1, largest = 0 ;
	for (i = 0; i <= 19; i++)
	{
		for (j = 0; j <= 16; j++, prod_1 = 1, prod_2 = 1, prod_3 = 1)
		{
			for (k = 0 ; k <= 3; k++)
			{
				prod_1 *= mat[i][j+k] ;
				prod_2 *= mat[j+k][i] ;
				if (i <= 16)
					prod_3 *= mat[i+k][j+k] ;
			}
			if (prod_1 > largest)
				largest = prod_1 ;
			if (prod_2 > largest)
				largest = prod_2 ;
			if (prod_3 > largest)
				largest = prod_3 ;	
		}
		if (i <= 16)
		{
			for (j = 19; j >= 3; j--, prod_1 = 1)
			{
				for (k = 0; k <= 3; k++)
					prod_1 *= mat[i+k][j-k] ;
				if (prod_1 > largest)
					largest = prod_1 ;
			}
		}
	}
	printf ("Greatest product: %li\n",largest) ;

	return 0 ;
}
