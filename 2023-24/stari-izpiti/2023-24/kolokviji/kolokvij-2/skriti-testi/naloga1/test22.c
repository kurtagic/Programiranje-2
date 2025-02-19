
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {55, 20, 47, 33, 23, 53, 18, 43, 3, 42, 49, 51, 7, 29, 35, 54, 40, 22, 14, 21, 2, 1, 57, 24, 27, 58, 15, 39, 5, 50, 48, 25, 26, 41, 31, 8, 32, 4, 13, 45, 30, 46, 44, 10, 12, 17, 34, 37, 28, 38, 56, 19, 9, 36, 0, 6, 59, 16, 52};
const int PREJSNJE[] = {54, 21, 20, 8, 37, 28, 55, 12, 35, 52, 43, 59, 44, 38, 18, 26, 57, 45, 6, 51, 1, 19, 17, 4, 23, 31, 32, 24, 48, 13, 40, 34, 36, 3, 46, 14, 53, 47, 49, 27, 16, 33, 9, 7, 42, 39, 41, 2, 30, 10, 29, 11, 58, 5, 15, 0, 50, 22, 25};
const int RANDOM[] = {18, 59, 59, 1, 30, 57, 19, 40, 34, 45, 10, 44, 46, 58, 7, 22, 51, 22, 4, 29, 42, 37, 34, 3, 3, 16, 30, 31, 34, 48, 15, 51, 49, 34, 43, 5, 16, 32, 38, 35, 38, 17, 13, 12, 58, 8, 52, 23, 42, 34, 52, 59, 17, 7, 54, 11, 45, 45, 3};
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
