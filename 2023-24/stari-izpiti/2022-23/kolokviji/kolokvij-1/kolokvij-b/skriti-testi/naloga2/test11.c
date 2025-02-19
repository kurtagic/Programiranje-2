
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "N",
    "u",
    "5",
    "n",
    "q",
    "x",
    "n",
    "B",
    "a",
    "1",
    "_",
    "1",
    "z",
    "b",
    "a",
    "K",
    "a",
    "q",
    "1",
    "U",
    "B",
    "1",
    "Z",
    "6",
    "j",
    "s",
    "r",
    "G",
    "V",
    "U",
    "P",
    "7",
    "n",
    "0",
    "K",
    "I",
    "W",
    "8",
    "H",
    "l",
    "m",
    "S",
    "b",
    "T",
    "o",
    "I",
    "U",
    "r",
    "C",
    "5",
    "0",
    "w",
    "i",
    "X",
    "K",
    "x",
    "n",
    "V",
    "E",
    "Q",
    "C",
    "_",
    "7",
    "e",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 351);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
