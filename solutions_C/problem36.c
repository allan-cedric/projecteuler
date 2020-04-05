#include <stdio.h>

#define MAX 1000000

int is_palindrome_10(int n);
int is_palindrome_2(int n);

int main()
{
    int i, sum = 0;
    for (i = 1; i < MAX; i++)
    {
        if (is_palindrome_10(i) && is_palindrome_2(i))
            sum += i;
    }
    printf("Sum: %i\n", sum);
    return 0;
}

int is_palindrome_10(int n)
{
    int reverse_n = 0, store_n = n;
    while (store_n)
    {
        reverse_n = reverse_n * 10 + (store_n % 10);
        store_n /= 10;
    }
    return (reverse_n == n);
}

int is_palindrome_2(int n)
{
    int binary[64];
    int i = 0;
    while (n)
    {
        binary[i++] = n % 2;
        n >>= 1;
    }
    int j;
    i--;
    for (j = 0; j <= (i / 2); j++)
    {
        if (binary[j] != binary[i - j])
            return 0;
    }
    return 1;
}