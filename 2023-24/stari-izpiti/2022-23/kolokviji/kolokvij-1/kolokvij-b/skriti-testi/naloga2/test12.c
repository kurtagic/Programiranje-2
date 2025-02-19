
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "A",
    "H",
    "R",
    "t",
    "E",
    "4",
    "F",
    "X",
    "w",
    "O",
    "o",
    "N",
    "Z",
    "y",
    "Q",
    "3",
    "i",
    "V",
    "U",
    "w",
    "N",
    "7",
    "5",
    "X",
    "C",
    "B",
    "x",
    "3",
    "k",
    "m",
    "0",
    "U",
    "0",
    "f",
    "q",
    "v",
    "R",
    "3",
    "F",
    "Y",
    "o",
    "7",
    "a",
    "f",
    "c",
    "v",
    "5",
    "M",
    "6",
    "A",
    "R",
    "A",
    "S",
    "C",
    "_",
    "W",
    "d",
    "r",
    "2",
    "H",
    "Z",
    "d",
    "l",
    "u",
    "A",
    "g",
    "b",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 916);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
