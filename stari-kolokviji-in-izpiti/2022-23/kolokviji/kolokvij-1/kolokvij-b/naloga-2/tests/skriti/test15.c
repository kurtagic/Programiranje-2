
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "6",
    "2",
    "P",
    "N",
    "k",
    "Q",
    "a",
    "F",
    "l",
    "O",
    "l",
    "7",
    "W",
    "Q",
    "_",
    "d",
    "d",
    "8",
    "g",
    "o",
    "d",
    "B",
    "z",
    "4",
    "J",
    "V",
    "V",
    "q",
    "Y",
    "o",
    "r",
    "c",
    "5",
    "m",
    "Q",
    "C",
    "B",
    "u",
    "M",
    "o",
    "x",
    "Y",
    "T",
    "5",
    "9",
    "R",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 265);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
