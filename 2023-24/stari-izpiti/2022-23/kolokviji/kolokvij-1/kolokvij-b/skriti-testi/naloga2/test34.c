
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "hgT1GwgfCuE8i1DfVbVbert",
    "V7uKtio1XMCXuzJvEugXVlL3yBMSzlIA5JZJL0K0CGKMo",
    "wORrW8fh3C",
    "OZv8HvJfiicQ_HzFcKHqrRzSbAWV9V4Pw0Q3ccCyNKq7cawtDp6uRbq7xttgdwZYWe1Wh0shQ6",
    "xERAjYubz4pFwaNzRhzHY95SqqTkSN41RZuf0IoA7MaogZ6ucP1U",
    "7abWAUj3Gbo4oONgxeDvhWs1uYhnzE_e",
    "EnD7Msrbc",
    "0mL1q0zEOnaa31IFw_r2OE_f9b1uVdenE0NmXZteILoA",
    "W_XH0rZ1ez4IR4_BBn75e4RyjqLtTWGSTyWa_VVBGUfaEqs3pOTTsQqgkRpSwNJ2QQmEXGB",
    "XfQmyLu67",
    "GskD9IysDdj4nw6za89cfZe",
    "6IGeAXckO31FKE9eHR",
    "_OMWmTnOVU2wW1XUKwIv0ObrrT2ELmnUXkpteVwbPQVfeuKUmnA6sO8",
    "TyDhf_sIpvHPZVOyPLMG7RPlg_q9kJCPHn6ngtIK_5E9tbL5y0nPVtjqycsqCORW52eTYjpABZY7hDudWpdemnnpM",
    "3hPYPZSk82_McRq8Rg6KoteCbuOI63Y7",
    "WDtUwBQzBpz3_JHY94cKmpweqB2E6EQGma2QXbHOLyVIyF2zyn_c6iayMEQIJZL3ZWV",
    "sKNPUL148q95P48pi06aIM215teGUB",
    "CB_wgaStdE_D64MvD6ta5R87ZmcKFWnpQ0mRNEaIhtjzmjwAzPiMFyE8RcVBOb40F5q",
    "q07aIwkCr4ZlkZGn5FQo4ZhzAWfkJ9EvKcz1mpZp99Gt9dg9WhGRdFyzcINdEvmaOcxBRH",
    "HzN_PEfZGaBZWCSO0LJ9",
    "ubwbgwmTuBBjZtUv_e2tJv3FdEn6YX6rEd0sUaC5xqdf4wXH73b1LBh2Tn",
    "E0",
    "iIPny4b6WCOQSZDwqO5XuTaL5vpqroz1NIDw3ue",
    "HYym9oOPy9cTFNociNtPm19WL7K9Zi8r6TBRKTH2QZAFO7P53710vtDndbN8UKWuqn7Yn",
    "_sD02RthUR5mPGC9uNXKi4uhzfL0mGX7KM5InpaZ31df3gczWmXQs7XCaCZSUT8uP5Ml8Oc3y0YbvSJuhYk3",
    "cn3BplWok",
    "iYxN9L0bM3BmetTUdtKL1XgtIQQJHBFJLRbF6B_1OMbx",
    "AWUqBL",
    "cLGjdom4b90UQHcmbqWEJtjvrBqQepl7z",
    "EZ70cYjh3jbc_hNFQaxDHGBGhlDWl3z6VFBiSuENa4eBp_ia7AFBF9Nj0hnjv_d9aJ1cvZqCrN5VUyJGbw5DJzcMbf_mrMY0",
    "RgEKOp6JBH6V9BDIeBzdUCy9YYXR3sZM6nVsOBL8gcOq",
    "oS0GWo4AfNzcUeuCuXCvhl_u_WsVKeJyzmingNFN0",
    "kkdbes7KLrGzUOTyuDKGj9MYrSGhVX1qeGabPRjLcpUI0DMllPR_3yAg7aL2C",
    "68JnW92LZ",
    "ilL7dwiLjFV6yr8INYgXiGT8YSlN3xeGngImtXKInAPM5ux5IHwmurf3n03wN0Q4quiH6xwT7Zp6vKHnIbB_sfGAE2spdsM",
    "pEQdzqwhCxhqHFLFac10pFQ77ZezB6R4a7n_ibIr7IFxn7xeJE6dKkF8JE77PPLiAdy",
    "uX9TZOnbiTpInOo9ER4crX0AnUu6zk7hAcYX0oQKWzD_a",
    "jqqWM5eicbH_30YOELh6L_nWhurTuca58uWD0azGqG5AXQZ5eI09pUJBXG8w1js49EWYofb82yhtVw2AIj",
    "MjghcbL8DXtDNhLDkvKtpMF7baU60376NGgP50ofQx1btF4rXgfGHiJgVi87Q",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 719);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
