
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int main() {
    int a = 0;
    int b = 1;
    int c = 0;

    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    uredi(&pa, &pb, &pc);

    printf("*pa = %d, *pb = %d, *pc = %d\n", *pa, *pb, *pc);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
