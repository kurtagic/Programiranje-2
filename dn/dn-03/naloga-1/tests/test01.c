
#include <stdio.h>
#include "inverz.h"

long f(long x) {
    return x * x;
}

int main() {
    printf("%ld\n", inverz(1, 1, 10));
    printf("%ld\n", inverz(9, 1, 10));
    printf("%ld\n", inverz(25, 1, 10));
    printf("%ld\n", inverz(100, 1, 10));
    printf("%ld\n", inverz(1024, 20, 50));
    return 0;
}
