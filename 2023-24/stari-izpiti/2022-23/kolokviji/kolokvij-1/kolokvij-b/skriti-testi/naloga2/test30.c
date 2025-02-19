
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "_",
    "O",
    "G",
    "l",
    "P",
    "C",
    "p",
    "8",
    "J",
    "k",
    "1",
    "r",
    "9",
    "m",
    "8",
    "w",
    "W",
    "Z",
    "T",
    "Z",
    "g",
    "q",
    "Z",
    "V",
    "y",
    "J",
    "O",
    "D",
    "B",
    "Q",
    "L",
    "r",
    "U",
    "C",
    "0",
    "5",
    "b",
    "G",
    "B",
    "I",
    "Q",
    "3",
    "b",
    "E",
    "4",
    "k",
    "S",
    "Y",
    "c",
    "T",
    "5",
    "3",
    "E",
    "s",
    "Z",
    "0",
    "A",
    "g",
    "l",
    "h",
    "m",
    "L",
    "z",
    "C",
    "X",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 224);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
