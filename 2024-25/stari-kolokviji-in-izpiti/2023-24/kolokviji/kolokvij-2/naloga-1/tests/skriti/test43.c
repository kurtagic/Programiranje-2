
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {5, 9, 16, 19, 35, 8, 13, 33, 32, 22, 3, 12, 25, 21, 6, 36, 1, 28, 14, 31, 24, 2, 10, 18, 11, 0, 27, 29, 30, 4, 20, 26, 23, 15, 7, 34};
const int PREJSNJE[] = {25, 16, 21, 10, 29, 0, 14, 34, 5, 1, 22, 24, 11, 6, 18, 33, 2, 36, 23, 3, 30, 13, 9, 32, 20, 12, 31, 26, 17, 27, 28, 19, 8, 7, 35, 4};
const int RANDOM[] = {12, 4, 34, 22, 25, 20, 4, 35, 13, 5, 20, 10, 17, 2, 29, 30, 31, 27, 29, 16, 20, 8, 14, 25, 19, 30, 9, 23, 18, 6, 30, 3, 31, 23, 32, 16};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 17;

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
