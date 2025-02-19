#include <stdio.h>
#include <stdlib.h>

void fillArray(int *array, int n);
void printMatrix(int **matrix, int n, int m);
void printArray(int *array, int n);

int main()
{
    int v, s, k;
    scanf("%d %d %d", &v, &s, &k);

    int *zaporedje_A = (int *)malloc(k * sizeof(int));
    int *zaporedje_B = (int *)malloc((v + 1) * sizeof(int));
    int *zaporedje_C = (int *)malloc(k * sizeof(int));

    fillArray(zaporedje_A, k);
    fillArray(zaporedje_B, v + 1);
    fillArray(zaporedje_C, k);

    int index_A_C = 0;
    int index_B = 1;

    int **matrix = (int **)malloc(v * sizeof(int *));
    for (int i = 0; i < v; i++)
    {
        matrix[i] = (int *)malloc(s * sizeof(int));
    }

    for (int i = 0; i < v; i++)
    {
        int nenicelniElementi = zaporedje_B[index_B] - zaporedje_B[index_B - 1];
        index_B++;

        for (int j = 0; j < nenicelniElementi; j++)
        {
            int column = zaporedje_C[index_A_C];
            matrix[i][column] = zaporedje_A[index_A_C];
            index_A_C++;
        }
    }

    printMatrix(matrix, v, s);

    return 0;
}

void fillArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

void printMatrix(int **matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printArray(matrix[i], m);
    }
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        if (i != n - 1)
        {
            printf("_");
        }
    }
    printf("\n");
}
