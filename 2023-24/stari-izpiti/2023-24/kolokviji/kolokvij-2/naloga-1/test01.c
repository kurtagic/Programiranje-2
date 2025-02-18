
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int main() {
    Vozlisce zemlja = {NULL, NULL};
    Vozlisce d = {NULL, &zemlja};
    Vozlisce c = {&d, &zemlja};
    Vozlisce b = {&c, &zemlja};
    Vozlisce a = {&b, &zemlja};

    nastavi(&a);

    printf("%d", a.naslednje == &b);
    printf("%d", b.naslednje == &c);
    printf("%d", c.naslednje == &d);
    printf("%d\n", d.naslednje == NULL);

    printf("%d", a.prejsnje == NULL);
    printf("%d", b.prejsnje == &a);
    printf("%d", c.prejsnje == &b);
    printf("%d\n", d.prejsnje == &c);

    return 0;
}
