#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(char *array, int n);

int main()
{
    int rows;
    int cols;

    int dolzina_A = 0;
    int dolzina_B = 0;
    int dolzina_C = 0;

    scanf("%d %d", &rows, &cols);

    char *zaporedje_A = (char *)malloc(rows * cols * sizeof(char));
    char *zaporedje_B = (char *)malloc(rows * cols * sizeof(char));
    char *zaporedje_C = (char *)malloc(rows * cols * sizeof(char));

    zaporedje_B[0] = 0 + '0';
    zaporedje_B[1] = '_';
    dolzina_B = 2;

    for (int i = 0; i < rows; i++)
    {
        int rowNumbers = 0;
        for (int j = 0; j < cols; j++)
        {
            int n;
            scanf("%d", &n);

            if (n != 0)
            {
                rowNumbers++;
                if (dolzina_A != 0)
                {
                    zaporedje_A[dolzina_A] = '_';
                    dolzina_A++;
                }
                zaporedje_A[dolzina_A] = n + '0';
                dolzina_A++;
            }
        }

        if (dolzina_B != 2)
        {
            zaporedje_B[dolzina_B] = '_';
            dolzina_B++;
        }
        int b = 0;
        if (i == 0)
        {
            b = 0;
        }
        else
        {
            b = zaporedje_B[i - 1];
        }
        zaporedje_B[dolzina_B] = (b + rowNumbers) + '0';
        dolzina_B++;
    }

    zaporedje_A[dolzina_A] = '\0';
    zaporedje_B[dolzina_B] = '\0';

    printArray(zaporedje_A, dolzina_A);
    printArray(zaporedje_B, dolzina_B);
    printArray(zaporedje_C, dolzina_C);
    return 0;
}

void printArray(char *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");

    return;
}
