
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int main() {
    int a = 42;
    int b = -42;
    int* pa = &a;
    int* pb = &b;

    zamenjaj(&pa, &pb);

    printf("*pa = %d, *pb = %d\n", *pa, *pb);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
