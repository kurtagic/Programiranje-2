
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {60, 34, 20, 58, 32, 0, 57, 9, 50, 16, 49, 4, 43, 44, 67, 36, 21, 69, 3, 55, 38, 24, 14, 25, 59, 42, 19, 40, 15, 7, 47, 46, 31, 70, 51, 54, 17, 1, 8, 35, 65, 45, 27, 52, 62, 56, 26, 33, 37, 18, 74, 68, 10, 22, 5, 64, 11, 29, 73, 63, 72, 12, 41, 28, 61, 2, 23, 30, 13, 71, 39, 53, 66, 6};
const int PREJSNJE[] = {5, 37, 65, 18, 11, 54, 73, 29, 38, 7, 52, 56, 61, 68, 22, 28, 9, 36, 49, 26, 2, 16, 53, 66, 21, 23, 46, 42, 63, 57, 67, 32, 4, 47, 1, 39, 15, 48, 20, 70, 27, 62, 25, 12, 13, 41, 31, 30, 74, 10, 8, 34, 43, 71, 35, 19, 45, 6, 3, 24, 0, 64, 44, 59, 55, 40, 72, 14, 51, 17, 33, 69, 60, 58};
const int RANDOM[] = {71, 58, 0, 54, 39, 9, 20, 24, 38, 47, 74, 59, 58, 7, 66, 48, 59, 15, 58, 4, 42, 47, 54, 4, 54, 61, 38, 56, 21, 65, 6, 56, 71, 25, 29, 55, 10, 56, 57, 18, 44, 8, 16, 60, 42, 60, 21, 73, 60, 49, 17, 52, 60, 37, 43, 15, 36, 60, 74, 31, 13, 41, 3, 14, 7, 37, 55, 30, 31, 17, 28, 17, 20, 35};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 48;

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
