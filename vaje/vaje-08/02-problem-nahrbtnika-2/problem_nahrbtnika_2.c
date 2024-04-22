#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);

int maxPrice(int volume, int k, int **objects, int n, int index);

void fillMatrix(int **matrix, int n);
void fillArray(int *array, int n);

int memo[2001][2001][11];
bool memoBool[2001][2001][11];

int main()
{
    int backpackVolume;
    int n;
    int k;
    scanf("%d %d %d", &backpackVolume, &n, &k);

    int **predmeti = (int **)malloc(n * sizeof(int *));
    // matrix[0][i] ... prostornina i-tega predmeta
    // matrix[1][i] ... cena i-tega predmeta
    fillMatrix(predmeti, n);

    printf("%d\n", maxPrice(backpackVolume, k, predmeti, n, 0));

    return 0;
}

int maxPrice(int volume, int k, int **objects, int n, int index)
{

    if (memoBool[volume][index][k])
    {
        return memo[volume][index][k];
    }

    if (volume < 0 || k < 0)
    {
        return -99999999;
    }

    if (index >= n || volume == 0)
    {
        return 0;
    }

    int predmetVolume = objects[0][index];
    int predmetCena = objects[1][index];

    memoBool[volume][index][k] = true;
    memo[volume][index][k] =
        max(maxPrice(volume - predmetVolume, (predmetVolume % 2 == 0) ? k : k - 1, objects, n, index + 1) + predmetCena,
            maxPrice(volume, k, objects, n, index + 1));

    return memo[volume][index][k];
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
