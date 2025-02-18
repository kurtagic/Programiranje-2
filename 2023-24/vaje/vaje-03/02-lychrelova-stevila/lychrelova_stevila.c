#include <stdbool.h>
#include <stdio.h>

const long LIMIT = 10e17;

bool isLycherl(long n, int step);
bool isPalindrome(long n);
long prezrcali(long n);

int main()
{
    int k;
    int a;
    int b;

    scanf("%d %d %d", &k, &a, &b);

    int counter = 0;
    for (int i = a; i <= b; i++)
    {
        if (isLycherl(i, k))
        {
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
}

bool isLycherl(long n, int steps)
{
    int step = 0;
    while (step < steps && n <= LIMIT)
    {
        n += prezrcali(n);

        if (isPalindrome(n))
        {
            return false;
        }

        step++;
    }

    return !isPalindrome(n);
}

long prezrcali(long n)
{
    long prezrcaljeno = 0;
    while (n > 0)
    {
        int digit = n % 10;
        prezrcaljeno = 10 * prezrcaljeno + digit;
        n /= 10;
    }

    return prezrcaljeno;
}

bool isPalindrome(long n)
{
    return n == prezrcali(n);
}
