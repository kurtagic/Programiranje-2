
#ifndef _NALOGA1_H
#define _NALOGA1_H

typedef struct Vozlisce Vozlisce;

struct Vozlisce {
    int podatek;
    Vozlisce* naslednje;
};

Vozlisce* zdesetkaj(Vozlisce* zacetek, int k);

#endif
