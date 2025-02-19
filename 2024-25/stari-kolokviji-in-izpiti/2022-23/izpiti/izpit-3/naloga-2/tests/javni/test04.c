
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {70, 50, 80, 10, 20, 60},
    (int[]) { 0, 40, 30, 10, 90, 20},
    (int[]) {80, 40,  0, 30, 70, 50},
    (int[]) {90, 60, 20, 50, 10, 80},
    (int[]) {60, 90, 70, 40, 30, 20},
};

int N = 5;
int M = 6;
int D = 1;

int main() {
    int** nova = zmehcaj(SLIKA, N, M, D);
    int noviN = N - 2 * D;
    int noviM = M - 2 * D;

    for (int i = 0; i < noviN; i++) {
        for (int j = 0; j < noviM; j++) {
            printf("%5d", nova[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < noviN; i++) {
        free(nova[i]);
    }
    free(nova);

    return 0;
}
