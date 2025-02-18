#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VOLUME 2001
#define MAX_OBJECTS 2001
#define MAX_SPECIALS 11

int maxPrice(int volume, int k, int **objects, int n, int index);

int max(int a, int b);
void fillMatrix(int **matrix, int n);
void fillArray(int *array, int n);

int memo[MAX_VOLUME][MAX_OBJECTS][MAX_SPECIALS][2];

int main()
{
    int backpackVolume;
    int n;
    int k;
    scanf("%d %d %d", &backpackVolume, &n, &k);

    int **predmeti = (int **)malloc(n * sizeof(int *));

    // matrix[0][i].. volumen i-tega predmet
    // matrix[1]i]... cena i-tega predmeta
    fillMatrix(predmeti, n);

    printf("%d\n", maxPrice(backpackVolume, k, predmeti, n, 0));

    return 0;
}

int maxPrice(int volume, int k, int **objects, int n, int index)
{
    if (volume < 0 || k < 0)
    {
        return INT_MIN;
    }

    if (index >= n || volume == 0)
    {
        return 0;
    }

    if (memo[volume][index][k][0] == 1)
    {
        return memo[volume][index][k][1];
    }

    int predmetVolume = objects[0][index];
    int predmetCena = objects[1][index];
    bool jePoseben = predmetVolume % 2 != 0;

    int withPredmet = maxPrice(volume - predmetVolume, (jePoseben ? k - 1 : k), objects, n, index + 1) + predmetCena;
    int noPredmet = maxPrice(volume, k, objects, n, index + 1);

    memo[volume][index][k][1] = max(withPredmet, noPredmet);
    memo[volume][index][k][0] = 1;

    return memo[volume][index][k][1];
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
