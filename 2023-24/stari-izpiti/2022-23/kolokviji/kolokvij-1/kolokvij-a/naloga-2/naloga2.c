#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getLongestArray(char **matrix, int n);

char **poStolpcih(char **nizi, int stVhodnih, int *stIzhodnih)
{
    *stIzhodnih = getLongestArray(nizi, stVhodnih);

    // matrix: rows = *stIzhodnih, cols = stVhodnih
    char **matrix = (char **)malloc((*stIzhodnih + 1) * sizeof(char *));

    for (int i = 0; i < *stIzhodnih; i++)
    {
        matrix[i] = (char *)malloc((stVhodnih + 1) * sizeof(char));
    }

    for (int i = 0; i < *stIzhodnih; i++)
    {
        int k = 0;
        for (int j = 0; j < stVhodnih; j++)
        {
            if (strlen(nizi[j]) > i)
            {
                matrix[i][k] = nizi[j][i];
                k++;
            }
        }
    }

    return matrix;
}

int getLongestArray(char **matrix, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int len = strlen(matrix[i]);
        if (len > max)
        {
            max = len;
        }
    }
    return max;
}

#ifndef test

int main()
{
    return 0;
}

#endif
