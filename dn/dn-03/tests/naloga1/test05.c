
#include <stdio.h>
#include "inverz.h"

int t[] = {10, 50, 60, 150, 200, 300, 1500, 12000, 75000, 300000};

long f(long x) {
    return t[x - 1];
}

int main() {
    printf("%ld\n", inverz(10, 1, 10));
    printf("%ld\n", inverz(50, 1, 10));
    printf("%ld\n", inverz(200, 1, 10));
    printf("%ld\n", inverz(12000, 1, 10));
    printf("%ld\n", inverz(300000, 1, 10));
    return 0;
}
