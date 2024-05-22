#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define UNSET 10E+1

typedef struct
{
    int x;
    int y;
} Kamen;

void move(Kamen **rocks, int *path, int n, int K, int current, int step);
float distance(Kamen *a, Kamen *b);
void printPath(int *path, int n);

int main()
{
    int n;
    int K;

    scanf("%d %d", &n, &K);
    Kamen **rocks = (Kamen **)malloc(n * sizeof(Kamen *));
    for (int i = 0; i < n; i++)
    {
        rocks[i] = (Kamen *)malloc(sizeof(Kamen));
        scanf("%d %d", &rocks[i]->x, &rocks[i]->y);
    }

    int *path = (int *)malloc(n * sizeof(int));
    path[0] = 0;
    for (int i = 1; i < n; i++)
    {
        path[i] = UNSET;
    }

    move(rocks, path, n, K, 0, 1);

    return 0;
}

void move(Kamen **rocks, int *path, int n, int K, int current, int step)
{
    if (current == n - 1)
    {
        printPath(path, n);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == current || distance(rocks[current], rocks[i]) > K)
        {
            continue;
        }

        if (distance(rocks[i], rocks[n - 1]) >= distance(rocks[current], rocks[n - 1]))
        {
            continue;
        }

        path[step] = i;
        move(rocks, path, n, K, i, step + 1);
        path[step] = UNSET;
    }
}

float distance(Kamen *a, Kamen *b)
{
    return sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2));
}

void printPath(int *path, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (path[i] == UNSET)
        {
            break;
        }

        printf("%d", path[i]);
        if (i + 1 < n && path[i + 1] != UNSET)
        {
            printf("->");
        }
    }

    printf("\n");
}
