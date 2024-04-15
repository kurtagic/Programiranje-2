
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "c",
    "e",
    "a",
    "O",
    "d",
    "M",
    "Y",
    "w",
    "I",
    "G",
    "X",
    "c",
    "l",
    "9",
    "c",
    "5",
    "f",
    "N",
    "p",
    "m",
    "C",
    "I",
    "K",
    "l",
    "9",
    "_",
    "I",
    "E",
    "L",
    "X",
    "0",
    "0",
    "V",
    "_",
    "_",
    "Z",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 897);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
