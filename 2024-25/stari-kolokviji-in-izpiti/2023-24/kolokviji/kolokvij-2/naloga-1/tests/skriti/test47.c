
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {7, 10, 56, 57, 35, 24, 30, 22, 33, 63, 8, 64, 9, 49, 50, 14, 27, 13, 54, 17, 3, 52, 60, 6, 32, 41, 59, 51, 25, 5, 18, 40, 4, 28, 11, 1, 15, 42, 12, 16, 43, 19, 34, 45, 58, 61, 62, 37, 26, 39, 29, 53, 36, 31, 21, 20, 48, 38, 23, 47, 2, 46, 55, 0};
const int PREJSNJE[] = {63, 35, 60, 20, 32, 29, 23, 0, 10, 12, 1, 34, 38, 17, 15, 36, 39, 19, 30, 41, 55, 54, 7, 58, 5, 28, 48, 16, 33, 50, 6, 53, 24, 8, 42, 4, 52, 47, 57, 49, 31, 25, 37, 40, 64, 43, 61, 59, 56, 13, 14, 27, 21, 51, 18, 62, 2, 3, 44, 26, 22, 45, 46, 9};
const int RANDOM[] = {8, 45, 33, 2, 46, 42, 28, 30, 38, 20, 34, 13, 11, 26, 15, 26, 2, 31, 45, 16, 49, 40, 46, 38, 40, 17, 32, 11, 56, 22, 54, 62, 5, 4, 2, 55, 55, 15, 5, 4, 61, 14, 60, 53, 41, 45, 54, 18, 9, 5, 24, 42, 38, 26, 13, 40, 41, 23, 36, 8, 14, 27, 52, 49};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 44;

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
