
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {28, 5, 13, 2, 11, 12, 37, 9, 17, 19, 7, 23, 6, 39, 1, 29, 22, 20, 35, 4, 3, 34, 31, 24, 32, 36, 16, 8, 26, 38, 15, 18, 14, 0, 30, 10, 33, 21, 27};
const int NN[] = {26, 12, 39, 13, 23, 6, 21, 19, 20, 4, 9, 24, 37, 39, 5, 38, 31, 3, 10, 11, 2, 30, 18, 32, 14, 33, 22, 17, 16, 27, 29, 35, 1, 28, 15, 7, 0, 34, 8};
const int RANDOM[] = {36, 12, 33, 14, 38, 7, 7, 20, 10, 5, 36, 34, 34, 7, 29, 33, 35, 13, 11, 25, 7, 6, 25, 31, 2, 7, 20, 36, 15, 9, 35, 12, 12, 32, 8, 30, 11, 20, 23};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 25;

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
