
#ifndef _NALOGA2_H
#define _NALOGA2_H

typedef struct A A;
typedef struct B B;
typedef struct C C;

struct A {
    int p;
    B* b;
};

struct B {
    char* q;
    C* c;
};

struct C {
    bool r;
    A* a;
    B* b;
};

int izpisiA(A* a, char* cilj);

#endif
