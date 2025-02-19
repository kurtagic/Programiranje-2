
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {12, 21, 4, 18, 15, 25, 23, 0, 2, 32, 28, 43, 37, 33, 30, 35, 24, 14, 6, 17, 19, 26, 13, 16, 42, 8, 20, 11, 39, 34, 5, 27, 3, 10, 41, 7, 29, 36, 9, 38, 22, 40, 31};
const int PREJSNJE[] = {7, 43, 8, 32, 2, 30, 18, 35, 25, 38, 33, 27, 0, 22, 17, 4, 23, 19, 3, 20, 26, 1, 40, 6, 16, 5, 21, 31, 10, 36, 14, 42, 9, 13, 29, 15, 37, 12, 39, 28, 41, 34, 24};
const int RANDOM[] = {2, 14, 30, 21, 21, 34, 6, 6, 0, 38, 2, 23, 36, 7, 10, 39, 1, 28, 33, 35, 6, 13, 34, 4, 34, 43, 12, 33, 10, 29, 13, 11, 35, 38, 19, 28, 4, 8, 6, 0, 6, 41, 17};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 1;

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
