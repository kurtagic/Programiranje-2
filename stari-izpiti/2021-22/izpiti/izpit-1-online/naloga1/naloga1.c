#include <string.h>

#include "naloga1.h"

void vstaviPredpono(char *predpona, Oseba **osebe, int stOsebi)
{
    int n = strlen(predpona);
    for (int i = 0; i < stOsebi; i++)
    {
        char *telefon = osebe[i]->telefon;

        memmove(telefon + n, telefon, strlen(telefon));
        memcpy(telefon, predpona, n);
    }
}

#ifndef test
int main()
{
    return 0;
}
#endif
