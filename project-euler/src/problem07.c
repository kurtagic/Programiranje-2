#include <math.h>
#include <stdbool.h>
#include <stdio.h>

const int LIMIT = 10001;

bool isPrime(int n);

int main()
{
    int count = 0;
    int prime = -1;

    for (int i = 2; count < LIMIT; i++)
    {
        if (isPrime(i))
        {
            count++;
            prime = i;
        }
    }

    printf("%d\n", prime);

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
