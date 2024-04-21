
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int main() {
    int a = 5;
    int b = 3;
    int c = 2;

    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    uredi(&pa, &pb, &pc);

    printf("*pa = %d, *pb = %d, *pc = %d\n", *pa, *pb, *pc);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
