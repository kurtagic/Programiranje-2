#include <stdbool.h>
#include <stdio.h>

const int DIVISORS = 500;

int divisorsCount(long n);

int main()
{
    long triangular = 1;
    long i = 1;
    while (divisorsCount(triangular) < DIVISORS)
    {
        triangular += ++i;
    }

    printf("%ld\n", triangular);
    return 0;
}

int divisorsCount(long n)
{
    int max = 1;
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }

        max *= count + 1;
    }

    return max;
}
