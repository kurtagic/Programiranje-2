
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int main() {
    int tabela[] = {0, 0, 0, 0, -10, -20, -30, -40, 0, 0, 0};
    int n = 0;
    int* pk = NULL;
    int* pz = poisci(tabela + 6, &n, &pk);
    printf("n = %d, *pz = %d, *pk = %d\n", n, *pz, *pk);

    return 0;
}
