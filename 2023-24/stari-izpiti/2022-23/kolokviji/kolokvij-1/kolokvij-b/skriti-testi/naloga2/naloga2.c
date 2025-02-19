#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int matrixLength(char **matrix);
void fillArrayWithDots(char *array, int start, int end);

char **naSredino(char **nizi, int ciljnaDolzina)
{
    int len = matrixLength(nizi);
    char **matrix = (char **)malloc((len + 1) * sizeof(char *));

    for (int i = 0; i < len; i++)
    {
        matrix[i] = (char *)malloc((ciljnaDolzina + 1) * sizeof(char));
        matrix[i][ciljnaDolzina] = '\0';

        int arrayLen = strlen(nizi[i]);
        int leftCount = (ciljnaDolzina - arrayLen) / 2;
        int rightStart = leftCount + arrayLen;

        fillArrayWithDots(matrix[i], 0, leftCount);
        fillArrayWithDots(matrix[i], rightStart, ciljnaDolzina);

        for (int j = 0; j < arrayLen; j++)
        {
            matrix[i][leftCount + j] = nizi[i][j];
        }
    }

    return matrix;
}

int matrixLength(char **matrix)
{
    int len = 0;
    for (int i = 0; matrix[i] != NULL; i++)
    {
        len++;
    }

    return len;
}

void fillArrayWithDots(char *array, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        array[i] = '.';
    }
}

#ifndef test

int main()
{
    return 0;
}

#endif
