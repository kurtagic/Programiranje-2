
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {32, 62, 30, 49, 61, 69, 19, 39, 5, 72, 31, 24, 21, 0, 44, 4, 60, 64, 28, 23, 1, 74, 50, 70, 18, 56, 8, 42, 20, 2, 14, 25, 67, 15, 36, 68, 45, 59, 71, 13, 35, 29, 41, 38, 3, 22, 66, 27, 57, 53, 51, 12, 7, 11, 16, 17, 73, 65, 37, 54, 6, 10, 46, 58, 52, 9, 26, 43, 48, 40, 34, 63, 33, 55};
const int NN[] = {67, 46, 14, 53, 10, 40, 23, 13, 69, 33, 25, 18, 74, 32, 3, 61, 6, 52, 20, 70, 62, 74, 51, 34, 28, 73, 5, 41, 1, 30, 44, 56, 43, 4, 45, 48, 22, 54, 63, 0, 68, 2, 29, 71, 49, 50, 26, 42, 65, 11, 12, 21, 39, 24, 60, 64, 55, 9, 59, 16, 19, 31, 66, 37, 7, 72, 8, 38, 57, 35, 36, 58, 15, 17};
const int RANDOM[] = {65, 21, 55, 52, 71, 51, 51, 24, 52, 68, 0, 54, 72, 32, 22, 34, 14, 31, 14, 58, 11, 1, 45, 20, 18, 30, 21, 7, 71, 43, 23, 43, 34, 62, 65, 21, 47, 2, 32, 71, 2, 58, 13, 68, 55, 39, 19, 54, 10, 1, 37, 31, 54, 8, 7, 23, 37, 18, 39, 16, 63, 11, 64, 4, 42, 41, 18, 17, 0, 22, 63, 73, 39, 18};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 47;

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
