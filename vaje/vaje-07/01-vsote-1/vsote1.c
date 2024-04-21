#include <stdio.h>

int steviloVsot(int n, int k);

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d\n", steviloVsot(n, k));

    return 0;
}

int steviloVsot(int n, int k)
{
    int sum = 0;
    if (n == 0)
    {
        return 1;
    }
    if (n < 0 || k == 0)
    {
        return 0;
    }

    return steviloVsot(n - k, k) + steviloVsot(n, k - 1);
}
