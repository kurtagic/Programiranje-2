
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {59, 17, 36, 37, 52, 40, 15, 49, 32, 41, 23, 50, 4, 54, 6, 7, 56, 10, 27, 21, 0, 1, 14, 47, 28, 30, 13, 12, 58, 31, 48, 5, 53, 35, 8, 11, 55, 44, 45, 43, 46, 25, 9, 3, 57, 42, 2, 33, 19, 26, 20, 34, 24, 22, 38, 16, 39, 18, 60, 29};
const int PREJSNJE[] = {20, 21, 46, 43, 12, 31, 14, 15, 34, 42, 17, 35, 27, 26, 22, 6, 55, 1, 57, 48, 50, 19, 53, 10, 52, 41, 49, 18, 24, 59, 25, 29, 8, 47, 51, 33, 2, 3, 54, 56, 5, 9, 45, 39, 37, 38, 40, 23, 30, 7, 11, 60, 4, 32, 13, 36, 16, 44, 28, 0};
const int RANDOM[] = {48, 1, 46, 20, 3, 8, 41, 60, 46, 56, 15, 30, 51, 37, 10, 53, 37, 3, 49, 13, 35, 50, 24, 28, 46, 36, 40, 7, 2, 56, 48, 5, 3, 13, 15, 56, 13, 39, 11, 41, 33, 47, 24, 42, 39, 30, 46, 47, 31, 50, 36, 57, 5, 40, 16, 56, 24, 26, 40, 53};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 51;

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
