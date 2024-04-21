#include "naloga1.h"

int *poisci(int *t, int *dolzina, int **konec)
{

    while (*(t - 1) != 0)
    {
        t--;
    }

    int *prvi = t;

    while (*t != 0)
    {
        t++;
    }

    *konec = (t - 1);
    *dolzina = (*konec - prvi) + 1;
    return prvi;
}

#ifndef test
int main()
{
    return 0;
}
#endif
