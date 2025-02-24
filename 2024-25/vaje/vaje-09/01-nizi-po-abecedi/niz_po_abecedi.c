#include <stdio.h>
#include <stdlib.h>

void printChars(char *array, int n, char c1, char c2, int index);

int main()
{
    int n;
    char c1, c2;

    scanf("%d %c %c", &n, &c1, &c2);

    char *array = (char *)malloc((n + 1) * sizeof(char));

    printChars(array, n, c1, c2, 0);

    return 0;
}

void printChars(char *array, int n, char c1, char c2, int index)
{
    if (index >= n)
    {
        return;
    }

    for (char i = c1; i <= c2; i++)
    {
        array[index] = i;
        array[index + 1] = 0;

        printf("%s\n", array);

        printChars(array, n, c1, c2, index + 1);
    }
}
