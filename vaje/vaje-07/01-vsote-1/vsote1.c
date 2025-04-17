#include <stdio.h>

int sums_count(int n, int k);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d\n", sums_count(n, k));

    return 0;
}

int sums_count(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }

    if (n < 0 || k == 0)
    {
        return 0;
    }

    return sums_count(n - k, k) + sums_count(n, k - 1);
}
