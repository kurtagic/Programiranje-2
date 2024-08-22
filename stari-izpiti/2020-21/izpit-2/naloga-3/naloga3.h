#ifndef _NALOGA3_H
#define _NALOGA3_H

typedef struct _Vozlisce Vozlisce;

struct _Vozlisce
{
    struct _Vozlisce *n;
    struct _Vozlisce *r;
};

#endif
