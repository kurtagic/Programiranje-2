
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {9, 31, 32, 19, 15, 0, 2, 13, 4, 24, 23, 37, 6, 11, 7, 34, 12, 1, 20, 30, 16, 22, 26, 18, 14, 8, 17, 28, 25, 35, 33, 36, 5, 21, 29, 3, 10};
const int PREJSNJE[] = {5, 17, 6, 35, 8, 32, 12, 14, 25, 0, 36, 13, 16, 7, 24, 4, 20, 26, 23, 3, 18, 33, 21, 10, 9, 28, 22, 37, 27, 34, 19, 1, 2, 30, 15, 29, 31};
const int RANDOM[] = {10, 3, 24, 28, 15, 29, 28, 33, 13, 35, 12, 30, 29, 37, 22, 6, 18, 22, 31, 26, 1, 0, 0, 17, 15, 23, 25, 33, 14, 37, 7, 7, 1, 4, 14, 0, 10};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 27;

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
