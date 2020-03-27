#include <stdio.h>
#include <stdlib.h>

/*
	Return a integer value of a digit
*/
int digit (char ch) ;

int main ()
{
	char numbers[100][51] ;	
	int i ;
	for (i = 0; i <= 99; i++)
		scanf ("%s",numbers[i]) ;

	int v[200] ;
	int sum = 0, carry = 0, j, k ;
	for (j = 49, k = 0; j >= 0; j--, k++, sum = 0)
	{
		sum += carry ;
		for (i = 0; i <= 99; i++)
			sum += digit(numbers[i][j]) ;
		if (sum > 9)
			carry = sum/10 ;
		else carry = 0 ;
		v[k] = sum % 10 ;
	}
	
	while (carry != 0)
	{
		v[k++] = carry % 10 ;
		carry = carry/10 ;
	}
	
	printf ("Sum: ") ;
	for (i = k-1; i >= 0; i--)
		printf ("%i",v[i]) ;
	printf ("\n") ;

	printf ("First ten: ") ;
	for (i = k-1; i >= k-10; i--)
		printf ("%i",v[i]) ;
	printf ("\n") ;

	return 0 ;
}

int digit (char ch)
{
	char s[2] = {ch,'\0'} ;	
	return (atoi(s)) ;	
}
