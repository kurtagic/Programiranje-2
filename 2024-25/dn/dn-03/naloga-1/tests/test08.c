
#include <stdio.h>
#include "inverz.h"

#define E3 1000L
#define E5 100000L
#define E6 1000000L
#define E7 10000000L
#define E8 100000000L
#define E9 1000000000L

long f(long x) {
    return x * (x - 1) / 2;
}

int main() {
    printf("%ld\n", inverz(f(E7), E7, E8));
    printf("%ld\n", inverz(f(5 * E7), E3, E9));
    printf("%ld\n", inverz(f(E8), E6, E9));
    printf("%ld\n", inverz(f(5 * E8), E3, E9));
    printf("%ld\n", inverz(f(E9), E5, E9));
    return 0;
}
