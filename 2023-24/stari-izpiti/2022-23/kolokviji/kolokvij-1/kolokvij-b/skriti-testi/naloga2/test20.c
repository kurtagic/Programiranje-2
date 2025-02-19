
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "u",
    "5",
    "u",
    "Q",
    "9",
    "5",
    "j",
    "S",
    "4",
    "Q",
    "1",
    "U",
    "f",
    "o",
    "w",
    "P",
    "q",
    "S",
    "F",
    "z",
    "P",
    "Z",
    "N",
    "3",
    "O",
    "Y",
    "E",
    "E",
    "8",
    "F",
    "w",
    "F",
    "A",
    "Z",
    "Z",
    "Y",
    "K",
    "y",
    "l",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 115);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
