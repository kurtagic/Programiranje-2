
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {21, 23, 17, 69, 14, 3, 43, 38, 34, 54, 8, 52, 72, 10, 32, 49, 51, 12, 35, 6, 36, 18, 27, 50, 5, 26, 0, 55, 59, 71, 56, 62, 22, 37, 45, 58, 33, 30, 1, 73, 31, 60, 13, 2, 48, 61, 44, 40, 66, 20, 28, 39, 57, 47, 70, 53, 4, 24, 46, 15, 65, 11, 42, 68, 41, 7, 9, 16, 19, 25, 63, 67, 29};
const int PREJSNJE[] = {26, 38, 43, 5, 56, 24, 19, 65, 10, 66, 13, 61, 17, 42, 4, 59, 67, 2, 21, 68, 49, 0, 32, 1, 57, 69, 25, 22, 50, 72, 37, 40, 14, 36, 8, 18, 20, 33, 7, 51, 47, 64, 62, 6, 46, 34, 58, 53, 44, 15, 23, 16, 11, 55, 9, 27, 30, 52, 35, 28, 41, 45, 31, 70, 73, 60, 48, 71, 63, 3, 54, 29, 12};
const int RANDOM[] = {48, 13, 58, 19, 30, 22, 9, 52, 4, 2, 57, 35, 8, 55, 4, 49, 49, 54, 45, 31, 47, 37, 35, 48, 33, 36, 30, 57, 7, 20, 22, 68, 58, 18, 64, 40, 59, 44, 7, 25, 39, 38, 54, 55, 44, 54, 16, 45, 1, 28, 36, 38, 26, 53, 66, 58, 8, 57, 32, 72, 30, 9, 53, 33, 60, 1, 40, 55, 62, 9, 36, 54, 21};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 64;

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
