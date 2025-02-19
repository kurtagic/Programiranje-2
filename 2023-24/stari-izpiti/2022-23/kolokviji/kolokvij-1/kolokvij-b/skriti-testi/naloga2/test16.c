
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "4",
    "f",
    "J",
    "b",
    "q",
    "h",
    "z",
    "M",
    "r",
    "b",
    "F",
    "r",
    "0",
    "Z",
    "t",
    "Q",
    "a",
    "X",
    "P",
    "_",
    "1",
    "t",
    "d",
    "C",
    "W",
    "H",
    "K",
    "a",
    "f",
    "H",
    "L",
    "6",
    "8",
    "t",
    "j",
    "H",
    "z",
    "5",
    "1",
    "B",
    "I",
    "3",
    "2",
    "1",
    "Q",
    "3",
    "a",
    "V",
    "y",
    "O",
    "y",
    "4",
    "t",
    "m",
    "L",
    "R",
    "T",
    "M",
    "_",
    "z",
    "r",
    "b",
    "R",
    "o",
    "V",
    "D",
    "N",
    "y",
    "q",
    "5",
    "J",
    "k",
    "g",
    "0",
    "s",
    "K",
    "g",
    "Y",
    "F",
    "j",
    "I",
    "Y",
    "5",
    "l",
    "q",
    "c",
    "t",
    "l",
    "e",
    "F",
    "E",
    "y",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 394);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
