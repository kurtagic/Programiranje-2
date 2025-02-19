
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return (x * y == 64);
}

int main() {
    printf("%d\n", tranzitivnost(1, 5));
    printf("%d\n", tranzitivnost(1, 10));
    printf("%d\n", tranzitivnost(1, 100));
    return 0;
}
