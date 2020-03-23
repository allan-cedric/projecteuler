#include <stdio.h>

int main ()
{
	unsigned long int sum = 0 ;
	/* I have a sub-vector : v[2]...v[2000000] */
	short int v[2000001] ;
	int i, j ;

	/* Fill out all vector - v[2]...v[2000000] - with 1 */
	for (i = 2; i < 2000001; i++)
		v[i] = 1 ;
	
	/* Now : 1 = Prime // 0 = Not Prime */
	i = 2 ;
	while (i < 2000000)
	{
		sum += i ;
		for (j = 1; i*j < 2000001; j++)
			v[i*j] = 0 ;
		while (!v[++i]){}
	}	
	printf ("Sum: %li\n",sum) ;

	return 0 ;
}
