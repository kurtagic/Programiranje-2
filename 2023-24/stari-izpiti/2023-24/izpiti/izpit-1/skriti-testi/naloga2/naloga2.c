#include <stdlib.h>

#include "naloga2.h"

void obdelaj(Vozlisce *zacetek, int k)
{
    Vozlisce *current = zacetek;
    Vozlisce *previous = NULL;

    int *buffer = (int *)malloc(k * sizeof(int));

    int index = 0;
    int sum = 0;

    while (current != NULL)
    {
        int podatek = current->podatek;

        if (index < k)
        {
            sum += podatek;
            buffer[index++] = podatek;

            previous = current;
            current = current->naslednje;

            continue;
        }

        if (podatek == sum)
        {
            Vozlisce *node = current;

            current = current->naslednje;
            previous->naslednje = current;

            free(node);

            continue;
        }

        sum = sum - buffer[index % k] + podatek;
        buffer[index++ % k] = podatek;

        previous = current;
        current = current->naslednje;
    }

    free(buffer);
}

#ifndef test
int main()
{
    return 0;
}
#endif
