
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {30, 56, 22, 58, 47, 46, 57, 63, 4, 13, 8, 35, 24, 33, 65, 48, 62, 29, 7, 17, 34, 41, 14, 28, 9, 60, 70, 18, 44, 5, 27, 51, 71, 6, 16, 10, 61, 59, 69, 54, 38, 20, 15, 36, 45, 72, 2, 50, 12, 32, 39, 67, 64, 3, 31, 43, 21, 55, 26, 1, 0, 19, 23, 68, 11, 40, 25, 42, 52, 37, 66, 53};
const int PREJSNJE[] = {60, 59, 46, 53, 8, 29, 33, 18, 10, 24, 35, 64, 48, 9, 22, 42, 34, 19, 27, 61, 41, 56, 2, 62, 12, 66, 58, 30, 23, 17, 0, 54, 49, 13, 20, 11, 43, 69, 40, 50, 65, 21, 67, 55, 28, 44, 5, 4, 15, 72, 47, 31, 68, 71, 39, 57, 1, 6, 3, 37, 25, 36, 16, 7, 52, 14, 70, 51, 63, 38, 26, 32};
const int RANDOM[] = {64, 57, 29, 51, 8, 0, 29, 16, 38, 24, 37, 29, 54, 0, 18, 45, 7, 65, 67, 61, 35, 36, 49, 46, 68, 29, 24, 23, 24, 6, 4, 45, 35, 66, 13, 36, 25, 61, 53, 72, 52, 60, 41, 0, 1, 7, 4, 29, 52, 3, 63, 8, 45, 56, 35, 53, 2, 18, 69, 15, 69, 44, 5, 72, 69, 49, 34, 42, 46, 11, 61, 36};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 49;

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
