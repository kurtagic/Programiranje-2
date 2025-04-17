#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VOLUME 2001
#define MAX_OBJECTS 2001
#define MAX_SPECIALS 11

int max_price(int volume, int k, int **objects, int n, int index);

int max(int a, int b);
void fill_matrix(int **matrix, size_t n);

int memo[MAX_VOLUME][MAX_OBJECTS][MAX_SPECIALS][2];

int main()
{
    int volume, n, k;
    scanf("%d %d %d", &volume, &n, &k);

    int **objects = (int **)malloc(n * sizeof(int *));

    // matrix[0][i].. volumen i-tega predmet
    // matrix[1]i]... cena i-tega predmeta
    fill_matrix(objects, n);

    printf("%d\n", max_price(volume, k, objects, n, 0));

    return 0;
}

int max_price(int volume, int k, int **objects, int n, int index)
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

    int object_volume = objects[0][index];
    int object_price = objects[1][index];
    bool is_special = object_volume % 2 != 0;

    int with_object = max_price(volume - object_volume, (is_special ? k - 1 : k), objects, n, index + 1) + object_price;
    int no_object = max_price(volume, k, objects, n, index + 1);

    memo[volume][index][k][1] = max(with_object, no_object);
    memo[volume][index][k][0] = 1;

    return memo[volume][index][k][1];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

void fill_matrix(int **matrix, size_t n)
{
    for (size_t i = 0; i < 2; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
