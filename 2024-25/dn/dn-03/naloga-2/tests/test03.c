
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return (x % y == 1);
}

int main() {
    printf("%d\n", tranzitivnost(1, 10));
    printf("%d\n", tranzitivnost(2, 10));
    printf("%d\n", tranzitivnost(201, 300));
    return 0;
}
