
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int main() {
    int a = 70;
    int b = 90;
    int c = 60;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    uredi(&pa, &pb, &pc);

    printf("%d, %d, %d\n", *pa, *pb, *pc);
    printf("%d, %d, %d\n", a, b, c);

    return 0;
}
