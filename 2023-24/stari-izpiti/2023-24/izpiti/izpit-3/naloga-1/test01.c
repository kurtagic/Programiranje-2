
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int main() {
    Vozlisce zemlja = {NULL, NULL};
    Vozlisce e = {NULL, &zemlja};
    Vozlisce d = {&e, &zemlja};
    Vozlisce c = {&d, &zemlja};
    Vozlisce b = {&c, &zemlja};
    Vozlisce a = {&b, &zemlja};

    nastavi(&a);

    printf("%d", a.naslednje == &b);
    printf("%d", b.naslednje == &c);
    printf("%d", c.naslednje == &d);
    printf("%d", d.naslednje == &e);
    printf("%d\n", e.naslednje == NULL);

    printf("%d", a.nn == &c);
    printf("%d", b.nn == &d);
    printf("%d", c.nn == &e);
    printf("%d", d.nn == NULL);
    printf("%d\n", e.nn == NULL);

    return 0;
}
