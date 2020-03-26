#include <stdio.h>

#define SUNDAY 0

/* 0 => SUNDAY, 1 => MONDAY, 2 => TUESDAY, 3 => WEDNESDAY, 4 => THURSDAY, 5 => FRIDAY, 6 => SATURDAY */

int main ()
{
	short int a = 2, number_sundays = 0, year, month ;
	for (year = 1901; year <= 2000; year++)
	{
		for (month = 1; month <= 12; month++)
		{
			a += 28 ;
			if (month != 2)
			{
				a += 2 ;
				if (month != 4 && month != 6 && month != 9 && month != 11) a++ ;
			}
			else if (!(year % 4) && (year % 100 || !(year % 400))) a++ ;
			a %= 7 ;
			if (a == SUNDAY) number_sundays++ ;
		}
	}
	printf ("Num. sundays: %hi\n",number_sundays) ;
	
	return 0 ;
}
