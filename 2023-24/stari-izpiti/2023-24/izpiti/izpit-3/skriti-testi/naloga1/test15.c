
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {7, 35, 4, 9, 25, 27, 36, 24, 29, 19, 40, 0, 28, 12, 22, 17, 33, 3, 37, 39, 10, 16, 20, 2, 41, 38, 13, 31, 8, 1, 14, 6, 26, 23, 5, 15, 30, 11, 32, 18, 21};
const int NN[] = {24, 15, 25, 19, 38, 31, 30, 41, 1, 39, 21, 7, 8, 28, 20, 3, 23, 9, 11, 18, 40, 33, 10, 4, 41, 32, 12, 6, 29, 35, 22, 36, 13, 2, 27, 17, 14, 0, 26, 37, 16};
const int RANDOM[] = {0, 14, 10, 35, 7, 26, 6, 40, 4, 18, 5, 14, 29, 1, 18, 32, 13, 1, 0, 19, 33, 37, 16, 23, 12, 2, 15, 20, 18, 23, 17, 2, 2, 12, 2, 2, 34, 12, 31, 2, 36};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 34;

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
