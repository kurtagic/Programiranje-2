#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int max_sum(int *array, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int* zaporedje = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zaporedje[i]);
    }

    printf("%d\n", max_sum(zaporedje, n));

    free(zaporedje);

    return 0;
}

int max_sum(int *array, int  n)
{
    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += array[i];

        if (sum > max)
        {
            max = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return max;
}
