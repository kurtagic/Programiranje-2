
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "h",
    "J",
    "O",
    "3",
    "O",
    "W",
    "R",
    "C",
    "m",
    "r",
    "f",
    "x",
    "q",
    "F",
    "a",
    "K",
    "T",
    "D",
    "3",
    "I",
    "R",
    "u",
    "P",
    "y",
    "f",
    "Z",
    "j",
    "A",
    "Y",
    "t",
    "9",
    "0",
    "4",
    "9",
    "w",
    "N",
    "H",
    "z",
    "v",
    "G",
    "2",
    "g",
    "M",
    "o",
    "q",
    "M",
    "Y",
    "K",
    "C",
    "M",
    "X",
    "u",
    "J",
    "1",
    "t",
    "v",
    "9",
    "G",
    "X",
    "0",
    "C",
    "y",
    "Z",
    "U",
    "y",
    "3",
    "8",
    "O",
    "g",
    "t",
    "0",
    "4",
    "2",
    "1",
    "o",
    "L",
    "9",
    "j",
    "0",
    "t",
    "e",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 43);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
