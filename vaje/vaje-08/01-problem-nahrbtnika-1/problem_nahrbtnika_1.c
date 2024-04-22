#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);

int maxPrice(int volume, int **objects, int n, int index);

void fillMatrix(int **matrix, int n);
void fillArray(int *array, int n);

int memo[20001][2001];
bool memoBool[2001][2001];

int main()
{
    int backpackVolume;
    int n;
    scanf("%d %d", &backpackVolume, &n);

    int **predmeti = (int **)malloc(n * sizeof(int *));
    // matrix[0][i] ... prostornina i-tega predmeta
    // matrix[1][i] ... cena i-tega predmeta
    fillMatrix(predmeti, n);

    printf("%d\n", maxPrice(backpackVolume, predmeti, n, 0));

    return 0;
}

int maxPrice(int volume, int **objects, int n, int index)
{
    if (memoBool[volume][index])
    {
        return memo[volume][index];
    }

    if (volume < 0)
    {
        return -99999999;
    }
    if (index >= n || volume == 0)
    {
        return 0;
    }

    int predmetVolume = objects[0][index];
    int predmetCena = objects[1][index];

    memo[volume][index] = max(maxPrice(volume - predmetVolume, objects, n, index + 1) + predmetCena,
                              maxPrice(volume, objects, n, index + 1));

    memoBool[volume][index] = true;

    return memo[volume][index];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

void fillMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
        fillArray(matrix[i], n);
    }
}

void fillArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
