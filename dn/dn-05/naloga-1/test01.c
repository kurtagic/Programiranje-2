
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int main() {
    int tabela[] = {0, 5, 10, 3, 7, 8, 0};
    int n = 0;
    int* pk = NULL;
    poisci(tabela + 1, &n, &pk);
    printf("n = %d\n", n);

    return 0;
}
