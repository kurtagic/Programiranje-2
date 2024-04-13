
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "v",
    "H",
    "o",
    "1",
    "B",
    "9",
    "L",
    "t",
    "H",
    "H",
    "H",
    "t",
    "C",
    "L",
    "W",
    "m",
    "r",
    "K",
    "F",
    "4",
    "h",
    "X",
    "v",
    "x",
    "U",
    "h",
    "C",
    "w",
    "t",
    "R",
    "4",
    "_",
    "U",
    "c",
    "Z",
    "k",
    "C",
    "L",
    "k",
    "x",
    "7",
    "A",
    "e",
    "Y",
    "E",
    "x",
    "2",
    "B",
    "C",
    "a",
    "r",
    "3",
    "w",
    "g",
    "X",
    "a",
    "Z",
    "j",
    "a",
    "F",
    "h",
    "c",
    "e",
    "D",
    "V",
    "g",
    "q",
    "8",
    "D",
    "m",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 126);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
