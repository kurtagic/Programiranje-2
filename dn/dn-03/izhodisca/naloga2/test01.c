
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return (x < y);
}

int main() {
    printf("%d\n", tranzitivnost(1, 10));   // 2
    return 0;
}
