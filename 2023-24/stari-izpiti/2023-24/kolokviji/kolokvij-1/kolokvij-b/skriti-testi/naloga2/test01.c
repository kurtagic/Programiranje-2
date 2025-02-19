
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

    izdelaj(nizi, 0, "wHlLjtaRI3lcmvvccn2bn49NlGG4hE9n_VdBZaQkn");
    nizi[1] = nizi[0];
    nizi[2] = nizi[0];
    nizi[3] = nizi[1];
    nizi[4] = nizi[2];
    nizi[5] = nizi[1];
    nizi[6] = nizi[1];
    nizi[7] = nizi[3];
    nizi[8] = nizi[1];
    nizi[9] = nizi[7];

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
