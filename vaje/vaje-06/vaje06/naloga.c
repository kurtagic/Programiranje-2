
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int steviloZnakov(char *niz, char znak)
{
    int count = 0;
    for (int i = 0; niz[i] != '\0'; i++)
    {
        if (niz[i] == znak)
        {
            count++;
        }
    }

    return count;
}

char *kopirajDoZnaka(char *niz, char znak)
{
    int len = 0;
    while (niz[len] != znak && niz[len] != '\0')
    {
        len++;
    }

    char *array = (char *)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++)
    {
        array[i] = niz[i];
    }

    array[len] = '\0';

    return array;
}

char **razcleni(char *niz, char locilo, int *stOdsekov)
{
    int k = steviloZnakov(niz, locilo) + 1;
    *stOdsekov = k;
    char **tab = malloc(k * sizeof(char *));
    for (int i = 0; i < k; i++)
    {
        char *kos = kopirajDoZnaka(niz, locilo);
        tab[i] = kos;
        niz += strlen(kos) + 1;
    }
    return tab;
}

#ifndef test

int main()
{
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
