
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

void izvedi(Tocka t, Premica p) {
    Tocka proj = projekcija(t, p);
    printf("(%d/%d, %d/%d)\n", proj.x.st, proj.x.im, proj.y.st, proj.y.im);
}

int main() {
    izvedi( (Tocka) {{5, 12}, {-6, 13}}, (Premica) {false, {-7, 15}, {8, 17}} );
    return 0;
}
