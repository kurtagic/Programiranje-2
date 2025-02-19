#include <stdlib.h>

#include "naloga2.h"

Vozlisce *zlij(Vozlisce *a, Vozlisce *b)
{
    Vozlisce *head = NULL;
    if (a->podatek < b->podatek)
    {
        head = a;
        a = a->naslednje;
    }
    else
    {
        head = b;
        b = b->naslednje;
    }

    Vozlisce *current = head;

    while (a != NULL && b != NULL)
    {
        if (a->podatek < b->podatek)
        {
            current->naslednje = a;
            a = a->naslednje;
        }
        else
        {
            current->naslednje = b;
            b = b->naslednje;
        }
        current = current->naslednje;
    }

    current->naslednje = (a != NULL) ? a : b;

    return head;
}

#ifndef test
int main()
{
    return 0;
}
#endif
