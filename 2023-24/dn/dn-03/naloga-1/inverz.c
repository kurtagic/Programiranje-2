#include <stdbool.h>
#include <stdio.h>

#include "inverz.h"

// binary search je tuki dobr ker je f(x) strogo monotono narascajoca funkcija
// aka SORTED in dostop do vrednosti funkcije je KONSTANTEN

long inverz(long x, long a, long b)
{
    while (a <= b)
    {
        long mid = a + (b - a) / 2;
        long y = f(mid);

        if (y == x)
        {
            return mid;
        }

        if (y < x)
        {
            a = mid + 1;
        }
        else
        {
            b = mid - 1;
        }
    }

    return -1;
}
