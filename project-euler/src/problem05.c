// Smallest Multiple

#include <stdio.h>

long lcm(long a, long b);
long gcd(long a, long b);

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

long gcd(long a, long b)
{
    long result = (a < b) ? a : b;

    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }

        result--;
    }

    return result;
}

long lcm(long a, long b)
{
    //    return a * b / gcd(a, b);
    int result = (a > b) ? a : b;

    while (result % a != 0 || result % b != 0)
    {
        result++;
    }

    return result;
}
