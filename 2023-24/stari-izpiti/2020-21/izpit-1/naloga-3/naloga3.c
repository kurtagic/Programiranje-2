#include <stdio.h>
#include <stdlib.h>

void kombinacije(char *buffer, int length, int index);
void printArray(char *array, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int length = 2 * n - 1;
    char *buffer = (char *)malloc(length * sizeof(char));

    kombinacije(buffer, length, 0);

    free(buffer);

    return 0;
}

void kombinacije(char *buffer, int length, int index)
{
    if (index == length)
    {
        printArray(buffer, length);

        return;
    }

    for (int i = 0; i < 10; i++)
    {
        buffer[index] = i + '0';

        if (index + 1 >= length)
        {
            printArray(buffer, length);

            continue;
        }

        buffer[index + 1] = '+';
        kombinacije(buffer, length, index + 2);

        buffer[index + 1] = '-';
        kombinacije(buffer, length, index + 2);
    }
}

void printArray(char *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", array[i]);
    }

    printf("\n");
}
