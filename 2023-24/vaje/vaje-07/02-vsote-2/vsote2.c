#include <stdio.h>
#include <stdlib.h>

void izpisiVsote(int *array, int len, int n, int k);
void printArray(int *array, int n);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int *array = (int *)malloc(n * sizeof(int));

    izpisiVsote(array, 0, n, k);

    return 0;
}

void izpisiVsote(int *array, int index, int n, int k)
{
    if (n == 0)
    {
        printArray(array, index);
        return;
    }

    if (n < 0 || k == 0)
    {
        return;
    }

    array[index] = k;

    izpisiVsote(array, index + 1, n - k, k);
    izpisiVsote(array, index, n, k - 1);
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("%s", (i == n - 1) ? "\n" : " + ");
    }
}
