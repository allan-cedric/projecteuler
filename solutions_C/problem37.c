#include <stdio.h>

int is_prime(int n);
int trunc_prime(int n);

int main()
{
    int i, n, sum = 0;
    for (i = 0, n = 11; i < 11; n++)
    {
        if (is_prime(n) && trunc_prime(n))
        {
            sum += n;
            i++;
        }
    }
    printf("Sum: %i\n", sum);
    return 0;
}

int is_prime(int n)
{
    if (n == 1 || !n)
        return 0;
    int i;
    for (i = 2; i < n; i++)
    {
        if (!(n % i))
            return 0;
    }
    return 1;
}

int trunc_prime(int n)
{
    int base = 10;
    while (base < n)
    {
        if (!is_prime(n % base) || !is_prime(n / base))
            return 0;
        base *= 10;
    }
    return 1;
}