
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "0",
    "H",
    "9",
    "D",
    "l",
    "t",
    "R",
    "3",
    "t",
    "6",
    "q",
    "y",
    "f",
    "y",
    "3",
    "z",
    "4",
    "Q",
    "x",
    "s",
    "O",
    "W",
    "Q",
    "D",
    "3",
    "a",
    "u",
    "K",
    "M",
    "l",
    "t",
    "D",
    "e",
    "z",
    "g",
    "6",
    "t",
    "3",
    "h",
    "Z",
    "x",
    "Z",
    "A",
    "Y",
    "k",
    "h",
    "p",
    "s",
    "a",
    "w",
    "G",
    "C",
    "J",
    "r",
    "D",
    "2",
    "R",
    "E",
    "x",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 854);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
