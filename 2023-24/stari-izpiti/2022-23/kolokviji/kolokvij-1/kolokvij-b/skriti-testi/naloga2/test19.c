
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "S",
    "X",
    "M",
    "R",
    "a",
    "x",
    "9",
    "S",
    "x",
    "_",
    "8",
    "Y",
    "Y",
    "P",
    "V",
    "S",
    "V",
    "N",
    "R",
    "x",
    "o",
    "i",
    "J",
    "t",
    "0",
    "G",
    "8",
    "L",
    "I",
    "O",
    "U",
    "H",
    "d",
    "i",
    "W",
    "0",
    "l",
    "w",
    "S",
    "P",
    "d",
    "N",
    "R",
    "e",
    "G",
    "7",
    "_",
    "Z",
    "4",
    "_",
    "F",
    "7",
    "k",
    "D",
    "n",
    "l",
    "4",
    "k",
    "9",
    "U",
    "m",
    "L",
    "r",
    "q",
    "K",
    "H",
    "t",
    "l",
    "5",
    "h",
    "x",
    "4",
    "u",
    "J",
    "W",
    "Z",
    "5",
    "l",
    "j",
    "v",
    "k",
    "U",
    "M",
    "C",
    "s",
    "U",
    "_",
    "Q",
    "L",
    "R",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 364);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
