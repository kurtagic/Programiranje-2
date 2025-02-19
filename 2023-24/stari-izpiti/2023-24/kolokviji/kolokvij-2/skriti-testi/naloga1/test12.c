
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {5, 15, 16, 21, 24, 22, 4, 9, 17, 20, 8, 23, 6, 1, 7, 3, 12, 18, 2, 10, 0, 14, 19, 13};
const int PREJSNJE[] = {20, 13, 18, 15, 6, 0, 12, 14, 10, 7, 19, 24, 16, 23, 21, 1, 2, 8, 17, 22, 9, 3, 5, 11};
const int RANDOM[] = {14, 15, 5, 21, 22, 3, 21, 18, 11, 8, 15, 15, 4, 16, 14, 1, 8, 8, 3, 24, 18, 20, 6, 11};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 11;

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
