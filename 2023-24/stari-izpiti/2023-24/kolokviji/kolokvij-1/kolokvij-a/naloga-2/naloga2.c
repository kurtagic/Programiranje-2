#include <stdio.h>
#include <string.h>

#include "naloga2.h"

void racionaliziraj(char **nizi)
{
    for (int i = 0; nizi[i] != NULL; i++)
    {
        for (int j = 0; nizi[j] != NULL; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (!strcmp(nizi[i], nizi[j]))
            {
                nizi[j] = nizi[i];
            }
        }
    }
}

#ifndef test

int main()
{
    return 0;
}

#endif
