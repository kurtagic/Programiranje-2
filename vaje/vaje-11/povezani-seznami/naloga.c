#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

Vozlisce *addNode(Vozlisce *next, int value);

int vsotaI(Vozlisce *zacetek)
{
    int sum = 0;

    while (zacetek != NULL)
    {
        sum += zacetek->podatek;
        zacetek = zacetek->naslednje;
    }

    return sum;
}

int vsotaR(Vozlisce *zacetek)
{
    if (zacetek == NULL)
    {
        return 0;
    }

    return zacetek->podatek + vsotaR(zacetek->naslednje);
}

Vozlisce *vstaviUrejenoI(Vozlisce *zacetek, int element)
{
    Vozlisce *previous = NULL;
    Vozlisce *next = zacetek;

    while (next != NULL && next->podatek < element)
    {
        previous = next;
        next = next->naslednje;
    }

    Vozlisce *node = addNode(next, element);

    if (previous == NULL)
    {
        return node;
    }

    previous->naslednje = node;

    return zacetek;
}

Vozlisce *vstaviUrejenoR(Vozlisce *zacetek, int element)
{
    if (zacetek == NULL)
    {
        return addNode(NULL, element);
    }

    if (zacetek->podatek > element)
    {
        return addNode(zacetek, element);
    }

    zacetek->naslednje = vstaviUrejenoR(zacetek->naslednje, element);

    return zacetek;
}

Vozlisce *izbrisiUrejenoI(Vozlisce *zacetek, int element)
{
    Vozlisce *previous = NULL;
    Vozlisce *current = zacetek;

    while (current != NULL && current->podatek != element)
    {
        previous = current;
        current = current->naslednje;
    }

    if (current != NULL)
    {
        previous->naslednje = current->naslednje;
        free(current);
    }

    return zacetek;
}

Vozlisce *izbrisiUrejenoR(Vozlisce *zacetek, int element)
{
    if (zacetek == NULL)
    {
        return zacetek;
    }

    if (zacetek->podatek == element)
    {

        return zacetek->naslednje;
    }

    zacetek->naslednje = izbrisiUrejenoR(zacetek->naslednje, element);

    return zacetek;
}

Vozlisce *addNode(Vozlisce *next, int value)
{
    Vozlisce *node = (Vozlisce *)(malloc)(sizeof(Vozlisce));
    node->podatek = value;
    node->naslednje = next;

    return node;
}

#ifndef test

int main()
{
    return 0;
}

#endif
