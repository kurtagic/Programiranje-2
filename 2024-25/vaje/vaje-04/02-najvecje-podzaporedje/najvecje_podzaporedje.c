#include <limits.h>
#include <stdio.h>

int maxVsota(int *array, int len);

int main()
{
    int n;
    scanf("%d", &n);

    int tabela[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tabela[i]);
    }

    printf("%d\n", maxVsota(tabela, n));

    return 0;
}

int maxVsota(int *array, int len)
{
    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < len; i++)
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
