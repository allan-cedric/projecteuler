#include <stdio.h>

int main ()
{
	int i, j, count ;
	
	for (i = 20;;i++)
	{
		for (j = 1, count = 0; j <= 20; j++,count++)
		{
			if (i % j != 0)
				break ;
		}
		if (count == 20)
			break ;
	}
	printf ("Smallest: %i\n",i) ;

	return 0 ;
}
