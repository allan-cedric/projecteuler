#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c ;
	for (a = 3; a < 1000; a++)
	{
		for (b = a+1; b < 1000; b++)
		{
			c = sqrt (a*a+b*b) ;
			if ((c == (int) c) && (a+b+c == 1000))
				break ;				
		}
		if (a+b+c == 1000)
			break ;
	}
	printf ("Product: %.0f\n",a*b*c) ;
	
	return 0 ;
}
