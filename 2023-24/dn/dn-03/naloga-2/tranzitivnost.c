#include <stdbool.h>
#include <stdio.h>

#include "tranzitivnost.h"

void soTranzitivne(bool array[], int a, int b);

int tranzitivnost(int a, int b)
{
    bool tranzitivnosti[3] = {true, true, false};
    soTranzitivne(tranzitivnosti, a, b);

    bool tranzitivna = tranzitivnosti[0];
    bool antitranzitivna = tranzitivnosti[1];
    bool netranzitivna = tranzitivnosti[2];

    if (tranzitivna && antitranzitivna)
    {
        return 1;
    }

    if (tranzitivna)
    {
        return 2;
    }

    if (antitranzitivna)
    {
        return 3;
    }

    if (netranzitivna)
    {
        return 4;
    }

    return -1;
}

void soTranzitivne(bool array[], int a, int b)
{
    for (int x = a; x <= b; x++)
    {
        for (int y = a; y <= b; y++)
        {
            for (int z = a; z <= b; z++)
            {
                if (f(x, y) == 1 && f(y, z) == 1)
                {
                    if (f(x, z) != 1)
                    {
                        array[0] = false;
                    }
                    if (f(x, z) != 0)
                    {
                        array[1] = false;
                    }
                    if (f(x, z) == 0)
                    {
                        array[2] = true;
                    }
                }

                if (!array[0] && !array[1] && array[2])
                {
                    return;
                }
            }
        }
    }

    return;
}
