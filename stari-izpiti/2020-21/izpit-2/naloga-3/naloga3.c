#include <stdlib.h>

#include "naloga3.h"

#define MAX_LENGTH 20

int rekurz(Vozlisce *izvor, Vozlisce *cilj, int currentPath);

int najkrajsaPot(Vozlisce *izvor, Vozlisce *cilj)
{
    return rekurz(izvor, cilj, 0);
}

int rekurz(Vozlisce *izvor, Vozlisce *cilj, int currentPath)
{
    if (currentPath > 20)
    {
        return 1000;
    }

    if (izvor == cilj)
    {
        return 0;
    }

    int path_n = 0;
    int path_r = 0;

    if (izvor->n != NULL && izvor->n != izvor)
    {
        path_n = rekurz(izvor, cilj, currentPath + 1) + 1;
    }

    if (izvor->r != NULL && izvor->r != izvor)
    {
        path_r = rekurz(izvor, cilj, currentPath + 1) + 1;
    }

    return path_n < path_r ? path_n : path_r;
}
