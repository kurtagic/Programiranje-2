
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int main() {
    Vozlisce b = {NULL, NULL};
    Vozlisce a = {&b, &b};

    nastavi(&a);

    printf("%d", a.naslednje == &b);
    printf("%d\n", b.naslednje == NULL);

    printf("%d", a.prejsnje == NULL);
    printf("%d\n", b.prejsnje == &a);

    return 0;
}
