// Multiples of 3 or 5

#include <stdio.h>

int main()
{
    int n = 1000;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            counter += i;
        }
    }

    printf("%d\n", counter);

    return 0;
}
