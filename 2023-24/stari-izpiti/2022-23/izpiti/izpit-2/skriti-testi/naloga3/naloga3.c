#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga3.h"

#define MAX_SIZE 100

int getHeight(Vozlisce *start);
int getWidth(Vozlisce *start);

Vozlisce *diagonala(Vozlisce *start, int *vsota)
{
    int height = getHeight(start);
    int width = getWidth(start);

    int len = height > width ? width : height;
    Vozlisce **nodes = (Vozlisce **)malloc(len * sizeof(Vozlisce *));

    for (int i = 0; i < len; i++)
    {
        nodes[i] = (Vozlisce *)malloc(sizeof(Vozlisce));
        nodes[i]->dol = NULL;
    }

    for (int i = 0; i < len - 1; i++)
    {
        nodes[i]->desno = nodes[i + 1];
    }

    nodes[len - 1]->desno = NULL;

    Vozlisce *row = start;
    int row_index = 0;
    while (row != NULL)
    {
        Vozlisce *column = row;
        int column_index = 0;
        while (column != NULL && column_index < width - row_index - 1)
        {
            column = column->desno;
            column_index++;
        }

        if (column_index == width - row_index - 1)
        {
            nodes[row_index]->vsebina = column->vsebina;
            *vsota += column->vsebina;
        }

        row = row->dol;
        row_index++;
    }

    return nodes[0];
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

int getWidth(Vozlisce *start)
{
    Vozlisce *current = start;

    int width = 0;
    while (current != NULL)
    {
        current = current->desno;
        width++;
    }

    return width;
}

#ifndef test
int main()
{
    return 0;
}
#endif
