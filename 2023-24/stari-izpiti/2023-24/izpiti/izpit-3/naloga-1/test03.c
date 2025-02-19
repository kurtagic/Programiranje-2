
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int main() {
    Vozlisce c = {NULL, NULL};
    Vozlisce b = {&c, &c};
    Vozlisce a = {&b, &b};

    nastavi(&a);

    printf("%d", a.naslednje == &b);
    printf("%d", b.naslednje == &c);
    printf("%d\n", c.naslednje == NULL);

    printf("%d", a.nn == &c);
    printf("%d", b.nn == NULL);
    printf("%d\n", c.nn == NULL);

    return 0;
}
