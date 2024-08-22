
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

void izvedi(Tocka t, Premica p) {
    Tocka proj = projekcija(t, p);
    printf("(%d/%d, %d/%d)\n", proj.x.st, proj.x.im, proj.y.st, proj.y.im);
}

int main() {
    izvedi( (Tocka) {{1, 4}, {3, 4}}, (Premica) {false, {-1, 1}, {1, 1}} );
    return 0;
}
