
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "wLSJuqJMTZc6",
    "qAkNdUd1lTM1",
    "ljRfnX_xlk6p",
    "tMkaBaG7Cj7e",
    "tg78_jq3KGBd",
    "7DTVdKGb7LFp",
    "UCIW88o6l8Sh",
    "QNCki27RLxAj",
    "OcKT4nMy1AJo",
    "kEP_K_lfEtLL",
    "SbD6oLrTIGbV",
    "z29jGIEJnNto",
    "fb2MC4TkxAdw",
    "7eFpH1X1DL2X",
    "phxeTUff9eas",
    "ag6NjTo8FYqu",
    "goPGuSPx40gQ",
    "OhJL4qsVDLil",
    "va5mfvgB8twS",
    "vfCUEY2bCkF_",
    "xwqoN6FFuDkN",
    "7wIlDLX2MexK",
    "MypZdMNyzWM_",
    "XgFPbfOug4GX",
    "JfGU1gfqBXdE",
    "84DvasO6hGmR",
    "IrKhcN0psTXr",
    "tPb1JBxzjAef",
    "WRNev2Ed6Nz1",
    "KTqFmEl44kNH",
    "NalGztxTH6Bo",
    "M339YgHjFvk9",
    "sf6Mpa2e_s4s",
    "Uxb45HCESEgA",
    "AHAoT_dPALDk",
    "NQWBaPpuw2H2",
    "NTJTJFfOYBsB",
    "reTpK72vcBgC",
    "4mrQLpDyXzqm",
    "JnsriSwtZ9Qa",
    "6kkpnd2ZlBb2",
    "VqClaltIRJvX",
    "mOS72PAsc_wM",
    "kLH0jg1X_C16",
    "rEoZqmnbVFYm",
    "H4zwH_dfNKGm",
    "AkBV7byR5aOJ",
    "HxAoCKmE9CmK",
    "mPy0ZQnIR77K",
    "ToBxb9J8kyUX",
    "YyFzAa5llvHB",
    "SoNT0CGRJgt_",
    "bmJEp4bZCDyO",
    "aYseifvufbi9",
    "UhTKMwKlj1ME",
    "zHhQy5XnMNs6",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 12);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
