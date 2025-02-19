#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void rekurz(int *buffer, int n, int k, int r);
void swap(int *buffer, int r, int a, int b);
bool isSorted(int *array, int n);

static int counter = 0;

int main()
{
    int n, k, r;
    scanf("%d %d %d", &n, &k, &r);

    int *buffer = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &buffer[i]);

    rekurz(buffer, n, k, r);

    printf("%d\n", counter);

    free(buffer);

    return 0;
}

void rekurz(int *buffer, int n, int k, int r)
{
    if (isSorted(buffer, n))
    {
        counter++;
    }

    if (k <= 0)
    {
        return;
    }

    for (int i = 0; i < n - 2 * r + 1; i++)
    {
        for (int j = i + r; j < n - r + 1; j++)
        {
            swap(buffer, r, i, j);
            rekurz(buffer, n, k - 1, r);
            swap(buffer, r, i, j); // backtrack
        }
    }
}

bool isSorted(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            return false;
        }
    }

    return true;
}

void swap(int *buffer, int r, int a, int b)
{
    for (int i = 0; i < r; i++)
    {
        buffer[a + i] ^= buffer[i + b];
        buffer[i + b] ^= buffer[i + a];
        buffer[i + a] ^= buffer[i + b];
    }
}
