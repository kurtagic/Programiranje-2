#include <stdlib.h>

#include "naloga1.h"

int razdalja(Vozlisce *p, Vozlisce *q)
{
    int distance = 0;

    Vozlisce *current = p;

    while (current != NULL && current != q)
    {
        current = current->naslednje;
        distance++;
    }

    return distance;
}

#ifndef test
int main()
{
    return 0;
}
#endif
