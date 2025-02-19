
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {462, 771, 1101, 1473, 1645, 1897, 1867, 1931, 1598, 1472, 1044, 692, 594, 273},
    (int[]) {550, 705, 1210, 1498, 1786, 1944, 2023, 1878, 1838, 1434, 1197, 820, 588, 245},
    (int[]) {514, 773, 1048, 1456, 1585, 1844, 2016, 1967, 1712, 1326, 1006, 802, 427, 254},
};

int N = 3;
int M = 14;
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
