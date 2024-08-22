
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

int main() {
    A* a1 = malloc(sizeof(A));
    a1->p = -241;
    B* b1 = malloc(sizeof(B));
    b1->q = "m";
    C* c1 = malloc(sizeof(C));
    c1->r = true;
    c1->a = NULL;
    B* b2 = malloc(sizeof(B));
    b2->q = "DfV";
    b2->c = NULL;
    c1->b = b2;
    b1->c = c1;
    a1->b = b1;

    char* cilj = malloc(10010 * sizeof(char));
    int stZnakov = izpisiA(a1, cilj);
    printf("%s\n", cilj);
    printf("%d\n", stZnakov);
    free(cilj);

    free(a1);
    free(b1);
    free(c1);
    free(b2);

    return 0;
}
