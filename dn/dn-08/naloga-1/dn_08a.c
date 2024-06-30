#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, r;
    scanf("%d %d %d", &n, &k, &r);

    int *buffer = (int *)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        scanf("%d", &buffer[i]);

    free(buffer);

    return 0;
}
