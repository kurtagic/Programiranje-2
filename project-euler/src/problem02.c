// Even Fibonacci Numbers

#include <stdio.h>

int main()
{
    const int LIMIT = 4000000;

    int a = 1;
    int b = 1;
    int c = 2;
    int sum = 0;

    while (c < LIMIT)
    {
        c = a + b;

        if (c % 2 == 0)
        {
            sum += c;
        }

        a = b;
        b = c;
    }

    printf("%d\n", sum);

    return 0;
}
