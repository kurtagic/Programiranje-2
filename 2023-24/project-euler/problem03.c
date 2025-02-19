// Largest Prime Factor

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n);

int main()
{
    const long NUMBER = 600851475143;
    int root = sqrt(NUMBER);

    int largestPrimeFactor = 0;

    for (int i = 2; i < root; i++)
    {
        if (NUMBER % i == 0 && isPrime(i))
        {
            largestPrimeFactor = i;
        }
    }

    printf("%d\n", largestPrimeFactor);
    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
