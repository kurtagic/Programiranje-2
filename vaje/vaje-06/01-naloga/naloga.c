#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int steviloZnakov(char *niz, char znak)
{
    int count = 0;
    for (size_t i = 0; niz[i] != '\0'; i++)
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
    size_t a;
    for (a = 0; niz[a] != znak && niz[a] != '\0'; a++);

    char *array = (char *)malloc((a + 1) * sizeof(char));

    for (size_t i = 0; i < a; i++)
    {
        array[i] = niz[i];
    }

    array[a] = '\0';

    return array;
}

char **razcleni(char *niz, char locilo, int *stOdsekov)
{
    *stOdsekov = steviloZnakov(niz, locilo) + 1;

    char **buffer = malloc(*stOdsekov * sizeof(char *));

    for (size_t i = 0; i < *stOdsekov; i++)
    {
        char *segment = kopirajDoZnaka(niz, locilo);
        buffer[i] = segment;
        niz += strlen(segment) + 1;
    }

    return buffer;
}

#ifndef test
int main()
{
    return 0;
}
#endif
