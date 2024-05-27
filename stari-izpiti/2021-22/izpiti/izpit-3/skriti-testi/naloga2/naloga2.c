#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

bool isNaslovna(Vozlisce *previous, Vozlisce *node);

void vstaviH1(Vozlisce *zacetek)
{
    Vozlisce *previous = NULL;
    Vozlisce *current = zacetek;

    while (current != NULL)
    {
        if (isNaslovna(previous, current))
        {
            char *row = current->niz;

            memmove(row + 4, row, strlen(row));
            memcpy(row, "<h1>", strlen("<h1>"));
            strcat(row, "</h1>");
        }

        previous = current;
        current = current->naslednje;
    }
}

bool isNaslovna(Vozlisce *previous, Vozlisce *node)
{
    return node->niz[0] && (!previous || !previous->niz[0]) && (!node->naslednje || !node->naslednje->niz[0]);
}

#ifndef test
int main()
{
}
#endif
