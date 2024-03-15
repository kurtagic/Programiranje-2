
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return (y == x * x);
}

int main() {
    printf("%d\n", tranzitivnost(10, 20));
    printf("%d\n", tranzitivnost(1, 100));
    printf("%d\n", tranzitivnost(2, 100));
    return 0;
}
