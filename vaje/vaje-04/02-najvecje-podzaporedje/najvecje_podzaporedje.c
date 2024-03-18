#include <limits.h>
#include <stdio.h>
int tabela[1000000];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tabela[i]);
    }

    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += tabela[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum <= 0)
        {
            sum = 0;
        }
    }

    printf("%d\n", max);

    return 0;
}
