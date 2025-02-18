// Smallest Multiple

#include <stdio.h>

long lcm(long a, long b);

int main()
{
    long n = 1;
    for (int i = 1; i <= 20; i++)
    {
        n = lcm(n, i);
    }

    printf("%ld\n", n);

    return 0;
}

long lcm(long a, long b)
{
    int result = (a > b) ? a : b;

    while (result % a != 0 || result % b != 0)
    {
        result++;
    }

    return result;
}
