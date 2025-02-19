
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {19, 37, 68, 32, 0, 72, 24, 61, 31, 35, 71, 62, 9, 57, 75, 2, 14, 55, 15, 17, 1, 5, 20, 53, 70, 66, 74, 21, 36, 13, 11, 43, 56, 38, 41, 3, 49, 50, 47, 22, 51, 7, 29, 25, 28, 54, 23, 60, 10, 6, 45, 39, 59, 48, 42, 8, 18, 33, 46, 30, 58, 63, 76, 67, 40, 27, 34, 52, 4, 65, 69, 73, 26, 12, 16, 64};
const int NN[] = {17, 50, 4, 56, 19, 26, 70, 63, 43, 3, 73, 76, 35, 33, 64, 68, 75, 8, 2, 55, 37, 72, 1, 48, 69, 34, 16, 5, 49, 57, 62, 25, 18, 47, 7, 32, 6, 45, 60, 20, 39, 61, 13, 66, 36, 42, 53, 58, 71, 24, 54, 22, 30, 10, 29, 31, 15, 38, 23, 11, 46, 67, 76, 52, 51, 21, 41, 59, 0, 27, 65, 12, 74, 9, 14, 40};
const int RANDOM[] = {22, 72, 52, 36, 55, 0, 2, 59, 21, 27, 61, 26, 5, 60, 75, 49, 14, 21, 8, 60, 19, 42, 63, 25, 16, 1, 36, 52, 6, 36, 36, 60, 31, 30, 40, 4, 19, 6, 3, 0, 54, 12, 36, 44, 32, 21, 14, 18, 31, 24, 8, 32, 49, 16, 23, 56, 21, 47, 70, 22, 49, 72, 11, 49, 22, 70, 41, 71, 42, 31, 33, 63, 73, 2, 53, 11};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 44;

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
