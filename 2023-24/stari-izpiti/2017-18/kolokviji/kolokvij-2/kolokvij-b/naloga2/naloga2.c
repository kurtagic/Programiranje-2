#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define UNSET 0
#define SET 1

int variations(int n, int k, int *placements, int index);

int main()
{
    int k;
    int n;

    scanf("%d %d", &k, &n);

    int *placements = (int *)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++)
    {
        placements[i] = UNSET;
    }

    printf("%d\n", variations(k, n, placements, 0));

    free(placements);

    return 0;
}

int variations(int k, int n, int *placements, int index)
{
    if (n < 0)
    {
        return 0;
    }

    if (index == k)
    {
        return n == 0 ? 1 : 0;
    }

    int count = 0;
    int previous = index == 0 ? UNSET : placements[index - 1];

    if (previous == SET)
    {
        placements[index] = UNSET;
        count += variations(k, n, placements, index + 1);
    }

    if (previous == UNSET)
    {
        placements[index] = SET;
        count += variations(k, n - 1, placements, index + 1);

        placements[index] = UNSET;
        count += variations(k, n, placements, index + 1);
    }

    return count;
}
