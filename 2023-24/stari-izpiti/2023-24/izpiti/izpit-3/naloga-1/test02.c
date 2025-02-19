
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int main() {
    Vozlisce zemlja = {NULL, NULL};
    Vozlisce a = {NULL, &zemlja};

    nastavi(&a);

    printf("%d\n", a.naslednje == NULL);

    printf("%d\n", a.nn == NULL);

    return 0;
}
