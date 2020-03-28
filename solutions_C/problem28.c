#include <stdio.h>

int main ()
{
    int a = 3, b = 5, c = 7, d = 9 ;
    int k = 10 ;
    int sum = a + b + c + d ;

    int i ;
    for (i = 0; i < 499; i++, k += 8)
    {
        a += k ;
        b += (k + 2) ;
        c += (k + 4) ;
        d += (k + 6) ;
        sum = sum + a + b + c + d ;
    }
    printf ("Sum: %i\n",++sum) ;

    return 0 ;
}