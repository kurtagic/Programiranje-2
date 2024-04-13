
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "P",
    "A",
    "R",
    "4",
    "C",
    "T",
    "g",
    "B",
    "4",
    "q",
    "l",
    "X",
    "1",
    "o",
    "3",
    "7",
    "9",
    "9",
    "t",
    "2",
    "n",
    "2",
    "O",
    "X",
    "D",
    "m",
    "E",
    "3",
    "6",
    "T",
    "8",
    "n",
    "O",
    "3",
    "z",
    "F",
    "w",
    "l",
    "P",
    "G",
    "4",
    "q",
    "5",
    "D",
    "l",
    "E",
    "Y",
    "9",
    "6",
    "l",
    "e",
    "Z",
    "y",
    "R",
    "q",
    "P",
    "5",
    "c",
    "l",
    "o",
    "F",
    "r",
    "k",
    "W",
    "O",
    "1",
    "K",
    "O",
    "H",
    "B",
    "2",
    "P",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 638);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
