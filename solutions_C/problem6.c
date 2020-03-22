#include <stdio.h>

int main ()
{
	int n = 100 ;
	int a = (n*(n+1)/2)*(n*(n+1)/2) ;
	int b = n*(n+1)*(2*n+1)/6 ;
	printf ("Answer: %i\n",a - b) ;
	return 0 ;
}
