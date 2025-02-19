#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define UNSET -1
#define MAX_WEIGHT 10E3

typedef struct _Link Link;

struct _Link
{
    int start;
    int end;

    int weight;
};

void paths(Link **links, int *path, int n, int m, int K, int index, int sum);
bool isTaken(int *path, int n, int x);

void printArray(int *array, int n);

int main()
{
    int n, m, K;

    scanf("%d %d %d", &n, &m, &K);

    Link **links = (Link **)malloc(m * sizeof(Link *));
    for (int i = 0; i < m; i++)
    {
        links[i] = (Link *)malloc(sizeof(Link));
        scanf("%d %d %d", &links[i]->start, &links[i]->end, &links[i]->weight);
    }

    int *path = (int *)malloc(n * sizeof(int));
    path[0] = 0;
    for (int i = 1; i < n; i++)
    {
        path[i] = UNSET;
    }

    paths(links, path, n, m, K, 0, 0);

    return 0;
}

void paths(Link **links, int *path, int n, int m, int K, int index, int sum)
{
    if (sum > K)
    {
        return;
    }

    int current = path[index];

    if (current == n - 1)
    {
        printArray(path, index + 1);
        
        return;
    }

    for (int i = 0; i < m; i++)
    {
        if (current != links[i]->start)
        {
            continue;
        }

        int adjacent = links[i]->end;

        if (isTaken(path, index, adjacent))
        {
            continue;
        }

        path[index + 1] = adjacent;
        paths(links, path, n, m, K, index + 1, sum + links[i]->weight);
        path[index + 1] = UNSET;
    }
}

bool isTaken(int *array, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return true;
        }
    }

    return false;
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);

        if (i + 1 < n)
        {
            printf("->");
        }
    }

    printf("\n");
}
