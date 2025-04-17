#include <stdio.h>
#include <stdlib.h>

void print_sums(int *array, int len, int n, int k);
void print_sum(int *array, int n);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int *array = (int *)malloc(n * sizeof(int));

    print_sums(array, 0, n, k);

    return 0;
}

void print_sums(int *array, int index, int n, int k)
{
    if (n == 0)
    {
        print_sum(array, index);
        return;
    }

    if (n < 0 || k == 0)
    {
        return;
    }

    array[index] = k;

    print_sums(array, index + 1, n - k, k);
    print_sums(array, index, n, k - 1);
}

void print_sum(int *array, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("%s", (i == n - 1) ? "\n" : " + ");
    }
}
