
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {32, 22, 50, 55, 30, 21, 47, 52, 4, 15, 5, 56, 13, 25, 34, 48, 36, 37, 60, 3, 62, 58, 19, 59, 20, 17, 49, 26, 11, 9, 1, 33, 46, 8, 35, 7, 23, 27, 12, 38, 57, 18, 53, 54, 16, 43, 63, 51, 44, 6, 39, 31, 24, 29, 10, 45, 40, 2, 14, 41, 61, 28, 0};
const int PREJSNJE[] = {62, 30, 57, 19, 8, 10, 49, 35, 33, 29, 54, 28, 38, 12, 58, 9, 44, 25, 41, 22, 24, 5, 1, 36, 52, 13, 27, 37, 61, 53, 4, 51, 0, 31, 14, 34, 16, 17, 39, 50, 56, 59, 63, 45, 48, 55, 32, 6, 15, 26, 2, 47, 7, 42, 43, 3, 11, 40, 21, 23, 18, 60, 20};
const int RANDOM[] = {37, 40, 35, 58, 24, 48, 51, 59, 40, 48, 32, 28, 12, 18, 55, 16, 13, 47, 25, 41, 18, 60, 8, 46, 37, 36, 32, 59, 58, 46, 54, 29, 57, 49, 23, 13, 23, 25, 8, 13, 55, 17, 21, 30, 11, 59, 14, 11, 10, 44, 24, 51, 37, 37, 59, 34, 31, 47, 6, 62, 15, 54, 53};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 42;

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
