
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "E",
    "e",
    "U",
    "w",
    "9",
    "S",
    "P",
    "D",
    "z",
    "Q",
    "6",
    "g",
    "Y",
    "K",
    "h",
    "V",
    "e",
    "D",
    "r",
    "p",
    "N",
    "B",
    "c",
    "r",
    "Z",
    "k",
    "F",
    "C",
    "8",
    "x",
    "O",
    "T",
    "_",
    "b",
    "n",
    "u",
    "a",
    "1",
    "l",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 185);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
