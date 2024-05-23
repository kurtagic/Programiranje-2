#ifndef NALOGA1_H
#define NALOGA1_H

typedef struct _Vozlisce Vozlisce;
struct _Vozlisce
{
    Vozlisce *naslednje;
};

int razdalja(Vozlisce *p, Vozlisce *q);

#endif
