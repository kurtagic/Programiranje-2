
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

int main() {
    A* a1 = malloc(sizeof(A));
    a1->p = -931;
    B* b1 = malloc(sizeof(B));
    b1->q = "L3RXdoBF";
    C* c1 = malloc(sizeof(C));
    c1->r = true;
    c1->a = NULL;
    B* b2 = malloc(sizeof(B));
    b2->q = "VQa9r7";
    C* c2 = malloc(sizeof(C));
    c2->r = true;
    c2->a = NULL;
    c2->b = NULL;
    b2->c = c2;
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
    free(c2);

    return 0;
}
