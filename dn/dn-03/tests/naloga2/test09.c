
#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

int RELACIJA[][6] = {
    {1, 1, 1, 0, 0, 0},
    {1, 1, 1, 0, 0, 0},
    {1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
};

bool f(int x, int y) {
    return (bool) RELACIJA[x - 1][y - 1];
}

int main() {
    printf("%d\n", tranzitivnost(1, 3));
    printf("%d\n", tranzitivnost(4, 6));
    printf("%d\n", tranzitivnost(1, 6));
    return 0;
}
