
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {5, 28, 7, 49, 13, 53, 14, 16, 42, 36, 39, 25, 44, 32, 50, 29, 31, 21, 15, 18, 3, 51, 9, 46, 45, 52, 8, 6, 2, 20, 41, 22, 48, 38, 37, 10, 0, 40, 23, 54, 33, 11, 24, 26, 35, 12, 27, 4, 1, 17, 43, 30, 47, 34};
const int PREJSNJE[] = {36, 48, 28, 20, 47, 0, 27, 2, 26, 22, 35, 41, 45, 4, 6, 18, 7, 49, 19, 54, 29, 17, 31, 38, 42, 11, 43, 46, 1, 15, 51, 16, 13, 40, 53, 44, 9, 34, 33, 10, 37, 30, 8, 50, 12, 24, 23, 52, 32, 3, 14, 21, 25, 5};
const int RANDOM[] = {17, 45, 27, 46, 25, 14, 23, 24, 2, 1, 39, 34, 35, 40, 10, 34, 0, 37, 8, 14, 51, 13, 54, 34, 5, 52, 51, 34, 54, 21, 21, 5, 49, 38, 35, 18, 31, 28, 32, 43, 30, 34, 17, 29, 31, 45, 46, 10, 10, 32, 38, 53, 13, 54};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 19;

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
