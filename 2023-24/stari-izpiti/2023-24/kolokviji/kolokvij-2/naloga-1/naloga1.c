#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "naloga1.h"

void nastavi(Vozlisce *zacetek)
{
    Vozlisce *previous = NULL;
    Vozlisce *current = zacetek;

    while (current != NULL)
    {
        current->prejsnje = previous;
        previous = current;
        current = current->naslednje;
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
