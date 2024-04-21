#include "naloga2.h"

void zamenjaj(int **a, int **b)
{
    int *c = *a;
    *a = *b;
    *b = c;
}

void uredi(int **a, int **b, int **c)
{
    if (**a > **b)
    {
        zamenjaj(a, b);
    }
    if (**b > **c)
    {
        zamenjaj(b, c);
    }
    if (**a > **b)
    {
        zamenjaj(a, b);
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
