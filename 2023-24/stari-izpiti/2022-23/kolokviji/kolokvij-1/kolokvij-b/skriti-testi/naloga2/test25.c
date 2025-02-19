
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "t",
    "0",
    "9",
    "y",
    "Q",
    "Z",
    "M",
    "P",
    "F",
    "O",
    "0",
    "8",
    "P",
    "h",
    "X",
    "y",
    "z",
    "G",
    "m",
    "j",
    "e",
    "6",
    "b",
    "L",
    "_",
    "G",
    "y",
    "I",
    "g",
    "z",
    "E",
    "s",
    "M",
    "P",
    "L",
    "g",
    "T",
    "e",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 973);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
