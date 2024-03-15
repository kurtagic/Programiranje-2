
#include <stdio.h>
#include "inverz.h"

long f(long x) {
    return x * x;
}

int main() {
    printf("%ld\n", inverz(25, 1, 10));   // 5
    return 0;
}
