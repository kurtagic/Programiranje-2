
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {18, 14, 17, 20, 13, 21, 3, 22, 15, 16, 5, 8, 10, 6, 11, 19, 12, 0, 9, 4, 2, 7};
const int NN[] = {9, 11, 0, 2, 6, 7, 20, 22, 19, 12, 21, 15, 5, 3, 8, 4, 10, 18, 16, 13, 17, 22};
const int RANDOM[] = {16, 16, 20, 15, 0, 22, 10, 14, 16, 10, 13, 4, 15, 0, 11, 9, 4, 5, 19, 6, 16, 5};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 1;

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
