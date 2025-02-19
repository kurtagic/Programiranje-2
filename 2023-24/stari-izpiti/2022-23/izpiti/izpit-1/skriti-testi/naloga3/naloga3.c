#include <stdio.h>
#include <stdlib.h>

#include "naloga3.h"

#define MAX_SIZE 100

int getHeight(Vozlisce *start);

Vozlisce *vstaviStolpec(Vozlisce *start, int mesto, int vsebina)
{
    int h = getHeight(start);

    Vozlisce **nodes = (Vozlisce **)malloc(h * sizeof(Vozlisce *));
    for (int i = 0; i < h; i++)
    {
        nodes[i] = (Vozlisce *)malloc(sizeof(Vozlisce));
        nodes[i]->vsebina = vsebina + i;
        nodes[i]->desno = NULL;
        nodes[i]->dol = NULL;
    }

    for (int i = 0; i < h - 1; i++)
    {
        nodes[i]->dol = nodes[i + 1];
    }

    Vozlisce *row = start;

    int row_index = 0;

    while (row != NULL)
    {
        Vozlisce *col = row;
        Vozlisce *previous = NULL;

        int col_index = 0;

        while (col != NULL && col_index++ != mesto)
        {
            previous = col;
            col = col->desno;
        }

        if (previous != NULL)
        {
            previous->desno = nodes[row_index];
        }

        if (row_index == 0 && previous == NULL)
        {
            start = nodes[0];
        }

        nodes[row_index++]->desno = col;
        row = row->dol;
    }

    return start;
}

int getHeight(Vozlisce *start)
{
    Vozlisce *current = start;

    int height = 0;

    while (current != NULL)
    {
        current = current->dol;
        height++;
    }

    return height;
}

#ifndef test
int main()
{
    return 0;
}
#endif
