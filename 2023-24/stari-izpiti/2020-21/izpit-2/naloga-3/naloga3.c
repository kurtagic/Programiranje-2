#include <stdio.h>
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
    if (currentPath >= MAX_LENGTH)
    {
        return MAX_LENGTH;
    }

    if (izvor == cilj)
    {
        return currentPath;
    }

    int path_n = MAX_LENGTH;
    int path_r = MAX_LENGTH;

    if (izvor->n != NULL && izvor->n != izvor)
    {
        path_n = rekurz(izvor->n, cilj, currentPath + 1);
    }

    if (izvor->r != NULL && izvor->r != izvor)
    {
        path_r = rekurz(izvor->r, cilj, currentPath + 1);
    }

    return path_n < path_r ? path_n : path_r;
}

// TESTS
Vozlisce *naredi()
{
    Vozlisce *node = malloc(sizeof(Vozlisce));
    node->n = NULL;
    node->r = NULL;

    return node;
}

int main()
{
    Vozlisce *n1 = naredi();
    Vozlisce *n2 = naredi();
    Vozlisce *n3 = naredi();
    Vozlisce *n4 = naredi();
    Vozlisce *n5 = naredi();
    Vozlisce *n6 = naredi();
    Vozlisce *n7 = naredi();
    Vozlisce *n8 = naredi();
    Vozlisce *n9 = naredi();
    Vozlisce *n10 = naredi();

    n1->n = n2;
    n1->r = NULL;

    n2->n = n3;
    n2->r = n2;

    n3->n = n4;
    n3->r = NULL;

    n4->n = n5;
    n4->r = n6;

    n5->n = n6;
    n5->r = n8;

    n6->n = n7;
    n6->r = n3;

    n7->n = n8;
    n7->r = NULL;

    n8->n = n9;
    n8->r = n10;

    n9->n = n10;
    n9->r = NULL;

    n10->n = NULL;
    n10->r = NULL;

    printf("%d\n", najkrajsaPot(n1, n10));

    return 0;
}
