
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "s",
    "_",
    "h",
    "Q",
    "g",
    "n",
    "J",
    "q",
    "X",
    "y",
    "p",
    "2",
    "s",
    "I",
    "C",
    "a",
    "K",
    "1",
    "M",
    "k",
    "b",
    "b",
    "h",
    "4",
    "4",
    "2",
    "f",
    "C",
    "i",
    "G",
    "P",
    "m",
    "Y",
    "A",
    "C",
    "N",
    "_",
    "y",
    "A",
    "e",
    "R",
    "V",
    "v",
    "7",
    "L",
    "9",
    "2",
    "i",
    "u",
    "3",
    "x",
    "9",
    "p",
    "n",
    "J",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 450);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
