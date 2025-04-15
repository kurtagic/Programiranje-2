
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int* TABELA[] = {
    (int[]) { 0},
    (int[]) { 1,  0},
    (int[]) { 2,  3,  0},
    (int[]) { 4,  5,  6,  0},
    (int[]) { 7,  8,  9, 10,  0},
    (int[]) {11, 12, 13, 14, 15,  0},
    (int[]) {16, 17, 18, 19, 20, 21,  0},
    (int[]) {22, 23, 24, 25, 26, 27, 28,  0},
    (int[]) {29, 30, 31, 32, 33, 34, 35, 36,  0},
    (int[]) {37, 38, 39, 40, 41, 42, 43, 44, 45,  0},
    (int[]) {46, 47, 48, 49, 50, 51, 52, 53, 54, 55,  0},
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

