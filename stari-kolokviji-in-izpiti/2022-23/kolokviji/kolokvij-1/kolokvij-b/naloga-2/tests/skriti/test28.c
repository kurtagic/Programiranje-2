
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "P",
    "a",
    "G",
    "L",
    "0",
    "f",
    "f",
    "e",
    "2",
    "i",
    "X",
    "o",
    "c",
    "U",
    "T",
    "C",
    "v",
    "o",
    "T",
    "M",
    "X",
    "Q",
    "J",
    "X",
    "S",
    "j",
    "X",
    "h",
    "U",
    "c",
    "z",
    "q",
    "f",
    "g",
    "u",
    "f",
    "K",
    "x",
    "y",
    "3",
    "_",
    "D",
    "P",
    "0",
    "q",
    "N",
    "M",
    "W",
    "p",
    "c",
    "y",
    "_",
    "J",
    "Y",
    "j",
    "E",
    "w",
    "q",
    "g",
    "o",
    "9",
    "Y",
    "K",
    "m",
    "H",
    "q",
    "s",
    "D",
    "n",
    "N",
    "X",
    "w",
    "V",
    "b",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 218);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
