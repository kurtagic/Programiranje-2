
#include <stdio.h>
#include "inverz.h"

long MEMO[100];

long f(long x) {
    if (x <= 2) {
        return x;
    }
    if (MEMO[x] > 0) {
        return MEMO[x];
    }
    return (MEMO[x] = f(x - 2) + f(x - 1));
}

int main() {
    printf("%ld\n", inverz(1, 1, 10));
    printf("%ld\n", inverz(2, 1, 10));
    printf("%ld\n", inverz(5, 2, 6));
    printf("%ld\n", inverz(55, 1, 100));
    printf("%ld\n", inverz(f(40), 1, 100));
    return 0;
}
