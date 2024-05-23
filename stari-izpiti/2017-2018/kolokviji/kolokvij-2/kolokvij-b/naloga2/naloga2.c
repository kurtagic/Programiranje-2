#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define UNSET -1
#define NOT_SET 0
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

    int count = 0;
    placements[0] = SET;
    count += variations(k, n - 1, placements, 1);

    placements[0] = NOT_SET;
    count += variations(k, n, placements, 1);

    printf("%d\n", count);

    free(placements);

    return 0;
}

int variations(int k, int n, int *placements, int index)
{
    if (n < 0)
    {
        return 0;
    }

    if (index == k && n > 0)
    {
        return 0;
    }

    if (index == k && n == 0)
    {
        return 1;
    }

    int count = 0;
    int previous = placements[index - 1];

    if (previous == SET)
    {
        placements[index] = NOT_SET;
        count += variations(k, n, placements, index + 1);
    }

    if (previous == NOT_SET)
    {
        placements[index] = SET;
        count += variations(k, n - 1, placements, index + 1);

        placements[index] = NOT_SET;
        count += variations(k, n, placements, index + 1);
    }

    return count;
}
