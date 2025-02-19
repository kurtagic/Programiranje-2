
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {583, 900, 1113, 1290, 1523, 1604, 1950, 1990, 1910, 1905, 1878, 1645, 1409, 1174, 1077, 922, 651, 493, 401, 204, 150, 73, 45, 0, 0},
    (int[]) {549, 803, 1063, 1319, 1592, 1691, 1973, 1996, 2023, 1900, 1946, 1720, 1444, 1372, 1020, 931, 551, 537, 357, 297, 191, 25, 143, 0, 0},
    (int[]) {699, 772, 1048, 1315, 1504, 1781, 1878, 1887, 1894, 1929, 1814, 1679, 1507, 1179, 1083, 854, 668, 411, 432, 159, 192, 110, 119, 127, 20},
};

int N = 3;
int M = 25;
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
