
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int* TABELA[] = {
    (int[]) { 7,  0},
    (int[]) { 3, 12, 16,  1,  0},
    (int[]) { 2,  8, 11,  0},
    (int[]) { 5, 13,  9,  0},
    (int[]) {14,  4,  0},
    (int[]) {15,  6, 10,  0},
};

int main() {
    int izvornoStVrstic = sizeof(TABELA) / sizeof(TABELA[0]);
    int ciljnoStVrstic = 0;
    int(*rezultat)[N] = pp2ap(TABELA, izvornoStVrstic, &ciljnoStVrstic);

    for (int i = 0;  i < ciljnoStVrstic;  i++) {
        for (int j = 0;  j < N;  j++) {
            printf("%3d", rezultat[i][j]);
        }
        printf("\n");
    }
    free(rezultat);

    return 0;
}
