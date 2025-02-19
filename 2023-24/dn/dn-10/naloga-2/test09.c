
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

void izvedi(Tocka t, Premica p) {
    Tocka proj = projekcija(t, p);
    printf("(%d/%d, %d/%d)\n", proj.x.st, proj.x.im, proj.y.st, proj.y.im);
}

int main() {
    izvedi( (Tocka) {{-4, 13}, {0, 1}}, (Premica) {false, {21, 4}, {-17, 9}} );
    return 0;
}
