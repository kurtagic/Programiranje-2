
#include <stdio.h>
#include "inverz.h"

long f(long x) {
    return 2 * x + 1;
}

int main() {
    printf("%ld\n", inverz(3, 1, 100));
    printf("%ld\n", inverz(13, 1, 100));
    printf("%ld\n", inverz(101, 1, 100));
    printf("%ld\n", inverz(2539, 1000, 2000));
    printf("%ld\n", inverz(12345, 1000, 100000));
    return 0;
}
