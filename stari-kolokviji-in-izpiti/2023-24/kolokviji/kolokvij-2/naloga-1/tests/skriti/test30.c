
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {4, 60, 1, 61, 30, 59, 44, 29, 21, 69, 40, 67, 72, 63, 68, 0, 39, 3, 35, 27, 38, 20, 5, 51, 34, 11, 50, 26, 71, 48, 16, 13, 18, 15, 58, 12, 42, 49, 45, 32, 22, 7, 19, 28, 53, 55, 24, 65, 66, 31, 14, 33, 54, 57, 46, 64, 37, 47, 56, 8, 17, 52, 6, 36, 25, 2, 43, 73, 41, 23, 9, 70, 10};
const int PREJSNJE[] = {15, 2, 65, 17, 0, 22, 62, 41, 59, 70, 72, 25, 35, 31, 50, 33, 30, 60, 32, 42, 21, 8, 40, 69, 46, 64, 27, 19, 43, 7, 4, 49, 39, 51, 24, 18, 63, 56, 20, 16, 10, 68, 36, 66, 6, 38, 54, 57, 29, 37, 26, 23, 61, 44, 52, 45, 58, 53, 34, 5, 1, 3, 73, 13, 55, 47, 48, 11, 14, 9, 71, 28, 12};
const int RANDOM[] = {20, 5, 20, 4, 5, 11, 0, 70, 39, 20, 50, 67, 13, 65, 58, 4, 64, 34, 67, 47, 8, 46, 45, 60, 60, 46, 47, 0, 28, 14, 38, 48, 10, 57, 63, 27, 37, 1, 68, 4, 60, 6, 19, 9, 64, 65, 51, 40, 55, 54, 18, 28, 35, 17, 3, 47, 1, 28, 20, 17, 33, 70, 69, 44, 43, 56, 6, 55, 43, 26, 28, 2, 1};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 62;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->prejsnje = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->prejsnje == v[PREJSNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}
