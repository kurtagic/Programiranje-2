
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "QGmbwxvR1AajuUL0YP8jit700gSj0O5NIyD3Shi5SYs6Tbsg_qXNjlioO4ktqu3bKGH84",
    "vyzTffJeo1N_iYVyvcX1iKfFhGOjOj1sv_f1JMxbDiVuRPj17ijq0VFgc4D4N3EEzNSMw",
    "np9JNyqQvXAupNC8wlXURaPfqBJP_vfOjUO2FferWlE9fTILCUQAPQL_jLYfez5iRlHFA",
    "xm_bxD7ZQy2zGZS8uPg86pHPuUeU0b8NrVx0FljwjdueXleJkQCAiczODnP81qXS_89iq",
    "oF2CNTk5ohhrd3uovpmsjtT0pmEbH9_WiTVlKSbbaLhHlSTYuyWagITuzm9j7nIBLP0CG",
    "QpgkZpnlMGrOmktDmSHQk2W9DH5JYNIxo49ruJBaMxCVAgFZzA2YcYCcN99w1ZEfpVaBZ",
    "plH8HvTUNpzNKLxPiIOEKKt3Rmwu6KbRX_vQ1l0l2WzQshSNedGz8nle2baMD1qNfSIpA",
    "RTb7fmHXJdIPWZwkJf3i1PvkT0q2pyeQsaU2HIIhJ7g_aSdBBz2jEcqu8VbYtuB_7d285",
    "jzz9AgBBjaPByyLFbZCEK3t7tnrmYdqPyrP_jtKb0t6Ayj4GoNpUl4htFk8zn2i3h_iZU",
    "g0KsC7a0mpfMqdCyc1U12Asyu77jcfH9c5TU1Kc_U9HsF20jk6DO5TUfcJ1jF7UvcxFCs",
    "7SBhtCMdc9UEpHmcOIqjK4P9edYWpKmtKwT_2h9lBdvduhtnyYH5RE7Dbhgnri8YGaUOV",
    "EYGKBIgTfsgTonGfS4RlAJXqP2c4Veqvz7TdGpyDWiv9C0zo9_NjCZcqqX4JME28na5TH",
    "XcEWE976go1BT2PwFaQEpeFZLbunZbYa5sKKRGmgJxfySikNh6m3sZz2lf414Erq99o8O",
    "l4JjgL8XuG05B5W9tTie_b1qnH5ob_tyXihgAj9kSfddEosu0ld8XZfRFtAMW_LuteFbx",
    "SMV45qn1a9zinJZSQHbQTFDz7Hb0fULxISXGmshBRVsPxoNrLl2_GLuxjGN0w9FxxtaGS",
    "kxtleckhVdMbVAdx_vGSCDncuuKQ3FtBcvJkIFCZGM4esz3i5VxrzRM9wt_eknXjN2Yst",
    "uUk0z93UHiNF9Dsig5RGvvcu0jyNgplrkIPR8sJpMPsNYLa8cCWYox5dx8m859EZYeSSR",
    "3JV_ZxcZ9j10LBa4f1oT2FRSzp_6lCyofp4oy4PuK9IgFPYHzQVmaCZYGeF9TfZtYXuoq",
    "oisDYHZ2MvH_DwxrqFJQCpBjD3NEJpi75Ua4RjY9ByDA9eQSZf3FVdiqdkk5Gyaa3FEEB",
    "31ayOEM8fLIydj8wybwrj3AXNfgUwFp2k2Z2RhM51MU_A9_1Rq7r7FjQ1lJwbY1b_a6BE",
    "5RJUhdEd1uRBzHvsAlLJItvidoeD7GViuGGf4Aq6rV_V7we9jSUXiNs8KqxaYXrxJgPgZ",
    "fEDFWp8S8jV7viEofVlLtBvrJ0n48FOF2IrgLqIVUnf840B2ekQzGyQQ7zSuD6WWnM2kV",
    "sf1GQQO4oxJLSh4QvCJ2Me9ozTvReKJ3o5lsjvksEjK7dKrm4EPr_EmQsXmBI9ANDss5v",
    "JD3mjc81OUrTOiM_41QLOrJPOCoGJA6wO5gWhS677kWdEUPhuX2Fa86WrsrLQs63mXeGI",
    "afoUZTWcKaSAMCcdMDutQPBzucpvPQBZK9rSGeUhqIVa6R2ELErCEtMKwLwiQTdoS_B5X",
    "5hD7EJlUhlXtCXe_zgPZeKrwK4ncDx2wKr9VGFJRdwIGqUnpQ0s8S14fApsb3DKkbfMLw",
    "DgAJNnyYm84PLvRtTXoLN2tcRcHWDv040tQ1vad2XmErpFskGNGtz5AtRrfJ1hwnlfIOt",
    "sDhN3cuj3cc_RV0CIqDqTUqjpQKbojhS4nhnPZy09FBr2D4BaiZn7B_80gtercoOIpH0r",
    "rpU0vvZfRp9l6eZxZ4DT5VsLSpMGrwxojJgvQqz5NDiNF4dTs5MUNUodQhHilV7_BfJWo",
    "K53Hp6m9SXh7BqAEy9Yv_Rr1acscRr4Jma4XgQd0zYfwRP9AOMoC4MNkHoGVg43YTlUk2",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 69);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
