#include <ctype.h>
#include <stdlib.h>

#include "naloga.h"

#define ENGLISH_ALPHABET_LETTERS 26

int vsota(int *zac, int *kon)
{
    int sum = 0;
    for (int i = 0; zac[i] <= *kon; i++)
    {
        sum += zac[i];
    }

    return sum;
}

void indeksInKazalec(int *t, int *indeks, int **kazalec)
{
    if (*indeks == -1)
    {
        *indeks = *kazalec - t;
    }
    else
    {
        *kazalec = t + *indeks;
    }

    return;
}

void frekvenceCrk(char *niz, int **frekvence)
{
    int *array = (int *)malloc(ENGLISH_ALPHABET_LETTERS * sizeof(int));

    for (int i = 0; niz[i] != '\0'; i++)
    {
        char c = tolower(niz[i]);
        array[c - 'a'] += 1;
    }

    *frekvence = &array[0];

    return;
}

#ifndef test

int main()
{
    return 0;
}

#endif
