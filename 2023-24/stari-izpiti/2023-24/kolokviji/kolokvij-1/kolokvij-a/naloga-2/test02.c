
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
    int n = 10;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "");
    izdelaj(nizi, 1, "");
    izdelaj(nizi, 2, "a");
    izdelaj(nizi, 3, "a");
    izdelaj(nizi, 4, "aa");
    izdelaj(nizi, 5, "aa");
    izdelaj(nizi, 6, "aaa");
    izdelaj(nizi, 7, "aaa");
    izdelaj(nizi, 8, "aaaa");
    izdelaj(nizi, 9, "aaaa");

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
