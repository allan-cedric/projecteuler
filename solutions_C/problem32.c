#include <stdio.h>

int PandigitalProduct(int a, int b, int *numbers);

int main()
{
    int a, b, sum = 0, i;
    int numbers[10000];
    for (i = 1; i < 10000; i++)
        numbers[i] = 0;
    for (a = 2; a < ((9999 / a) + (9999 % a)); a++)
    {
        for (b = a + 1; b < ((9999 / a) + (9999 % a)); b++)
            sum += PandigitalProduct(a, b, numbers);
    }
    printf("Sum: %i\n", sum);
    return 0;
}

int PandigitalProduct(int a, int b, int *numbers)
{
    int c = a * b, product = a * b, i;
    int v[10];
    for (i = 1; i < 10; i++)
        v[i] = 0;
    while (a)
    {
        if (!v[a % 10])
            v[a % 10] = 1;
        else
            return 0;
        a /= 10;
    }
    while (b)
    {
        if (!v[b % 10])
            v[b % 10] = 1;
        else
            return 0;
        b /= 10;
    }
    while (c)
    {
        if (!v[c % 10])
            v[c % 10] = 1;
        else
            return 0;
        c /= 10;
    }
    for (i = 1; i < 10; i++)
    {
        if (!v[i])
            return 0;
    }
    if (!numbers[product])
        numbers[product] = 1;
    else
        return 0;
    return product;
}