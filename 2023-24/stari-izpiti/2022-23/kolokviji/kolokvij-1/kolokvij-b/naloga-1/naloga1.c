
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fillPoint(int *array, int n);
int kvadratRazdalje(int *point_a, int *point_b, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int *tocka_a = (int *)malloc((n + 1) * sizeof(int));
    fillPoint(tocka_a, n);
    int *tocka_b = (int *)malloc((n + 1) * sizeof(int));
    fillPoint(tocka_b, n);

    printf("%d\n", kvadratRazdalje(tocka_a, tocka_b, n));

    return 0;
}
// d(A, B)^2 = (a1 - b1)^2 + ... + (an- bn)^2
int kvadratRazdalje(int *point_a, int *point_b, int n)
{
    int distance = 0;

    for (int i = 0; i < n; i++)
    {
        int a = point_a[i];
        int b = point_b[i];
        int sum = a - b;
        distance += sum * sum;
    }

    return distance;
}

void fillPoint(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    array[n] = '\0';

    return;
}
