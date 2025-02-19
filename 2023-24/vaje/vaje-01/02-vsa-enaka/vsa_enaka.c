#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int previous = -1;
    int allEqual = 1;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (previous < 0)
        {
            previous = a;
            continue;
        }

        if (previous != a)
        {
            allEqual = 0;
            break;
        }
    }

    printf("%d\n", allEqual);

    return 0;
}
