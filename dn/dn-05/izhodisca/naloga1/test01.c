
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int main() {
    int tabela[] = {72, 0, 91, 67, 42, 58, 0};
    int n = 0;
    int* pk = NULL;
    int* pz = poisci(tabela + 3, &n, &pk);

    printf("%d, %d, %d\n", n, *pz, *pk);

    return 0;
}
