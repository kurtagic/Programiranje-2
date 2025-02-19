#ifndef _NALOGA2_H
#define _NALOGA2_H

typedef struct _Vozlisce Vozlisce;

struct _Vozlisce
{
    int vrednost;
    struct _Vozlisce *n;
};

#endif
