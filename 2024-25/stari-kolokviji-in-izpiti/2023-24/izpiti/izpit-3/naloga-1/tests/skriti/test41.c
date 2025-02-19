
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {12, 38, 35, 34, 15, 7, 22, 28, 33, 6, 37, 13, 27, 14, 2, 19, 30, 4, 10, 8, 9, 5, 1, 24, 18, 26, 20, 16, 36, 11, 32, 21, 17, 31, 29, 25, 39, 3, 0};
const int NN[] = {27, 0, 25, 29, 19, 28, 1, 36, 31, 22, 3, 14, 16, 2, 35, 8, 32, 15, 37, 33, 6, 7, 38, 18, 10, 20, 9, 30, 39, 13, 17, 5, 4, 21, 11, 26, 39, 34, 12};
const int RANDOM[] = {4, 24, 39, 16, 22, 33, 19, 37, 18, 17, 23, 33, 30, 23, 25, 11, 25, 11, 26, 7, 3, 32, 9, 37, 11, 22, 36, 34, 35, 23, 10, 32, 13, 32, 3, 33, 29, 3, 34};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 23;

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
