
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int main() {
    int tabela[] = {0, 3, 5, 2, 7, 1, -6, -4, 7, 2, -6, 9, -9, 0};
    int n = 0;
    int* pk = NULL;
    int* pz = poisci(tabela + 12, &n, &pk);
    printf("n = %d, *pz = %d, *pk = %d\n", n, *pz, *pk);

    return 0;
}
