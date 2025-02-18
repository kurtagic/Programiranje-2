
#include <stdio.h>
#include "inverz.h"

#define E13 10000000000000L
#define E14 100000000000000L
#define E15 1000000000000000L
#define E16 10000000000000000L
#define E17 100000000000000000L
#define E18 1000000000000000000L

long f(long x) {
    return 4 * x / 3;
}

int main() {
    printf("%ld\n", inverz(f(E13), 1, E18));
    printf("%ld\n", inverz(f(E14), 1, E18));
    printf("%ld\n", inverz(f(E15), 1, E18));
    printf("%ld\n", inverz(f(E16), 1, E18));
    printf("%ld\n", inverz(f(E17), 1, E18));
    return 0;
}
