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
    *stOdsekov = steviloZnakov(niz, locilo) + 1;

    char **matrix = malloc(*stOdsekov * sizeof(char *));

    for (int i = 0; i < *stOdsekov; i++)
    {
        char *segment = kopirajDoZnaka(niz, locilo);
        matrix[i] = segment;
        niz += strlen(segment) + 1;
    }

    return matrix;
}

#ifndef test

int main()
{
    return 0;
}

#endif
