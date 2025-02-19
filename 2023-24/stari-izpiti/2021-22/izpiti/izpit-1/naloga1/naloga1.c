#include <stdbool.h>

#include "naloga1.h"

bool getNumber(char *array, int i, int *number);

int sestEj(char *niz)
{
    int sum = 0;
    for (int i = 0; niz[i + 4] != '\0'; i++)
    {
        int number = 0;
        if (niz[i] == 'E' && getNumber(niz, i + 1, &number) && niz[i + 4] == '_')
        {
            sum += number;
            i += 4;
        }
    }

    return sum;
}

bool getNumber(char *array, int i, int *number)
{
    int a = array[i] - '0';
    int b = array[i + 1] - '0';
    int c = array[i + 2] - '0';

    *number = 100 * a + 10 * b + c;

    return 0 < a && a <= 9 && 0 <= b && b <= 9 && 0 <= c && c <= 9;
}

#ifndef test
int main()
{
    return 0;
}
#endif
