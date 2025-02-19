
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {13, 14, 10, 26, 2, 18, 4, 17, 31, 24, 28, 23, 21, 15, 16, 30, 11, 1, 7, 27, 12, 3, 5, 20, 0, 9, 19, 29, 25, 8, 22};
const int PREJSNJE[] = {24, 17, 4, 21, 6, 22, 31, 18, 29, 25, 2, 16, 20, 0, 1, 13, 14, 7, 5, 26, 23, 12, 30, 11, 9, 28, 3, 19, 10, 27, 15};
const int RANDOM[] = {30, 23, 1, 2, 4, 31, 10, 10, 21, 9, 29, 23, 11, 12, 11, 13, 19, 8, 4, 3, 12, 1, 24, 1, 9, 9, 10, 10, 1, 17, 28};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 6;

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
