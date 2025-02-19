
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "xyFsxMhBd2ePxNafWIY1bxB5iUeZO40Xs",
    "RH68p993XwKSMraO30hI4mGFIMlMeHkhgjCWL9ke2nd82hzvOhAbspOr3KowMWZlwb0Cex0gTwv2RYXib",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 398);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
