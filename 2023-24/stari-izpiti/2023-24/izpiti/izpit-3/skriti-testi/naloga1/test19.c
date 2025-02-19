
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {8, 59, 38, 61, 23, 55, 31, 3, 20, 36, 52, 19, 45, 34, 47, 4, 33, 9, 51, 6, 48, 62, 10, 16, 60, 2, 18, 25, 58, 64, 49, 44, 35, 32, 37, 21, 29, 43, 15, 30, 53, 13, 5, 26, 28, 24, 22, 1, 50, 40, 27, 11, 63, 12, 39, 7, 14, 56, 46, 17, 65, 57, 42, 54, 41};
const int NN[] = {20, 17, 15, 57, 16, 7, 44, 61, 48, 29, 63, 6, 24, 37, 1, 23, 32, 36, 11, 31, 50, 42, 52, 33, 65, 38, 51, 2, 46, 41, 40, 28, 21, 35, 43, 62, 64, 26, 4, 49, 12, 34, 55, 18, 58, 60, 10, 59, 27, 53, 25, 19, 54, 45, 30, 3, 47, 14, 22, 9, 65, 56, 5, 39, 13};
const int RANDOM[] = {40, 34, 28, 53, 33, 45, 55, 33, 20, 27, 43, 37, 15, 37, 52, 30, 49, 59, 5, 23, 61, 51, 41, 43, 22, 52, 22, 18, 28, 55, 25, 59, 30, 2, 3, 26, 30, 63, 17, 5, 22, 28, 20, 15, 57, 2, 39, 26, 4, 17, 6, 43, 9, 51, 35, 21, 22, 42, 14, 12, 0, 58, 49, 26, 12};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 0;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->nn = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->nn == v[NN[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}
