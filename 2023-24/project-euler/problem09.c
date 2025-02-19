#include <stdbool.h>
#include <stdio.h>

bool isPythagoreanTriplet(int a, int b, int c);

int main()
{
    for (int a = 1; a <= 333; a++)
    {
        for (int b = a; b <= 666; b++)
        {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c)
            {
                printf("%ld\n", (long)a * b * c);
                return 0;
            }
        }
    }

    return 0;
}
