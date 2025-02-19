#include <stdlib.h>

#include "naloga3.h"

Vozlisce *drevo(int n, int *podatki)
{
    if (n == 0)
    {
        return NULL;
    }

    int size = (1 << (n - 1)) - 1;
    Vozlisce *koren = (Vozlisce *)malloc(sizeof(Vozlisce));

    koren->podatek = podatki[0];
    koren->levo = drevo(n - 1, podatki + 1);
    koren->desno = drevo(n - 1, podatki + 1 + size);

    return koren;
}

#ifndef test
int main()
{
    return 0;
}
#endif
