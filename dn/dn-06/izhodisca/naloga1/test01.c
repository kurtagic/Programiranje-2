
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

char* NIZI[] = {"Radko", "Milena", "Boris", NULL};

int main() {
    char* niz = zdruzi(NIZI, ", ");
    printf("<%s>\n", niz);

    return 0;
}
