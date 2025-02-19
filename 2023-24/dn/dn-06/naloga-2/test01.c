
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int TABELA[][N] = {
    {15, 27, 12, 29,  8,  9},
    { 1,  5,  3, 26, 14, 17},
    {11, 19,  6, 23, 24, 30},
    { 7, 25, 16, 13, 20,  2},
    {21, 10, 18, 22,  4, 28}
};

int main() {
    int izvornoStVrstic = sizeof(TABELA) / sizeof(TABELA[0]);
    int ciljnoStVrstic = 1;
    int** rezultat = ap2pp(TABELA, izvornoStVrstic, ciljnoStVrstic);

    for (int i = 0;  i < ciljnoStVrstic;  i++) {
        int* p = rezultat[i];
        while (*p != 0) {
            printf("%3d", *p);
            p++;
        }
        printf("\n");
        free(rezultat[i]);
    }
    free(rezultat);

    return 0;
}
