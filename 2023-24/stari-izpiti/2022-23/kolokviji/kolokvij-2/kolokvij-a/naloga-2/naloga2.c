#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

#define REMOVED -1
#define MAX_NODES 10E3

void removeDuplicates(Vozlisce *a, Vozlisce *b, int *len_na, int *len_nb);
void allocateMemory(Vozlisce **nodes, int n);
void makeList(Vozlisce *nodes[], int n, Vozlisce *node);

void izlociSkupne(Vozlisce *a, Vozlisce *b, Vozlisce **na, Vozlisce **nb)
{
    int len_na;
    int len_nb;

    removeDuplicates(a, b, &len_na, &len_nb);

    Vozlisce **nodes_na = (Vozlisce **)malloc(len_na * sizeof(Vozlisce *));
    allocateMemory(nodes_na, len_na);

    Vozlisce **nodes_nb = (Vozlisce **)malloc(len_nb * sizeof(Vozlisce *));
    allocateMemory(nodes_nb, len_nb);

    makeList(nodes_na, len_na, a);
    makeList(nodes_nb, len_nb, b);

    *na = nodes_na[0];
    *nb = nodes_nb[0];
}

void removeDuplicates(Vozlisce *a, Vozlisce *b, int *len_na, int *len_nb)
{
    int len_a = 0;
    int len_b = 0;
    int removed = 0;

    Vozlisce *current_a = a;
    while (current_a != NULL)
    {
        Vozlisce *current_b = b;
        while (current_b != NULL)
        {
            if (current_b->podatek != REMOVED && current_a->podatek == current_b->podatek)
            {
                current_a->podatek = REMOVED;
                current_b->podatek = REMOVED;
                removed++;
            }

            len_b++;
            current_b = current_b->naslednje;
        }

        len_a++;
        current_a = current_a->naslednje;
    }

    len_b /= len_a;

    *len_na = len_a - removed;
    *len_nb = len_b - removed;
}

void allocateMemory(Vozlisce **nodes, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodes[i] = (Vozlisce *)malloc(sizeof(Vozlisce));
    }
}

void makeList(Vozlisce *nodes[], int n, Vozlisce *node)
{
    int k = 0;
    Vozlisce *current = node;
    while (current != NULL)
    {
        if (current->podatek == REMOVED)
        {
            current = current->naslednje;
            continue;
        }

        nodes[k] = current;
        current = current->naslednje;
        k++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        nodes[i]->naslednje = nodes[i + 1];
    }

    if (n > 0)
    {
        nodes[n - 1]->naslednje = NULL;
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
