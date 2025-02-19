
#include <stdio.h>
#include "inverz.h"

#define E13 10000000000000L
#define E14 100000000000000L
#define E15 1000000000000000L
#define E16 10000000000000000L
#define E17 100000000000000000L
#define E18 1000000000000000000L

long f(long x) {
    return x;
}

int main() {
    printf("%ld\n", inverz(E14, E13, E18));
    printf("%ld\n", inverz(E15, E15, E15));
    printf("%ld\n", inverz(E16, E14, E17));
    printf("%ld\n", inverz(E17, E17, E18));
    printf("%ld\n", inverz(E18, E13, E18));
    return 0;
}
