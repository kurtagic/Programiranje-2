
#include <stdio.h>
#include "inverz.h"

#define E6 1000000L
#define E8 100000000L
#define E9 1000000000L
#define E12 1000000000000L
#define E16 10000000000000000L
#define E18 1000000000000000000L

long f(long x) {
    return x * x;
}

int main() {
    printf("%ld\n", inverz(4 * E6, 1, E9));
    printf("%ld\n", inverz(9 * E8, 1, E9));
    printf("%ld\n", inverz(16 * E12, 1, E9));
    printf("%ld\n", inverz(E16, 1, E9));
    printf("%ld\n", inverz(E18, 1, E9));
    return 0;
}
