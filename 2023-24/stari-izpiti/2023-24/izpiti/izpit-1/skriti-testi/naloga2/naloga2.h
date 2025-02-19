
#ifndef _NALOGA2_H
#define _NALOGA2_H

typedef struct Vozlisce Vozlisce;

struct Vozlisce {
    int podatek;
    Vozlisce* naslednje;
};

void obdelaj(Vozlisce* zacetek, int k); 

#endif
