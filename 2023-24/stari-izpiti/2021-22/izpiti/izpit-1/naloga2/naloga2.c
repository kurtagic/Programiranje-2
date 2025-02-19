#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

Vozlisce **tabelaSeznamov(int *t, int d, int n)
{
    Vozlisce **rezultat = (Vozlisce **)malloc(n * sizeof(Vozlisce *));
    for (int i = 0; i < n; i++)
    {
        rezultat[i] = NULL;
        Vozlisce *current = NULL;

        for (int j = 1; j <= d; j++)
        {
            if (j % (int)pow(2, i) != 0)
            {
                continue;
            }

            Vozlisce *node = (Vozlisce *)malloc(sizeof(Vozlisce *));
            node->vTabelo = &t[j - 1];

            if (current == NULL)
            {
                rezultat[i] = node;
            }
            else
            {
                current->naslednje = node;
            }

            current = node;
        }

        current->naslednje = NULL;
    }

    return rezultat;
}

#ifndef test
int main()
{
    return 0;
}
#endif
