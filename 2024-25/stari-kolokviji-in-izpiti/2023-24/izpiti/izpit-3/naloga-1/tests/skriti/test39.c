
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {19, 28, 27, 11, 29, 18, 16, 4, 6, 1, 21, 2, 5, 0, 26, 24, 20, 13, 7, 8, 10, 12, 17, 15, 14, 9, 22, 23, 3};
const int NN[] = {8, 3, 23, 2, 29, 7, 20, 29, 16, 28, 12, 27, 18, 19, 22, 14, 10, 0, 4, 6, 21, 5, 13, 24, 26, 1, 17, 15, 11};
const int RANDOM[] = {28, 9, 9, 18, 3, 6, 4, 11, 1, 5, 21, 11, 19, 0, 27, 21, 27, 22, 22, 15, 25, 1, 6, 11, 23, 9, 22, 0, 20};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 25;

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
