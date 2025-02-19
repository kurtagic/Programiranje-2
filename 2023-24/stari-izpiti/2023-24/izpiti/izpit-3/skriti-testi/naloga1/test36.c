
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {44, 10, 57, 6, 46, 47, 24, 49, 19, 1, 15, 8, 31, 2, 0, 36, 21, 37, 29, 3, 5, 35, 50, 55, 60, 13, 65, 45, 26, 51, 48, 40, 12, 28, 64, 53, 62, 34, 39, 7, 59, 17, 27, 56, 41, 32, 43, 25, 54, 52, 18, 58, 23, 4, 33, 9, 42, 16, 30, 61, 22, 63, 20, 11, 38};
const int NN[] = {41, 15, 16, 24, 43, 25, 60, 52, 3, 10, 36, 19, 40, 57, 44, 62, 35, 34, 51, 6, 47, 53, 18, 9, 22, 2, 65, 32, 65, 58, 54, 59, 31, 26, 38, 4, 20, 64, 7, 49, 61, 37, 45, 42, 17, 12, 56, 13, 33, 23, 29, 30, 55, 46, 28, 1, 27, 21, 48, 63, 50, 11, 5, 8, 39};
const int RANDOM[] = {32, 34, 42, 16, 33, 62, 57, 27, 20, 61, 57, 15, 54, 21, 58, 49, 0, 3, 40, 54, 41, 31, 6, 39, 33, 29, 30, 64, 55, 28, 28, 26, 62, 0, 6, 34, 41, 65, 34, 43, 39, 44, 43, 55, 36, 50, 25, 61, 12, 38, 23, 31, 57, 42, 50, 6, 15, 22, 29, 39, 41, 64, 23, 6, 46};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 14;

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
