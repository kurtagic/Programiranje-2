#include "naloga1.h"

int *poisci(int *t, int *dolzina, int **konec)
{
    // find start
    while (*(t - 1) != 0)
    {
        t--;
    }

    int *start = t;

    // find end
    while (*(t + 1) != 0)
    {
        t++;
    }

    *konec = t;
    *dolzina = (*konec - start) + 1;

    return start;
}

#ifndef test
int main()
{
    return 0;
}
#endif
