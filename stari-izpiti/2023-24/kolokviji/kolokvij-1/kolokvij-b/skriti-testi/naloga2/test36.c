
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "7XlHdEL9RrVMDLYps1lP9LOsLggAqA9vLXf_qWuA",
    "RD64wPJLzkaAwxyvkoqIEz5SCM6WWxObmnBvWW7mSifvB4VCY6EYny31HHIVfKoAVDWxqBoO75fkP5IeYQy",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 652);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
