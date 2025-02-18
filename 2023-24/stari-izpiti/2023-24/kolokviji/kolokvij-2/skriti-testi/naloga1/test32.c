
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {4, 7, 18, 13, 2, 20, 27, 12, 1, 22, 5, 19, 14, 6, 11, 21, 28, 9, 3, 26, 17, 24, 29, 25, 23, 16, 15, 10, 0};
const int PREJSNJE[] = {28, 8, 4, 18, 0, 10, 13, 1, 29, 17, 27, 14, 7, 3, 12, 26, 25, 20, 2, 11, 5, 15, 9, 24, 21, 23, 19, 6, 16};
const int RANDOM[] = {20, 28, 8, 11, 4, 1, 19, 6, 28, 18, 0, 3, 0, 3, 19, 28, 24, 21, 19, 27, 24, 0, 8, 1, 14, 25, 13, 13, 0};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 8;

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
