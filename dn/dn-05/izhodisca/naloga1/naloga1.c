/*
gcc -D=test test01.c naloga1.c
./a.out
*/

#include "naloga1.h"

int *poisci(int *t, int *dolzina, int **konec)
{
    int i = 0;
    while (t[i] != 0)
    {
        i++;
    }

    **konec = t[i];

    i = 0;
    while (t[i] != 0)
    {
        i--;
    }

    int *prvi = t + i;

    *dolzina = (*konec - prvi) - 1;
    return prvi + 1;
}

#ifndef test
int main()
{
    return 0;
}
#endif
