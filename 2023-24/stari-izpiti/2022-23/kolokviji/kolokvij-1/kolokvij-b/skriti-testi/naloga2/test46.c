
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "zSO",
    "UBF1KcCacpirhQHiV9ZAWMRcDJmrppBEidH94xkSMXTT",
    "XANwaEwxS",
    "uTYc9exm5AGzySElzEuM7TH26amm_wq0N8BdB1mKj6gpkoGq",
    "BGV80WXmo6mIfFdH_WIWE6GrVK5njajdSFCKy1",
    "pdDcilGk1tsMgW6biQbcCkWZK",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 903);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
