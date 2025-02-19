#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga1.h"

void nastavi(Vozlisce *zacetek)
{
    Vozlisce *pp = NULL;
    Vozlisce *previous = NULL;
    Vozlisce *current = zacetek;

    while (current != NULL)
    {
        if (pp != NULL)
        {
            pp->nn = current;
        }

        pp = previous;
        previous = current;

        current->nn = NULL;
        current = current->naslednje;
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
