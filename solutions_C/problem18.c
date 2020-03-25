#include <stdio.h>
#include <stdlib.h>

#define MAX 15

void maximum_total (int mat[MAX][MAX], int i, int j, int sum, int *largest) ;

int main ()
{
	int mat[MAX][MAX] ;
	int i, j ;
	char str[MAX];
	/* Input */
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j <= i; j++)
		{
			scanf ("%s",str) ;
			mat[i][j] = atoi (str) ;
		}
	}
	
	int largest = 0 ;
	maximum_total(mat,0,0,0,&largest) ;
	printf ("Maximum total: %i\n",largest) ;

	return 0 ;
}

void maximum_total (int m[MAX][MAX], int i, int j, int sum, int *largest)
{	
	if (i < MAX)
	{
		sum += m[i][j] ;
		maximum_total (m,i+1,j+1,sum,largest) ;
		maximum_total (m,i+1,j,sum,largest) ;
	}
	else if (sum > *largest) *largest = sum ;
}
