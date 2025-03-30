
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {32, 54, 77, 70, 67, 72, 61, 29, 11, 78, 79, 71, 81, 17, 62, 23, 73, 44, 13, 20, 65, 76, 74, 42, 63, 4, 52, 68, 37, 24, 53, 26, 82, 31, 45, 3, 16, 7, 0, 28, 2, 21, 22, 80, 51, 59, 66, 35, 57, 10, 27, 56, 19, 64, 39, 49, 8, 60, 69, 5, 75, 14, 30, 15, 58, 48, 1, 46, 12, 40, 9, 34, 50, 33, 38, 6, 18, 41, 36, 43, 47, 25};
const int PREJSNJE[] = {38, 66, 40, 35, 25, 59, 75, 37, 56, 70, 49, 8, 68, 18, 61, 63, 36, 13, 76, 52, 19, 41, 42, 15, 29, 81, 31, 50, 39, 7, 62, 33, 0, 73, 71, 47, 78, 28, 74, 54, 69, 77, 23, 79, 17, 34, 67, 80, 65, 55, 72, 44, 26, 30, 1, 82, 51, 48, 64, 45, 57, 6, 14, 24, 53, 20, 46, 4, 27, 58, 3, 11, 5, 16, 22, 60, 21, 2, 9, 10, 43, 12};
const int RANDOM[] = {54, 70, 21, 31, 68, 71, 65, 8, 72, 1, 19, 30, 18, 73, 82, 26, 46, 62, 35, 70, 48, 26, 81, 10, 80, 6, 0, 61, 31, 55, 28, 11, 26, 51, 79, 46, 58, 47, 35, 66, 48, 82, 73, 23, 78, 48, 49, 19, 34, 8, 60, 14, 54, 58, 55, 44, 30, 70, 44, 61, 46, 58, 75, 81, 77, 47, 10, 37, 10, 15, 77, 59, 8, 7, 14, 10, 66, 72, 43, 46, 50, 62};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 55;

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
