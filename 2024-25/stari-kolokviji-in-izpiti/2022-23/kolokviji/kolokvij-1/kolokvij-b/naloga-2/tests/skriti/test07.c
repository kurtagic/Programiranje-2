
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "SY2UjnglstXbBKU1DWSBGXapupJEt8r_2IUTPB2ldEDOwYlYDf0BOWB6NIiEvn2tR9JLztxjmTGJD9OTtJepvv8q4mujTDo2jC9",
    "5GBfN04ap3jMZpCviLhRJWqmGSW3UB0prx921ZsCNKFLx_CMklw4zMxr0Zec9UpWDnd7vueSEl8WLmqJQ3KRvNoMxrixh86gXW7",
    "Z8GDLsX5Qh_NzcEEV4lIZkIYEQ2AJHrMalDac5d81TTW8LBww7O5gk9pPqXG71QGAGOBqHL_JFIo7Z__Sy_XzkNQS9OAd6VRlEh",
    "gj10Pop5pVegKYB2O2kQMi6wkqmyWbJ9RBeWMPVYfhQd_h8zQVIIZSvM2fYzI0jeAIdhc142p6xBj3FeLUVmUDOjsWCN76nl0mv",
    "dMkD14Oo97IAVOCtUhOXTMFjHsaojrOU6rziAM6HowYHGxkoakt_4eki_RNmvbbGyBzHW7vrEHwDhEoioV8rHpkT9VJYMzBlj4E",
    "51JYPlh8FviiM_z9MZTYf2BGPIiqJAQTd51McoRP_IF5R_wUmBJFKzMiX09oQNEzpCGoFrFpLH98OUZd8R0ouBC6oFGFImjuket",
    "5bEVF5yQnEe0lf87m9XIRx9HyEY0KmeYCFozjHhht4RExHQgY3ab551BFWCyXiTd1WD2_1oat3lFA6z3QZX6M1vFt_2Jw0HPjOV",
    "QcQYgSLRj3pqKL03ChSt41oJkVVP4VmlFKGtAv8cBiKeOwP0hgcdjxMfeQs5kkNYETnXxRRtqgcjzmCeaAn_Cu77yRpsvyzsEw7",
    "xygpIQcKhitcgI137p4bDBAb1TkZ6TPdM6Q5vtv5UJpfQkk3i4L_ziAvLW70omDvPZuxGV9nRYnnFyccqH2QOCQRJnrXX4YVpes",
    "2BEzg6jxvvca3pDc45QEqbWY8T4AA6lSW3w_sbNtObvmbUYC76G3kitFcj8HC1hzfjAzUJGPn4UTHXQhuvHJRD72cajHIeOMMxa",
    "f4ORFfbTZnN_VWu4dXMrW_keVVKj9C0B2KkQGZ9jkFzfvi57527MOOVdBnoSxsh4XzOMCTynSQGIS_ZZuTI9ayMKkUnvsSr_dC7",
    "LeqQ6MYvBMT3l5qbFcwGtF9l6DUeBDbf44hfrLsB1uE6QFZPOmX2wEdNSZeHFbhKgFqAk3tZxB6j7mJl21ONEs8Ti0A_nKYx1Ts",
    "ylT40wTJSHWlf8rpw6MXFgX1Km0o12nkrTsbvZ6XSFGoCkCymhdz4Fv4r9mK2yG3Ve4Epyk0dD8SxF37p34gnjDQBnbMlh1JftE",
    "8SqwvofemFRJ9NXy1GnC2CFrjLy7m2nCurVDTbh92mAQ1mQZcZ9Uf2ZN25ULySZICXIwQP32g7KexpK0by0voZ5oYn8UuzleRYV",
    "TqXLSpXjVcxMxJ1yRJlFZjLbBnj0WdDzHgi_TMrwsoNXt7jXQYnCrA889BJmcGtmM3f9ohQ8_QEK5t1jR1up73OMu89FQrcMdZu",
    "ifmsVJRvcxns16V7CyqhSUWq_l9eOxGphUeFd9aDsYyZzlOl79HmGPFSC4TTg4Vljef_N4wmhQZ7kOd6_xlpOY6hU2UaxyX1HZM",
    "3ozgtREPEFN97ITaVdc4KcgMDRdxTLY65tayqZk0kOB4XS9PZXdVmqWl18GKHE7LVqYy1MFn3GZLkKV_cAEtmlZZEy925Ru4JY1",
    "ZG7om2_1F3a9I5J882MwwP6kcKPBk6S8bm5dDLiPZUCKbp1ALBrGr5lPgbj2li3ALggpBW48IPqKxkjaHfg8AVk_kMO7CSgWTyu",
    "kyLPQSY9LLx0B4bOsfpXAzTi8h4O2xjLKWj4OzQIhHhz3S7TsFvl5QnMtnpr3oZzfQRqkaMZgkKdEqs7IIR_YcjbLs0LOzKpaGJ",
    "wACi9TgDHilcl7zNewgHzYJY5Dd3MHHqAtimOFT4d_2Edc0RKr35GpJQZNChxQZcgzOo5UgxXjZZY1PpRNvsjh8RwePCOWgslW7",
    "PW8zgatUuYEhTKgxGjhYzCGOqk_DgL0WHw3wdJNgEljKBn46ZuOljZ3akZdsh5SirenyIcp75XL3_zNrSdCcrejA0CMEeddncMu",
    "w2G_7HvXL26boxUp_PY3vmpSo7o5w26Cz7krTXBJSpGhzB4eObyhkG1_6ODxSRcMuJCZq6v09LsCE5xmCGQLU_y0lrOYrGbarbd",
    "qcYtgxQggkbDYF7nKcRJvH63bcVL_gpRkUMZjxa7t8IFIa_lmvsjioakyRoCsaiXJmrqbJJyjoVjcTuUX2xavlOuvFUE6TAKRyf",
    "fRQH3IuhqxvcKRtrt411_kfMOeUftaYF6KuoTnWZAoWtAG0KR4dyDwKg5F4Mfv7Sn0I7If9TZlKLyxPWPZekLYMJrDWisaCxqWU",
    "eAXE4sA3wgb7h87rEAAVMt6zHw0FfajrUkTYX2AnPp6lNBzel3wma9UxmxzqnWVSYgKLtkyGPc735xsocDnRt8q2MmIK0Nh34d8",
    "EWO6i2zC9xkjtL8_euclOfXd7P1dSUMh_htKT4eeKuwwdSm4MNUF71JUeBDeJW9UxWNQtdg9HKehCLSstcRihFrx9JleXHOWATZ",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 99);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
