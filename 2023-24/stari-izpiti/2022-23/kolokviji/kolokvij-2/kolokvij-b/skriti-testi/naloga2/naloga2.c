#include "naloga2.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 10E3

bool isDuplicate(Vozlisce **nodes, int n, int x);

void izlociDuplikate(Vozlisce *zacetek)
{
    Vozlisce **nodes = (Vozlisce **)malloc(MAX_NODES * sizeof(Vozlisce *));
    for (int i = 0; i < MAX_NODES; i++)
    {
        nodes[i] = (Vozlisce *)malloc(sizeof(Vozlisce));
    }

    Vozlisce *current = zacetek;
    int len = 0;
    while (current != NULL)
    {
        if (isDuplicate(nodes, len, *current->p))
        {
            current = current->naslednje;
            continue;
        }

        nodes[len] = current;
        current = current->naslednje;
        len++;
    }

    for (int i = 0; i < len - 1; i++)
    {
        nodes[i]->naslednje = nodes[i + 1];
    }

    nodes[len - 1]->naslednje = NULL;

    zacetek = nodes[0];
}

bool isDuplicate(Vozlisce **nodes, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (*nodes[i]->p == x)
        {
            return true;
        }
    }

    return false;
}

#ifndef test
int main()
{
    return 0;
}
#endif
