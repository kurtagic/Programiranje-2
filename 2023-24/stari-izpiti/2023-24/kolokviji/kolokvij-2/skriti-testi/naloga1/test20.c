
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {28, 41, 33, 19, 17, 11, 38, 0, 9, 10, 26, 8, 14, 27, 4, 31, 40, 7, 42, 24, 37, 5, 20, 22, 1, 2, 15, 32, 35, 30, 39, 6, 36, 29, 12, 3, 21, 13, 16, 23, 18, 25};
const int PREJSNJE[] = {7, 24, 25, 35, 14, 21, 31, 17, 11, 8, 9, 5, 34, 37, 12, 26, 38, 4, 40, 3, 22, 36, 23, 39, 19, 41, 10, 13, 0, 33, 29, 15, 27, 2, 42, 28, 32, 20, 6, 30, 16, 1};
const int RANDOM[] = {18, 20, 22, 4, 9, 27, 14, 35, 23, 9, 24, 25, 36, 26, 3, 40, 10, 26, 26, 39, 13, 13, 42, 23, 11, 16, 8, 25, 4, 17, 41, 31, 42, 11, 30, 2, 31, 9, 4, 13, 32, 19};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 34;

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
