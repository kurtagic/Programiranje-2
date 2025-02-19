
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 100;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "");
    izdelaj(nizi, 1, "");
    izdelaj(nizi, 2, "");
    izdelaj(nizi, 3, "");
    izdelaj(nizi, 4, "");
    izdelaj(nizi, 5, "");
    izdelaj(nizi, 6, "");
    izdelaj(nizi, 7, "");
    izdelaj(nizi, 8, "");
    izdelaj(nizi, 9, "");
    izdelaj(nizi, 10, "");
    izdelaj(nizi, 11, "");
    izdelaj(nizi, 12, "");
    izdelaj(nizi, 13, "");
    izdelaj(nizi, 14, "");
    izdelaj(nizi, 15, "");
    izdelaj(nizi, 16, "");
    izdelaj(nizi, 17, "");
    izdelaj(nizi, 18, "");
    izdelaj(nizi, 19, "");
    izdelaj(nizi, 20, "");
    izdelaj(nizi, 21, "");
    izdelaj(nizi, 22, "");
    izdelaj(nizi, 23, "");
    izdelaj(nizi, 24, "");
    izdelaj(nizi, 25, "");
    izdelaj(nizi, 26, "");
    izdelaj(nizi, 27, "");
    izdelaj(nizi, 28, "");
    izdelaj(nizi, 29, "");
    izdelaj(nizi, 30, "");
    izdelaj(nizi, 31, "");
    izdelaj(nizi, 32, "");
    izdelaj(nizi, 33, "");
    izdelaj(nizi, 34, "");
    izdelaj(nizi, 35, "");
    izdelaj(nizi, 36, "");
    izdelaj(nizi, 37, "");
    izdelaj(nizi, 38, "");
    izdelaj(nizi, 39, "");
    izdelaj(nizi, 40, "");
    izdelaj(nizi, 41, "");
    izdelaj(nizi, 42, "");
    izdelaj(nizi, 43, "");
    izdelaj(nizi, 44, "");
    izdelaj(nizi, 45, "");
    izdelaj(nizi, 46, "");
    izdelaj(nizi, 47, "");
    izdelaj(nizi, 48, "");
    izdelaj(nizi, 49, "");
    izdelaj(nizi, 50, "");
    izdelaj(nizi, 51, "");
    izdelaj(nizi, 52, "");
    izdelaj(nizi, 53, "");
    izdelaj(nizi, 54, "");
    izdelaj(nizi, 55, "");
    izdelaj(nizi, 56, "");
    izdelaj(nizi, 57, "");
    izdelaj(nizi, 58, "");
    izdelaj(nizi, 59, "");
    izdelaj(nizi, 60, "");
    izdelaj(nizi, 61, "");
    izdelaj(nizi, 62, "");
    izdelaj(nizi, 63, "");
    izdelaj(nizi, 64, "");
    izdelaj(nizi, 65, "");
    izdelaj(nizi, 66, "");
    izdelaj(nizi, 67, "");
    izdelaj(nizi, 68, "");
    izdelaj(nizi, 69, "");
    izdelaj(nizi, 70, "");
    izdelaj(nizi, 71, "");
    izdelaj(nizi, 72, "");
    izdelaj(nizi, 73, "");
    izdelaj(nizi, 74, "");
    izdelaj(nizi, 75, "");
    izdelaj(nizi, 76, "");
    izdelaj(nizi, 77, "");
    izdelaj(nizi, 78, "");
    izdelaj(nizi, 79, "");
    izdelaj(nizi, 80, "");
    izdelaj(nizi, 81, "");
    izdelaj(nizi, 82, "");
    izdelaj(nizi, 83, "");
    izdelaj(nizi, 84, "");
    izdelaj(nizi, 85, "");
    izdelaj(nizi, 86, "");
    izdelaj(nizi, 87, "");
    izdelaj(nizi, 88, "");
    izdelaj(nizi, 89, "");
    izdelaj(nizi, 90, "");
    izdelaj(nizi, 91, "");
    izdelaj(nizi, 92, "");
    izdelaj(nizi, 93, "");
    izdelaj(nizi, 94, "");
    izdelaj(nizi, 95, "");
    izdelaj(nizi, 96, "");
    izdelaj(nizi, 97, "");
    izdelaj(nizi, 98, "");
    izdelaj(nizi, 99, "");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
