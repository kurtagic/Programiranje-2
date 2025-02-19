
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {16, 37, 10, 38, 44, 11, 46, 29, 32, 40, 18, 2, 14, 3, 24, 45, 22, 42, 23, 6, 15, 33, 41, 9, 21, 19, 12, 31, 36, 20, 27, 13, 5, 25, 28, 30, 39, 34, 7, 4, 1, 35, 26, 8, 17, 43};
const int PREJSNJE[] = {46, 40, 11, 13, 39, 32, 19, 38, 43, 23, 2, 5, 26, 31, 12, 20, 0, 44, 10, 25, 29, 24, 16, 18, 14, 33, 42, 30, 34, 7, 35, 27, 8, 21, 37, 41, 28, 1, 3, 36, 9, 22, 17, 45, 4, 15};
const int RANDOM[] = {5, 37, 12, 41, 5, 32, 44, 6, 10, 6, 33, 13, 3, 19, 44, 45, 2, 46, 5, 34, 20, 36, 20, 10, 36, 0, 4, 15, 15, 20, 17, 17, 21, 0, 3, 20, 30, 30, 26, 17, 15, 9, 31, 29, 36, 46};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 0;

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
