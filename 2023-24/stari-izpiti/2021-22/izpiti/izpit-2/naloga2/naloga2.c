#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

#define MAX_SIZE 10E3

int getNode(Vozlisce **nodes, int n, Vozlisce *node);

int dolzinaCikla(Vozlisce *zacetek)
{
    Vozlisce **nodes = (Vozlisce **)malloc(MAX_SIZE * sizeof(Vozlisce *));

    Vozlisce *current = zacetek;
    for (int i = 0; current != NULL; i++)
    {
        int node = getNode(nodes, i, current);
        if (node != -1)
        {
            return i - node;
        }

        nodes[i] = current;
        current = current->naslednje;
    }

    return -1;
}

int getNode(Vozlisce **nodes, int n, Vozlisce *node)
{
    for (int i = 0; i < n; i++)
    {
        if (nodes[i] == node)
        {
            return i;
        }
    }

    return -1;
}

#ifndef test
int main()
{
    return 0;
}
#endif
