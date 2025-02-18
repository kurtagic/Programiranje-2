#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n);

const int LIMIT = 2000000;

int main()
{
    long sum = 2;
    for (int i = 3; i < LIMIT; i += 2)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    printf("%ld\n", sum);
    return 0;
}

bool isPrime(int n)
{
    int root = sqrt(n);
    for (int i = 2; i <= root; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
