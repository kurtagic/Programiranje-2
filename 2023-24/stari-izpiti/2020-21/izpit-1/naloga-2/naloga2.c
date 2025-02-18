#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

Vozlisce *sticisce(Vozlisce *a, Vozlisce *b)
{
    Vozlisce *current_a = a;

    while (current_a != NULL)
    {
        Vozlisce *current_b = b;
        while (current_b != NULL)
        {
            if (current_a == current_b)
            {
                return current_a;
            }

            current_b = current_b->n;
        }

        current_a = current_a->n;
    }

    return NULL;
}

// TESTS
Vozlisce *naredi(int vred)
{
    Vozlisce *novo = malloc(sizeof(Vozlisce));
    novo->vrednost = vred;
    return novo;
}

int main()
{
    Vozlisce *prvo = naredi(1);
    Vozlisce *drugo = naredi(2);
    Vozlisce *tretje = naredi(3);
    Vozlisce *skupno = naredi(10);

    Vozlisce *cetrto = naredi(4);
    Vozlisce *peto = naredi(5);

    prvo->n = drugo;
    drugo->n = tretje;
    tretje->n = skupno;
    cetrto->n = skupno;

    printf("%d\n", sticisce(prvo, cetrto)->vrednost);

    return 0;
}
