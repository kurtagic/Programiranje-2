#include <math.h>
#include <stdlib.h>

#include "naloga2.h"

int **ap2pp(int (*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic)
{
    int ciljnoStStolpcev = (izvornoStVrstic * N) / ciljnoStVrstic;

    int **matrix = (int **)malloc(ciljnoStVrstic * sizeof(int *));
    for (int i = 0; i < ciljnoStVrstic; i++)
        matrix[i] = (int *)malloc((ciljnoStStolpcev + 1) * sizeof(int));

    int n, m = 0;
    for (int i = 0; i < izvornoStVrstic; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[n][m++] = kazalec[i][j];
            if (m == ciljnoStStolpcev)
            {
                matrix[n++][m] = 0;
                m = 0;
            }
        }
    }

    return matrix;
}

int (*pp2ap(int **kazalec, int izvornoStVrstic, int *ciljnoStVrstic))[N]
{
    float elements = 0;
    for (int i = 0; i < izvornoStVrstic; i++)
    {
        for (int j = 0; kazalec[i][j] != 0; j++)
        {
            elements++;
        }
    }

    *ciljnoStVrstic = (int)ceil(elements / N);
    int(*matrix)[N] = malloc(*ciljnoStVrstic * N * sizeof(int *));

    int n, m = 0;
    for (int i = 0; i < izvornoStVrstic; i++)
    {
        for (int j = 0; kazalec[i][j] != 0; j++)
        {
            matrix[n][m++] = kazalec[i][j];

            if (m == N)
            {
                n++;
                m = 0;
            }
        }
    }

    return matrix;
}

#ifndef test
int main()
{
    return 0;
}
#endif
