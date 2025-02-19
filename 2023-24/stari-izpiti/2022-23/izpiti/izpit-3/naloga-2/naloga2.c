#include <stdbool.h>
#include <stdlib.h>

#include "naloga2.h"

int getAverage(int **slika, int i, int j, int d);

int **zmehcaj(int **slika, int n, int m, int d)
{
    int n2 = n - 2 * d;
    int m2 = m - 2 * d;

    int **image = (int **)malloc(n2 * sizeof(int *));
    for (int i = 0; i < n2; i++)
    {
        image[i] = (int *)malloc(m2 * sizeof(int));
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            image[i][j] = getAverage(slika, i, j, d);
        }
    }

    return image;
}

int getAverage(int **slika, int i, int j, int d)
{
    int average = 0;
    for (int x = i; x < i + 2 * d + 1; x++)
    {
        for (int y = j; y < j + 2 * d + 1; y++)
        {
            average += slika[x][y];
        }
    }

    return average / ((2 * d + 1) * (2 * d + 1));
}

#ifndef test
int main()
{
    return 0;
}
#endif
