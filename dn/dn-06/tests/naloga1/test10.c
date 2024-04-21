
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

char* NIZI[] = {"[", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", ", "]", NULL};

int main() {
    char* niz = zdruzi(NIZI, "1234567890");
    printf("<%s>\n", niz);

    return 0;
}
