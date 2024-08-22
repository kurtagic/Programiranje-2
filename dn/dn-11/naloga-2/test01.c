
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

int main() {
    A* a1 = malloc(sizeof(A));
    a1->p = 957;
    B* b1 = malloc(sizeof(B));
    b1->q = "uk5zwP4hAg";
    b1->c = NULL;
    a1->b = b1;

    char* cilj = malloc(10010 * sizeof(char));
    int stZnakov = izpisiA(a1, cilj);
    printf("%s\n", cilj);
    printf("%d\n", stZnakov);
    free(cilj);

    free(a1);
    free(b1);

    return 0;
}
