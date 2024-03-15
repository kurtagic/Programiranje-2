
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c inverz.c -lm
./test01

*/

#include <stdbool.h>
#include <stdio.h>

#include "inverz.h"

long inverz(long x, long a, long b)
{
    for (int i = a; i <= b; i++)
    {
        if (f(i) == x)
        {
            return i;
        }
    }

    return NULL;
}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
