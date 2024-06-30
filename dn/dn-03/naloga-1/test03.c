
#include <stdio.h>
#include "inverz.h"

long f(long x) {
    return 1L << x;
}

int main() {
    printf("%ld\n", inverz(2, 1, 1));
    printf("%ld\n", inverz(2, 1, 10));
    printf("%ld\n", inverz(8, 1, 10));
    printf("%ld\n", inverz(1024, 3, 20));
    printf("%ld\n", inverz(f(42), 1, 60));
    return 0;
}
