
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "YiNdj3bsqYzvX4RNVQ4sQe6yCK10gnflAQk1WMLizX88hXXJ5XKwnV_d2F1PHMEn9yRWwAfF5e",
    "oqsmoX",
    "s0phYI",
    "Pbsi08hj_S0",
    "X19bwtyKge_EMxJKmnfgvktRxT_NBnOUE4al9M9f3lOHTde08RJd0oSZMIcjqaITjZoNCkrQ9pcii73Rl2rzIchJPFG12oIh",
    "VDIgENLVvJhEMWp79gWPQPEd_WYM21b",
    "zGEDiZzlIChPwN7N5JjuztXRRP77SIexk3PcWBG0tOdZtrx2nhbI2Vu3vx1ckV4CtxJzqUxBDtGB",
    "jCEO0wqmLJ8mUa00ft62o46eVN7nZ4ub1mhU08JpnEFJotfir_NcemAh7kdFzvyt1",
    "UMOLNp5jXHp8EuEK5QU2RdN7hn1_fBs9_xDNd18BN7uVhEHdPa4dwRCiX6Lc9XD1BZcaj",
    "meNIlkNINl9aPWUq0QmoqPUF59rF_XHBTXaBwZsAWAYAIRdJdtzQUSjFl5D_foJc3k340nN",
    "aJkWgKfdhPeGzwsn6JzH1vZUtJZpXCTtaiBB8ULi9pNbi5zmEU70YJqid1XiNR4TsrZYQopWJIEaxcX6_ZMclIpaFSav4beoGPy",
    "bCM5wwXL2swUQKJ9UduStuy_ByxbCNj5gj6Z2bwAiBSPsXWPTucLCn8TaL6GDu2ja8AfxmJ_FCh5t4Gb3z3",
    "XycvP9fLsZpoipRfveQSPMqndPd2Z1PZwUqOutD83DkWH03_BhRCYVeEmuqnTMW7tAQ_ZQ",
    "0NJyWAFrnGvpVLhkZtutgCnGOOFCl1HdSKKTHxbk638_IV4yrLD0yxW3DSwccY0tI7IsJhkAQK",
    "vySLpPFK0WkgAETE4SPvkoo3k6H21vOVRbYs0nN56EPM25GRkP7VWG4JXGPhS1kWbTy90G5iEjEzpZGoPtLKZinvs2",
    "aHKIIJR2LfLQcnMK5rbsDTrFgY7D9cU7yViuIG60UOeSm1IBajk3v2a2lfb3ikaWJgq",
    "jkcGk3k",
    "I6qYb2TnmFTe2iTjDLDKNdVNo4_UahThGlbeBko5iXa4egzm8UGl5_9m4Cakjn8lXZi5MmlZ",
    "5p4qZtXMXM490tPB5QUDHEvcJvO8wRJAczVyLrjM7Z5OtUQZZGx8PmzWzGa5DP5ya5Zy",
    "aN5SPmODp7cdyzEDPSrcfCwgvAFA9V0gO9WOW6WiYhcuqr_Q7SLJ_IVEhDMsD5_P16HXPy8OkRW1CzjhAWhuXqkznSlZuSUfm2",
    "YOZJVXcbWrRZ",
    "WeuAq7MQ5VRBNBP2ReQtZdzshKu34i6MWL3ntlfgNu6umMcy9RcfoIjUz5MpjCU38nYG6WKC6nJJXL_lPEXu",
    "TZh1IcmiVEzfekxSOt5lxf1DTgO5A8e2S5_4zaLIcSVn",
    "Q8KlyYQudl6va_aY2PR3_Xa",
    "tBLB0OZpIfkptmeqozRg8SsV9bxtyjh2qZioU0XuwDxbfKkFN",
    "AuSYTpdyFdcK0np14R8BwrZBfKAtFXx2MfF_iO8Wzq37",
    "TvtQDKLWQmRMpLA9gKi64xwP8nOPFwSN4IVPRiuniBxXk549cNfVxWeOprpfaybW07h7FeYx85xbLWGyxOym7wkOMC",
    "nQsUONXkK9XsyxkuMkieugYYFZ_mruZ30jUc6d0ldmFtB0hdo_RSeoD04oeN8yDRZ0ro8Ee3e7xdftW0E5UtFa",
    "aHQcUj719z0S",
    "8",
    "DoHskbKcCf0FDfGTywOX4AlOHm0jsLWOiJnj5clC3_phjRKenorE3AtWqAA4D95aZL5EnW5pjEAsBdloWattsjcrmrI27a",
    "U3FrE3m8Fzc2V5WgAPvbFO_9yhJ5l5oM0Lg9IIKsOV0yaFAho",
    "jlQ",
    "8NG2nBP7gG7X0YA4_QhZmaV4VSQ4OH1HlHkvkBJwAk0iy4Rd4Mi",
    "AIIf7Kt_yA0K4yGMWVa9lMKEvI",
    "in3jinuaUWoAyXgQORJvDpAkPkKey42x96_JhA1wafSvWFntuhNfYNX",
    "cXqDEAxM8vjqGjq8BES6Df_rckeXORp3Tvlmfnjalbmutq7xjsVQ45EL_woxw1lapRDlIHRpQBr8ATfBrmWcK59Hk0",
    "Q8jado0koYBCzCYEaZfqoFYWv7tyBYh9tCiPr7viHdCSDvbMemidbvcB6ximARfnz6TLl5Dm",
    "mDJ7i8510M2h3ka2TlBGIemrzxwAeVv_b8glX4tKbaEZRvT0Na7OPNHfjVp",
    "layqPz0gIwG6902Y4TnoRX4_vVf0YGzd4f8pb74stolM_6Pr_FK4z3S7uVq1ErQfPrEcAgJCQ_TWIX_Mf6H",
    "LSysvT1zSGuolXKHBH5tPwryCsvQYPqeDlAEWYwL0rwFvEmnp6i38s0nRg",
    "xydRftf8HLC_DnyiPXISP7Y757RpnqAFQgueN2m1ot1OdRmLpcOUeHt0VS52e1_GCVqqkgUOj9mfP4zP8nNjWACGRfLJMML2odE",
    "5P5e11K7uvTZfsM0NmD7frkAp5FoJWNW6kVrJOPU_A0PKvMiB9zsZ4OyGg1dM1RFCUopom1LsI47O_b",
    "pUhLffvHOzVksi8Xpc6tz9SIHTI35aJi",
    "EwuPRy97eHfHN7uu70oZgYjVU514PCFc8J6NPpxLXXkuIj2_5x1O1t4E_EjO6L4v97drD7RKOKt2TbX",
    "OJLdO6mG",
    "9AiT8t_3nl",
    "EEAl7aisjhyHWTFqiXyNendpGZttG227nZnAkJqPJi5V6HxevjuD2u7Z4b06GpJpbEqjxKmQpWBbg4B4cqctb8qf",
    "kt3PQU",
    "nhtMIM5St73UqF6h2obhRaz0ff9aKoU2URkQ3",
    "sFmmWIYB_2K2MzBhKMBwA5s",
    "1zNkE6qcaDzpVjL7xDOx4ZFCDRBfazBP1u43qEhQk3CCjmzZC2SKA3GXz7wTdIWRCEjuR_iD7c0dTMFtaHar",
    "CPcbFf6wSkdhdR3PzeEe9ZER6cTd8VdrQIginVI8YLxczwarzWSs2cFlYDV1Be0sy07BlcW",
    "Oj7t2lxQ9ZXVLRQDHh6CLuC7EiCVkogEZugXzsQUSJFshm9u6b",
    "JzFHbSoIJY_G7f5rW7GmIcVW7SVzlQJuPH84MTCW2AuxAM3V",
    "bNybAyYfbV5tf9omCLY5NeGDdLlRsyQuVQZHKoe_poTeKEQXQOoNP9GunM7UaW8Wh4uLHrrC6Tzm6u",
    "f0ru0UzlZYjnS8fyQgH11f2gKNfEVSecZcI",
    "8Y1k8nCEG",
    "HrrxVJu7dJknzeFyjrGAjFW5WH8n6jNzSNP",
    "T4w19pgrRD_dkoBO62gaa24to6phZWnnk4ZEzKjJx_D2Sjcimqh5vzVcZSpPvPfEE4F53n1klQywZgm6eWW1CI5lqwV_IfYgKv",
    "omvhv0kvGm_Pi82cUjBsHuB_cI8PfP16yipyjQCDZrmEvx_sAiYQghImD4gYWyEvaJRxjhREgcPQmvCZQn4_N0QFtxjxsnM9Ba",
    "Pv1EeSD4gv0wVOBJ1dVI6",
    "kIA5OfeD5H4E6GV52ZfgihxCkpFb9xJG",
    "6pVYHCmYr5tAPi_uzC9gLk1_wAIsjzpMD4Upq43LD0zpKK5Jvr4FQYamfTW1mmsZBQyXWevuGtyqbVyeAuF_E",
    "kN3uM4yVdNODRmGhHOKka9ZW4ZV5hT5csarANw77",
    "_7553UclBx5BpfMnuEva68wLmNIxnr9Z_lQd1RVcVszetXmvTDr2Oc8pgR6de05tHf",
    "VKtdfnxA3vJIDdWcqhIJVHT",
    "4OrKofwS7P3vMajlUow1_fIwJyBc0Vb3simUwKwmtR_Bgg",
    "d9D5nd5tYmBnFWtPM53IwkPGt5CN_jLJcRxI1piysYllQDiRb2",
    "H5WDGQt8xYkPAPgKs5fl9g9OjGzh2yA0LFwvJU0w",
    "IcuWcSrCtwfJ80JSbKoNfxgH4PepzJNpAonI1uYh3iNhCvG8IZlEEyPqjsGnmmymM3ZwMRilTuqKcWWnhQ41mvxyYw",
    "UyUDFp7SP39dOU39gMRI2k7jeNLOoy0SWOgFA6ijeMO_T13",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 545);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
