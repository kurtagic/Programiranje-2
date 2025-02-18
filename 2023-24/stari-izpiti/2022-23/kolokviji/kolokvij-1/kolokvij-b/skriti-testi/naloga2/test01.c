
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "MDc0hB63THpgvu",
    "DLR_LhkwsUnpNV",
    "NrKKEXSpcNQbaq",
    "UBb9ORbHNWG6ap",
    "512nQmKbyRKMHy",
    "hDf7IBlYxvqVZd",
    "vvlklJjQzHwpeT",
    "f9DgjRu0ElOdKf",
    "DP37N_5eagihQh",
    "qG7WjmWb3fh4h4",
    "UCWdhahYGR0E6g",
    "6tiTxEJfVM_qOs",
    "KpFAFzCjYLYrrF",
    "5YZfjwkzbEwQrD",
    "I8XPC636BfMHzR",
    "R2M83jCzMB3yeI",
    "yjcyhR8_OYxnIx",
    "2BW_HQdOvtmKNZ",
    "GGGRj808un7vMb",
    "Ax0w0Mnhbk74cS",
    "LIC624z_ly5OsI",
    "CM_oopKNJOae2L",
    "4a5vCJ1OBxmHVP",
    "ocys9M5oG4S0Ta",
    "b3jY7z2h4SkuwB",
    "H6_hT5t4Cs25cK",
    "M3F7zOyoLqCpxU",
    "Py3Bx0wYrYY1C4",
    "T423vR7mTjrIB3",
    "o48jXICZvm2vtw",
    "cHVbocTZAdEDyg",
    "EHWr_Ic6NMkkF5",
    "OEgKyRi8QxwvBH",
    "Xo3m1t2vXCVz6m",
    "O2uUObh1oIvdRa",
    "5pYrJX6ruq9cho",
    "S1iThsHTSucupR",
    "AYnw12gZKbDsr8",
    "jyhVIyhMpGjRiC",
    "Nyvug_2Hn8ZTUl",
    "KlwCdXn6eTek6z",
    "cJEoTtYy7wLjMG",
    "wb3vlOjzcuc3En",
    "2nyShWwobdcXrG",
    "22YA96X3bcF6vt",
    "oMa7dxaDJ4iBLb",
    "fSCpUKqQOY9b0U",
    "9KmEfdZ8cIjF62",
    "c317uV7kWmxiQY",
    "rNKtstcog_IaFI",
    "KXelflL7m_ncGU",
    "9KWU6T4MaTqOMz",
    "Ng0VJB2GVWCxvt",
    "On8Y2bIuzdqXX1",
    "UofdcM3bx9skgh",
    "w0n4kha1VPTGQl",
    "NaYl1SaGM89UOo",
    "xfBkcm1jqTKvAs",
    "oap0IWtQmDHJsY",
    "HctdvAoXZynyop",
    "57n7fX50Mg3sb0",
    "HKO7PuH9iU0I2W",
    "CRBIvzrBBBvfOo",
    "UV8Nq2MvCJTW4a",
    "kvLzzt3b05diVh",
    "CxTJ0vGO3Q7aB6",
    "wvippkOsJ3tvQG",
    "Vcz7nv9Eedb4Ll",
    "HuWbV_P8YsWd_A",
    "arKo6_EWl5GDGI",
    "1oN8t75TndMS4q",
    "H7wbFkyL5_NXis",
    "7Rb36iEueB0tNG",
    "uboxNReWIJOlmK",
    "EGxxwBw35gn4gz",
    "VfXthk4JKZNjOP",
    "8e7EpZTPSGmvFp",
    "vL9n4oehlDEzVX",
    "cdscJU8F4vVCfK",
    "N988H3c9_ibVTH",
    "tXjgUzqpwPJ2t5",
    "vhj4C4AupFfT07",
    "2zmeoIFbwvZawX",
    "4GgpNhvhVuTM3G",
    "9bFA6DCCd48fnH",
    "aIIHuDyLgBSfEQ",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 14);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
