
#ifndef _NALOGA1_H
#define _NALOGA1_H

typedef struct Vozlisce Vozlisce;

struct Vozlisce {
    Vozlisce* naslednje;
    Vozlisce* nn;
};

void nastavi(Vozlisce* zacetek);

#endif
