
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int main() {
    int tabela[] = {0, 1, 0, 0, 0, -1, 1, -1, 1, -1, 1, -1, 0, 0, 1};
    int n = 0;
    int* pk = NULL;
    int* pz = poisci(tabela + 9, &n, &pk);
    printf("n = %d, *pz = %d, *pk = %d\n", n, *pz, *pk);

    return 0;
}
