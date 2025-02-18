#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define UNSET 0
#define MAX_SIZE 10E6

int permutations(int *array, int len, int n, int m, int current);
int sumArray(int *array, int n);

void printArray(int *array, int n);

int main()
{
    int n;
    int m;

    scanf("%d %d", &n, &m);

    int len = MAX_SIZE;
    int *array = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
    {
        array[i] = UNSET;
    }

    printf("%d\n", permutations(array, len, n, m, 0));

    return 0;
}

int permutations(int *array, int len, int n, int m, int current)
{
    int currentSum = sumArray(array, len);

    if (currentSum == n)
    {
        return 1;
    }

    int count = 0;
    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            int d = j * i;

            if (currentSum + d > n)
            {
                continue;
            }

            array[current] = d;
            count += permutations(array, len, n, m, current + 1);
            array[current] = UNSET;
        }
    }

    return count;
}

int sumArray(int *array, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == UNSET)
        {
            break;
        }

        sum += array[i];
    }

    return sum;
}
