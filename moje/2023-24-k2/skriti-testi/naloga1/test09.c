
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {1, 27, 30, 6, 15, 35, 31, 33, 16, 25, 20, 38, 29, 11, 41, 14, 42, 39, 0, 5, 18, 19, 9, 28, 8, 26, 36, 3, 2, 17, 43, 34, 40, 24, 37, 7, 4, 23, 12, 44, 10, 32, 13, 21};
const int PREJSNJE[] = {18, 0, 28, 27, 36, 19, 3, 35, 24, 22, 40, 13, 38, 42, 15, 4, 8, 29, 20, 21, 10, 43, 44, 37, 33, 9, 25, 1, 23, 12, 2, 6, 41, 7, 31, 5, 26, 34, 11, 17, 32, 14, 16, 30};
const int RANDOM[] = {4, 23, 31, 3, 9, 20, 44, 31, 2, 32, 32, 1, 12, 0, 23, 25, 19, 13, 15, 3, 4, 27, 15, 19, 14, 29, 41, 9, 8, 11, 30, 21, 1, 42, 4, 22, 31, 7, 29, 41, 5, 17, 4, 11};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 22;

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
