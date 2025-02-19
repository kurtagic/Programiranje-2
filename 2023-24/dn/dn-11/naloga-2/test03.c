
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

int main() {
    A* a1 = malloc(sizeof(A));
    a1->p = 663;
    B* b1 = malloc(sizeof(B));
    b1->q = "91Iag0";
    C* c1 = malloc(sizeof(C));
    c1->r = false;
    c1->a = NULL;
    c1->b = NULL;
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

    return 0;
}
