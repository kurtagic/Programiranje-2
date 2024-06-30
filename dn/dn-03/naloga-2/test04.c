
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return (x % 3 == y % 3);
}

int main() {
    printf("%d\n", tranzitivnost(1, 10));
    printf("%d\n", tranzitivnost(201, 300));
    printf("%d\n", tranzitivnost(42, 42));
    return 0;
}
