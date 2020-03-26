#include <stdio.h>

int main ()
{
	char name[50] ;
	int i = 0, j, sum = 0, sum_namescore = 0 ;
	/* Get the formatted input that I gave */
	scanf ("%s",name) ;
	for (j = 1; !feof(stdin); j++, i = 0, sum = 0)
	{
		while (name[i] != 0) sum += (name[i++]-64) ;
		sum_namescore += sum*j ;
		scanf ("%s",name) ;
	}
	printf ("Total: %i\n",sum_namescore) ;

	return 0 ;
}
