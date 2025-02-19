
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {31, 40, 11, 25, 18, 1, 39, 9, 16, 28, 4, 6, 20, 36, 21, 17, 12, 5, 32, 35, 30, 19, 29, 26, 23, 22, 10, 33, 34, 24, 0, 38, 8, 14, 15, 2, 3, 13, 27, 7};
const int NN[] = {38, 40, 6, 22, 32, 40, 7, 28, 12, 34, 18, 39, 30, 3, 19, 5, 20, 1, 8, 2, 0, 35, 24, 10, 26, 29, 4, 14, 15, 23, 31, 27, 16, 21, 17, 11, 25, 36, 33, 9};
const int RANDOM[] = {6, 26, 31, 5, 22, 13, 16, 31, 31, 14, 40, 15, 37, 14, 13, 28, 27, 14, 1, 32, 10, 30, 22, 23, 9, 3, 12, 30, 5, 1, 23, 19, 15, 31, 31, 11, 29, 6, 1, 13};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 37;

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
