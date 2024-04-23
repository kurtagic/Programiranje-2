#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VOLUME 2001
#define MAX_OBJECTS 2001

int maxPrice(int volume, int **objects, int n, int index);

int max(int a, int b);
void fillMatrix(int **matrix, int n);
void fillArray(int *array, int n);

// int objectsMemo[MAX_VOLUME][MAX_OBJECTS][2];

// manjse kot so dimenzije matrik, vec se breaka...
int memo2[20001][2001];
bool memoBool2[2001][2001];

int objectsMemo[MAX_VOLUME][MAX_OBJECTS][4];

int main()
{
    int backpackVolume;
    int n;
    scanf("%d %d", &backpackVolume, &n);

    int **predmeti = (int **)malloc(n * sizeof(int *));

    // matrix[0][i].. volumen i-tega predmet
    // matrix[1]i]... cena i-tega predmeta
    fillMatrix(predmeti, n);

    printf("%d\n", maxPrice(backpackVolume, predmeti, n, 0));

    return 0;
}

int maxPrice(int volume, int **objects, int n, int index)
{
    if (objectsMemo[volume][index][0] == 2)
    {
        return objectsMemo[volume][index][1];
    }
    if (volume < 0)
    {
        return INT_MIN;
    }
    if (index >= n || volume == 0)
    {
        return 0;
    }

    int predmetVolume = objects[0][index];
    int predmetCena = objects[1][index];

    int withPredmet = maxPrice(volume - predmetVolume, objects, n, index + 1) + predmetCena;
    int noPredmet = maxPrice(volume, objects, n, index + 1);

    objectsMemo[volume][index][1] = max(withPredmet, noPredmet);
    objectsMemo[volume][index][0] = 2;

    return objectsMemo[volume][index][1];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

void fillMatrix(int **matrix, int n)
{
    for (int i = 0; i < 2; i++)
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
