
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

char* NIZI[] = {"", "123", "4567", "8901", "2", "34", "", "567890", NULL};

int main() {
    char* niz = zdruzi(NIZI, " | ");
    printf("<%s>\n", niz);

    return 0;
}
