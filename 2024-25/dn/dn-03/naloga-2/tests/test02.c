
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return (y == 2 * x);
}

int main() {
    printf("%d\n", tranzitivnost(1, 10));
    printf("%d\n", tranzitivnost(201, 300));
    printf("%d\n", tranzitivnost(5, 6));
    return 0;
}
