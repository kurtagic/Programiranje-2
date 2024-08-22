
#ifndef _NALOGA2_H
#define _NALOGA2_H

#include <stdbool.h>

typedef struct _Ulomek {    // ulomek
    int st;     // "stevec
    int im;     // imenovalec
} Ulomek;

typedef struct _Tocka {     // to"cka (x, y)
    Ulomek x;   // koordinata x
    Ulomek y;   // koordinata y
} Tocka;

typedef struct _Premica {   // premica z ena"cbo y = k * x + n oziroma x = n
    bool navpicna;   // true, "ce je navpi"cna (premica ima ena"cbo x = n);
                     // false, "ce ni (premica ima ena"cbo y = k * x + n)
    Ulomek k;    // parameter k (nima pomena, "ce je premica navpi"cna)
    Ulomek n;    // parameter n
} Premica;

Tocka projekcija(Tocka t, Premica p);

#endif
