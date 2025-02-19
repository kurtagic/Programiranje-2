
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {34, 32, 33, 29, 5, 18, 8, 27, 12, 21, 26, 16, 35, 22, 20, 1, 10, 3, 24, 25, 17, 13, 6, 2, 23, 14, 15, 31, 19, 9, 28, 30, 4, 0, 7};
const int PREJSNJE[] = {33, 15, 23, 17, 32, 4, 22, 34, 6, 29, 16, 35, 8, 21, 25, 26, 11, 20, 5, 28, 14, 9, 13, 24, 18, 19, 10, 7, 30, 3, 31, 27, 1, 2, 0};
const int RANDOM[] = {9, 11, 4, 28, 29, 33, 9, 33, 31, 26, 17, 14, 33, 23, 23, 17, 30, 32, 33, 0, 12, 27, 23, 22, 35, 14, 2, 4, 31, 25, 19, 21, 12, 18, 24};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 11;

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
