
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga2.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Javni testni primeri:
 *
 * 01..03: n = 3, d = 1
 * 04..06: d = 1
 * 07..10: splo"sni
 * 01, 04, 07: majhni, ro"cno izdelani primeri
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// po potrebi dopolnite ...

int** zmehcaj(int** slika, int n, int m, int d) {
    // popravite / dopolnite ...
    return NULL;
}

#ifndef test

int main() {
    // "Ce "zelite funkcijo <jeDrevo> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
