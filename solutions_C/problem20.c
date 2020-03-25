#include <stdio.h>
#include <stdlib.h>

/*
	Transform a digit into a valid integer
*/
int digit (char ch) ; 

int main ()
{
	int sum = 0 ;
	char ch ;
	/* Input - 100! */
	ch = getchar () ;
	while (!feof(stdin))
	{
		sum += digit(ch) ;
		ch = getchar () ;
	}

	printf ("Sum: %i\n",sum) ;

	return 0 ;
}

int digit (char ch)
{
	char str[2] = {ch,'\0'} ;
	return (atoi(str)) ;
}
