
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {12, 13, 30, 8, 27, 29, 25, 9, 34, 14, 31, 19, 32, 11, 26, 22, 23, 20, 21, 5, 0, 16, 6, 15, 10, 24, 28, 33, 4, 35, 1, 3, 2, 17, 7};
const int NN[] = {32, 11, 1, 34, 33, 35, 24, 14, 7, 26, 3, 5, 2, 19, 28, 6, 15, 0, 16, 29, 12, 23, 25, 22, 31, 10, 4, 17, 27, 35, 13, 8, 30, 20, 9};
const int RANDOM[] = {17, 13, 9, 20, 8, 34, 33, 28, 23, 16, 12, 24, 4, 8, 21, 27, 4, 5, 34, 13, 6, 23, 10, 23, 4, 27, 2, 35, 30, 2, 33, 4, 24, 16, 26};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 18;

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
