#include <stdio.h>
#include <stdlib.h>

void sums(int n, int a, int b, int *array, int index, int current);
void printArray(int *array, int n);

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int *array = (int *)malloc(b * sizeof(int));
    for (int i = 0; i < b; i++)
    {
        array[i] = 0;
    }

    sums(n, a, b, array, 0, 0);

    free(array);

    return 0;
}

void sums(int n, int a, int b, int *array, int index, int current)
{
    if (current > n || index > b)
    {
        return;
    }

    if (a <= index && current == n)
    {
        printArray(array, index);
        return;
    }

    int previous = index == 0 ? 1 : array[index - 1];

    for (int i = previous; i <= n; i++)
    {
        array[index] = i;
        sums(n, a, b, array, index + 1, current + i);
    }
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);

        if (i + 1 < n)
        {
            printf("+");
        }
    }

    printf("\n");
}
