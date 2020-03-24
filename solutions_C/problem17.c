#include <stdio.h>

int main ()
{
	short int v1[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8} ;  /* Number of letters: 0..19 */
	short int v2[10] = {0,0,6,6,5,5,5,7,6,6} ; /* Number of letters: 20,30,40...90 */

	unsigned long int sum = 0, sum_letters = 0 ;
	short int i, n ;
	for (i = 1; i < 1000; i++, sum_letters += sum, sum = 0)
	{
		n = i ;
		if (n % 100 < 20) sum += v1[n % 100] ;
		else sum += (v1[n % 10] + v2[(n/10) % 10]) ; 
		n /= 100 ;
		if (n % 10 > 0)
		{	
			if (sum > 0) sum += v1[n % 10] + 10 ; /* + 10 => 'hundred and' */
			else sum += v1[n % 10] + 7 ;  /* + 7 => 'hundred' */
		}
	}
	sum_letters += 11 ; /* + 11 => 'one thousand' */
	printf ("Sum: %li\n",sum_letters) ;

	return 0 ;
}
