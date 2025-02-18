#include <stdlib.h>

#include "naloga2.h"

void obdelaj(Vozlisce *zacetek)
{
    Vozlisce *current = zacetek;
    Vozlisce *original = zacetek;
    int counter = 0;

    while (current != NULL)
    {
        if (current->podatek == original->podatek)
        {
            counter++;

            current = current->naslednje;
            continue;
        }

        original->podatek *= counter;
        original->naslednje = current;
        original = current;
        counter = 1;

        current = current->naslednje;
    }

    original->podatek *= counter;
    original->naslednje = NULL;
}

#ifndef test
int main()
{
    return 0;
}
#endif
