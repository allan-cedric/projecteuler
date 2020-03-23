#include <stdio.h>

int main ()
{
	int f1 = 0, f2 = 1, f3 = f1 + f2 ;
	int sum = 0 ;

	while (f3 < 4000000)
	{	
		if (f3 % 2 == 0)
			sum += f3 ;
		f1 = f2 ;
		f2 = f3 ;
		f3 = f1 + f2 ;	
	}
	printf ("Sum: %i\n",sum) ;

	return 0 ;
}
