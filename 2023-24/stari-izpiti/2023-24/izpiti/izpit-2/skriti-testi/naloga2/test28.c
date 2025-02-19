
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

typedef struct {

    // za"cetno "stevilo vozli"s"c seznama
    int zacetnoStVozlisc;

    // kazalec na za"cetno vozli"s"ce seznama
    Vozlisce* zacetek;

    // nasloviVozlisc[i]: naslov vozli"s"ca z indeksom i
    Vozlisce** nasloviVozlisc;

    // kon"cno "stevilo vozli"s"c seznama
    int koncnoStVozlisc;

    // preslikava[i] = indeks, ki ga ima v originalnem seznamu vozli"s"ce z
    // indeksom i v obdelanem seznamu
    // (npr. preslikava[2] = 3 pomeni, da je "cetrto vozli"s"ce v originalnem
    // seznamu postalo tretje vozli"s"ce v obdelanem seznamu)
    int* preslikava;

} Podatki;

//
// Prebere vse podatke iz vhodne datoteke in zgradi povezani seznam,
// pri "cemer shrani naslove vozli"s"c.
//
void preberi(const char* datoteka, Podatki* podatki) {
    FILE* f = fopen(datoteka, "rt");
    fscanf(f, "%d", &podatki->zacetnoStVozlisc);

    Vozlisce* prej = NULL;
    podatki->zacetek = NULL;
    podatki->nasloviVozlisc = calloc(podatki->zacetnoStVozlisc, sizeof(Vozlisce*));

    for (int i = 0; i < podatki->zacetnoStVozlisc; i++) {
        Vozlisce* v = calloc(1, sizeof(Vozlisce));

        fscanf(f, "%d", &v->podatek);
        v->naslednje = NULL;
        podatki->nasloviVozlisc[i] = v;

        if (i == 0) {
            podatki->zacetek = v;
        } else {
            prej->naslednje = v;
        }
        prej = v;
    }

    fscanf(f, "%d", &podatki->koncnoStVozlisc);
    podatki->preslikava = calloc(podatki->koncnoStVozlisc, sizeof(int));
    for (int i = 0; i < podatki->koncnoStVozlisc; i++) {
        fscanf(f, "%d", &podatki->preslikava[i]);
    }

    fclose(f);
}

//
// Izpi"se povezani seznam z za"cetnim vozli"s"cem na naslovu v.
//
void izpisi(Vozlisce* v) {
    printf("[");
    bool prvic = true;
    while (v != NULL) {
        if (!prvic) {
            printf(", ");
        }
        prvic = false;
        printf("%d", v->podatek);
        v = v->naslednje;
    }
    printf("]\n");
}

//
// Izpi"se niz, s katerim lahko preverimo, ali so se pobrisala prava
// vozli"s"ca ("ce vsebuje samo znake '1', je vse v redu).
//
void preveriPreslikavo(Podatki* podatki) {
    char* izpis = calloc(podatki->koncnoStVozlisc + 1, sizeof(char));
    char* pIzpis = izpis;
    int* pPreslikava = podatki->preslikava;

    Vozlisce* v = podatki->zacetek;
    while (v != NULL) {
        *pIzpis++ = '0' + (v == podatki->nasloviVozlisc[*pPreslikava++]);
        v = v->naslednje;
    }
    printf("%s\n", izpis);
    free(izpis);
}

//
// Sprosti ves alocirani pomnilnik.
//
void pocisti(Podatki* podatki) {
    Vozlisce* v = podatki->zacetek;
    while (v != NULL) {
        Vozlisce* vn = v->naslednje;
        free(v);
        v = vn;
    }
    free(podatki->nasloviVozlisc);
    free(podatki->preslikava);
}

int main() {
    Podatki* podatki = calloc(1, sizeof(Podatki));
    preberi("test28.dat", podatki);
    izpisi(podatki->zacetek);

    obdelaj(podatki->zacetek);
    izpisi(podatki->zacetek);

    preveriPreslikavo(podatki);

    pocisti(podatki);
    free(podatki);

    return 0;
}
