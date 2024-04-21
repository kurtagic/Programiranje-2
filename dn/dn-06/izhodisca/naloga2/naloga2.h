
#ifndef _NALOGA2_H
#define _NALOGA2_H

#define N 5

int** ap2pp(int(*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic);
int (*pp2ap(int** kazalec, int izvornoStVrstic, int* ciljnoStVrstic))[N];

#endif
