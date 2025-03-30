
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "e",
    "E",
    "3",
    "C",
    "5",
    "I",
    "o",
    "g",
    "E",
    "8",
    "g",
    "D",
    "z",
    "E",
    "4",
    "3",
    "L",
    "I",
    "b",
    "V",
    "7",
    "f",
    "3",
    "R",
    "8",
    "b",
    "Z",
    "h",
    "9",
    "V",
    "u",
    "I",
    "a",
    "H",
    "b",
    "S",
    "d",
    "w",
    "3",
    "W",
    "O",
    "0",
    "E",
    "S",
    "V",
    "3",
    "L",
    "E",
    "E",
    "B",
    "0",
    "k",
    "8",
    "a",
    "Q",
    "p",
    "3",
    "w",
    "B",
    "y",
    "P",
    "J",
    "V",
    "I",
    "H",
    "2",
    "s",
    "v",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 438);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
