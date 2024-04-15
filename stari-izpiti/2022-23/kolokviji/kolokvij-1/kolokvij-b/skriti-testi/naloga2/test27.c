
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "r",
    "d",
    "g",
    "j",
    "S",
    "I",
    "d",
    "D",
    "O",
    "T",
    "I",
    "K",
    "Q",
    "K",
    "c",
    "G",
    "D",
    "u",
    "n",
    "w",
    "u",
    "X",
    "z",
    "t",
    "F",
    "H",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 263);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
