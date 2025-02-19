
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "0",
    "s",
    "R",
    "A",
    "y",
    "b",
    "f",
    "O",
    "L",
    "J",
    "_",
    "u",
    "5",
    "R",
    "c",
    "3",
    "2",
    "M",
    "R",
    "b",
    "5",
    "Y",
    "E",
    "T",
    "A",
    "2",
    "u",
    "b",
    "U",
    "d",
    "f",
    "4",
    "B",
    "A",
    "o",
    "J",
    "O",
    "r",
    "4",
    "j",
    "_",
    "z",
    "O",
    "O",
    "E",
    "9",
    "D",
    "a",
    "X",
    "i",
    "C",
    "N",
    "t",
    "n",
    "K",
    "F",
    "U",
    "L",
    "8",
    "8",
    "A",
    "u",
    "E",
    "1",
    "T",
    "m",
    "5",
    "z",
    "p",
    "S",
    "L",
    "9",
    "G",
    "O",
    "G",
    "4",
    "i",
    "t",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 465);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
