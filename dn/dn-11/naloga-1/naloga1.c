#include <stdlib.h>

#include "naloga1.h"

void deleteNodesBetween(Vozlisce *start, Vozlisce *stop);

Vozlisce *zdesetkaj(Vozlisce *zacetek, int k)
{
    Vozlisce *current = zacetek;
    Vozlisce *previousKth = NULL;

    for (int i = 1; current != NULL; i++)
    {
        if (i % k != 0)
        {
            current = current->naslednje;

            continue;
        }

        // set head as first k-th node
        if (previousKth == NULL)
        {
            deleteNodesBetween(zacetek, current);

            zacetek = current;
            previousKth = current;

            current = current->naslednje;

            continue;
        }

        // head is set, continue with current k-th node

        deleteNodesBetween(previousKth->naslednje, current);

        previousKth->naslednje = current;
        previousKth = previousKth->naslednje;

        current = current->naslednje;
    }

    // remove nodes after last k-th element
    if (previousKth != NULL)
    {
        deleteNodesBetween(previousKth->naslednje, NULL);
    }

    previousKth->naslednje = NULL;

    return zacetek;
}

// frees node in interval including start, excluding stop ( Interval = [start, stop) )
void deleteNodesBetween(Vozlisce *start, Vozlisce *stop)
{
    Vozlisce *current = start;
    while (current != NULL && current != stop)
    {
        Vozlisce *temp = current;
        current = current->naslednje;
        free(temp);
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
