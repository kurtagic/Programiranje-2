
#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

int vsota(int *zac, int *kon)
{
    int sum = 0;

    while (zac <= kon)
    {
        sum += *zac;
        zac++;
    }

    return sum;
}

void indeksInKazalec(int *t, int *indeks, int **kazalec)
{
    if (*indeks == -1)
    {

        return;
    }
}

void frekvenceCrk(char *niz, int **frekvence)
{
    // dopolnite ...
}

#ifndef test

int main()
{
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
