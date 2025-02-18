
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

int main() {
    A* a1 = malloc(sizeof(A));
    a1->p = 780;
    B* b1 = malloc(sizeof(B));
    b1->q = "9";
    C* c1 = malloc(sizeof(C));
    c1->r = false;
    A* a2 = malloc(sizeof(A));
    a2->p = 499;
    a2->b = NULL;
    c1->a = a2;
    B* b2 = malloc(sizeof(B));
    b2->q = "3ZVprTx";
    C* c2 = malloc(sizeof(C));
    c2->r = false;
    A* a3 = malloc(sizeof(A));
    a3->p = 774;
    B* b3 = malloc(sizeof(B));
    b3->q = "Ghz";
    C* c3 = malloc(sizeof(C));
    c3->r = false;
    A* a4 = malloc(sizeof(A));
    a4->p = 278;
    B* b4 = malloc(sizeof(B));
    b4->q = "f6AYI79";
    b4->c = NULL;
    a4->b = b4;
    c3->a = a4;
    c3->b = NULL;
    b3->c = c3;
    a3->b = b3;
    c2->a = a3;
    B* b5 = malloc(sizeof(B));
    b5->q = "r83La";
    b5->c = NULL;
    c2->b = b5;
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
    free(a2);
    free(b2);
    free(c2);
    free(a3);
    free(b3);
    free(c3);
    free(a4);
    free(b4);
    free(b5);

    return 0;
}
