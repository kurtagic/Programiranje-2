
#include <stdio.h>
#include "inverz.h"

#define E6 1000000L
#define E9 1000000000L
#define E12 1000000000000L
#define E15 1000000000000000L
#define E17 100000000000000000L

long f(long x) {
    return 2 * x + 1;
}

int main() {
    printf("%ld\n", inverz(4 * E6 + 1, 1, E9));
    printf("%ld\n", inverz(9 * E9 - 1, 1, E12));
    printf("%ld\n", inverz(16 * E12 + 1, 1, E15));
    printf("%ld\n", inverz(E15 + 1, 1, E17));
    printf("%ld\n", inverz(E17 - 1, 1, E17));
    return 0;
}
