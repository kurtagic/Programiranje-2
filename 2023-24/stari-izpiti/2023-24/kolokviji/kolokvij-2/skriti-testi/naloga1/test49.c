
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {10, 25, 4, 20, 30, 45, 36, 19, 38, 5, 14, 56, 16, 34, 31, 21, 44, 28, 24, 42, 13, 1, 43, 39, 35, 32, 52, 29, 23, 7, 40, 48, 26, 41, 50, 47, 15, 46, 6, 27, 51, 3, 12, 2, 11, 53, 55, 17, 18, 22, 49, 37, 54, 8, 0, 9};
const int PREJSNJE[] = {54, 21, 43, 41, 2, 9, 38, 29, 53, 55, 0, 44, 42, 20, 10, 36, 12, 47, 48, 7, 3, 15, 49, 28, 18, 1, 32, 39, 17, 27, 4, 14, 25, 56, 13, 24, 6, 51, 8, 23, 30, 33, 19, 22, 16, 5, 37, 35, 31, 50, 34, 40, 26, 45, 52, 46};
const int RANDOM[] = {23, 3, 7, 27, 8, 7, 45, 51, 33, 18, 3, 5, 30, 22, 52, 48, 7, 39, 13, 7, 36, 54, 41, 2, 47, 52, 15, 53, 37, 23, 6, 19, 6, 32, 34, 39, 37, 22, 2, 12, 14, 50, 36, 41, 15, 33, 50, 53, 34, 26, 49, 16, 16, 37, 18, 46};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 33;

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
