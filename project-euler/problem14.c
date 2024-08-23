#include <stdio.h>

#define MAX_SIZE 1000000

int collatz_sequence(unsigned long n);

int main(void)
{
    int max_index = -1;
    int max_length = -1;

    for (int i = 1; i < MAX_SIZE; i++)
    {
        int length = collatz_sequence(i);

        if (length > max_length)
        {
            max_length = length;
            max_index = i;
        }
    }

    printf("%d: %d\n", max_index, max_length);

    return 0;
}

int collatz_sequence(unsigned long n)
{
    if (n == 1)
    {
        return 1;
    }

    n = (n % 2 == 0) ? n / 2 : 3 * n + 1;

    return 1 + collatz_sequence(n);
}
