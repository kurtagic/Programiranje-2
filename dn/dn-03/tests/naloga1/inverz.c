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
