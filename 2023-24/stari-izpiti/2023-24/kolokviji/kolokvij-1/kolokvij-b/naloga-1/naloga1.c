#include <stdio.h>

void printRange(int n, int len, int increment);

int main()
{
    int n;
    scanf("%d", &n);

    int len;
    scanf("%d", &len);
    len++;

    int number = 0;
    int increment = 1;
    for (int i = 0; i < n; i++)
    {
        printRange(number, len, increment);

        number += (len - 3) * increment;
        scanf("%d", &len);
        increment *= -1;
    }

    return 0;
}

void printRange(int n, int len, int increment)
{
    for (int i = 0; i < len - 1; i++)
    {
        printf("%d\n", n);
        n += increment;
    }
}
