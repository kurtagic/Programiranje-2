
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {48, 0, 38, 67, 28, 20, 41, 52, 77, 33, 24, 34, 80, 12, 70, 3, 39, 9, 86, 63, 66, 59, 74, 72, 36, 54, 25, 87, 45, 55, 61, 71, 30, 75, 42, 22, 49, 26, 13, 19, 10, 83, 32, 7, 60, 37, 57, 1, 23, 46, 44, 6, 31, 50, 17, 69, 58, 16, 11, 47, 76, 85, 73, 79, 53, 64, 62, 78, 18, 40, 4, 68, 84, 14, 15, 65, 8, 27, 29, 51, 21, 56, 81, 5, 43, 35, 82};
const int NN[] = {23, 48, 13, 78, 45, 66, 83, 31, 27, 75, 36, 42, 21, 80, 4, 67, 19, 33, 82, 79, 62, 47, 15, 84, 49, 17, 54, 87, 37, 69, 85, 68, 61, 65, 32, 74, 46, 25, 12, 63, 24, 5, 30, 52, 76, 26, 16, 0, 72, 57, 60, 41, 71, 44, 9, 40, 11, 39, 34, 1, 8, 35, 14, 51, 50, 53, 73, 29, 86, 10, 28, 18, 43, 70, 3, 64, 77, 87, 55, 6, 59, 58, 56, 20, 7, 22, 81};
const int RANDOM[] = {27, 34, 85, 44, 14, 76, 58, 5, 71, 21, 56, 24, 47, 22, 87, 17, 14, 70, 31, 54, 73, 72, 50, 71, 7, 38, 36, 30, 48, 21, 18, 52, 3, 7, 68, 54, 84, 46, 38, 23, 18, 87, 6, 83, 2, 86, 75, 76, 54, 13, 36, 2, 43, 20, 54, 43, 27, 6, 25, 67, 3, 46, 78, 21, 1, 1, 86, 57, 42, 56, 54, 5, 21, 71, 35, 23, 40, 18, 0, 60, 87, 80, 5, 21, 57, 63, 11};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 2;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->nn = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->nn == v[NN[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}