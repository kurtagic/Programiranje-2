
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {19, 8, 1, 6, 2, 22, 20, 4, 21, 7, 16, 5, 10, 23, 12, 24, 3, 15, 25, 14, 9, 13, 17, 18, 0};
const int NN[] = {14, 21, 8, 20, 1, 17, 9, 2, 13, 4, 3, 22, 16, 18, 10, 0, 6, 24, 25, 12, 7, 23, 15, 25, 19};
const int RANDOM[] = {13, 8, 23, 8, 15, 23, 10, 3, 4, 8, 25, 23, 12, 10, 19, 9, 1, 2, 5, 19, 18, 13, 17, 8, 3};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 11;

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
