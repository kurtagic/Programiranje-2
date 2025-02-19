
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "s",
    "l",
    "P",
    "w",
    "H",
    "3",
    "j",
    "Z",
    "V",
    "A",
    "o",
    "J",
    "K",
    "0",
    "C",
    "W",
    "m",
    "S",
    "J",
    "N",
    "m",
    "z",
    "q",
    "3",
    "C",
    "2",
    "y",
    "H",
    "C",
    "4",
    "K",
    "B",
    "7",
    "y",
    "_",
    "2",
    "6",
    "i",
    "9",
    "t",
    "m",
    "z",
    "Y",
    "k",
    "4",
    "u",
    "Z",
    "0",
    "u",
    "D",
    "v",
    "C",
    "L",
    "J",
    "l",
    "2",
    "Y",
    "5",
    "v",
    "u",
    "z",
    "Q",
    "f",
    "K",
    "O",
    "S",
    "U",
    "1",
    "Q",
    "x",
    "Z",
    "h",
    "j",
    "L",
    "6",
    "P",
    "k",
    "P",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 459);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
