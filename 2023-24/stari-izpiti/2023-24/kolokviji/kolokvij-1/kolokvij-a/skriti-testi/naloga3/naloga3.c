#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int *array, int n);

int main()
{
    int v;
    int s;
    int k;
    scanf("%d %d", &v, &s);

    int **matrix = (int **)malloc(v * sizeof(int *));

    for (int i = 0; i < v; i++)
    {
        matrix[i] = (int *)malloc(s * sizeof(int));
        for (int j = 0; j < s; j++)
        {
            int n;
            scanf("%d", &n);
            matrix[i][j] = n;
            if (n != 0)
            {
                k++;
            }
        }
    }

    int index_A_C = 0;
    int *zaporedje_A = (int *)malloc(k * sizeof(int));
    int *zaporedje_C = (int *)malloc(k * sizeof(int));
    int *zaporedje_B = (int *)malloc((v + 1) * sizeof(int));
    zaporedje_B[0] = 0;

    for (int i = 0; i < v; i++)
    {
        zaporedje_B[i + 1] = zaporedje_B[i];
        for (int j = 0; j < s; j++)
        {
            int stevilo = matrix[i][j];
            if (stevilo == 0)
            {
                continue;
            }

            zaporedje_A[index_A_C] = stevilo;
            zaporedje_C[index_A_C] = j;
            zaporedje_B[i + 1]++;
            index_A_C++;
        }
    }

    printArray(zaporedje_A, k);
    printArray(zaporedje_B, v + 1);
    printArray(zaporedje_C, k);

    return 0;
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

    return;
}
