#include <stdio.h>
#include <stdlib.h>

#include "naloga3.h"

#define MAX_SIZE 100

void getHeight(Vozlisce *start, int *h);

Vozlisce *vstaviStolpec(Vozlisce *start, int mesto, int vsebina)
{
    int h = 0;
    getHeight(start, &h);

    Vozlisce **nodes = (Vozlisce **)malloc(h * sizeof(Vozlisce *));
    for (int i = 0; i < h; i++)
    {
        nodes[i] = (Vozlisce *)malloc(sizeof(Vozlisce));
        nodes[i]->vsebina = vsebina + i;
        nodes[i]->desno = NULL;
    }

    for (int i = 0; i < h - 1; i++)
    {
        nodes[i]->dol = nodes[i + 1];
    }

    nodes[h - 1]->dol = NULL;

    Vozlisce *row = start;
    int row_index = 0;

    while (row != NULL)
    {
        Vozlisce *col = row;
        Vozlisce *previous = NULL;
        int col_index = 0;

        while (col != NULL && col_index != mesto)
        {
            previous = col;
            col = col->desno;
            col_index++;
        }

        if (previous != NULL)
        {
            previous->desno = nodes[row_index];
        }

        if (previous == NULL)
        {
            start = nodes[0];
        }

        nodes[row_index]->desno = col;
        row = row->dol;
        row_index++;
    }

    return start;
}

void getHeight(Vozlisce *start, int *h)
{
    Vozlisce *current = start;
    while (current != NULL)
    {
        current = current->dol;
        (*h)++;
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
