#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int max = -1;
    int second_max = -1;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a > max)
        {
            second_max = max;
            max = a;

            continue;
        }

        if (a > second_max)
        {
            second_max = a;
        }
    }

    printf("%d\n", second_max);

    return 0;
}
