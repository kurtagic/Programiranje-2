#include <stdbool.h>
#include <stdio.h>

#include "inverz.h"

long inverz(long y, long a, long b)
{
    while (a <= b)
    {
        long mid = a + (b - a) / 2;
        long x = f(mid);

        if (x == y)
        {
            return mid;
        }

        if (x < y)
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
