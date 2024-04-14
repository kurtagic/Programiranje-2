#include "naloga.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

const int ENGLISH_ALPHABET_LETTERS = 26;

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
    if (*indeks != -1)
    {
        *kazalec = &t[*indeks];
        return;
    }

    int i = 0;
    while (*kazalec != &t[i])
    {
        i++;
    }

    *indeks = i;

    return;
}

void frekvenceCrk(char *niz, int **frekvence)
{
    int *array = (int *)malloc((ENGLISH_ALPHABET_LETTERS + 1) * sizeof(int));
    for (int i = 0; niz[i] != '\0'; i++)
    {
        char c = tolower(niz[i]);
        array[c - 'a'] += 1;
    }
    array[ENGLISH_ALPHABET_LETTERS] = '\0';

    *frekvence = &array[0];
    return;
}

#ifndef test

int main()
{
    return 0;
}

#endif
