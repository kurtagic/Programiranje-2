
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "5bay9sKJFh3tRG9Xfr1S9yM8NLPNhNgX53Kwc8nwZPsktFfsQJvxyJc",
    "O8vZAABPz2GmPfrQs17jKTZwaHFKLkWPyZSoYj",
    "6IhqWPSksaWD4etTVGRBETiW22MKeBS5YzIg5zXQPkFpWf_HnRToWwH0NArudjBYB1dBPdKl_iY",
    "R2aW75QC2vxkbEaA3WReYz8Rzi45i6OKq5",
    "_qcMIqkYQOt4DhmGOyuBeHTYJan5rLudnei63ZG53vwGMJucwvRTcAKdCQAjQeSTsw9oJuRvdqGJO",
    "GODmwz1mG3_sywuNrRlo_4IR8hj2ClQfVwKCHke",
    "GanW0nrNx5QMs0MXpnGTTopmYdZHvPBcMyu4hTuRqrdeuy9CUxIHNCbM2gMXXkjr9Zgt",
    "yQq0AMNwqQbO9eNpX8rpA6Bhm1jg_TJU6hTzeGIPr_lP55IyxrU4iOM5ugVLkMt3MFFYg_ay6NuV3kgQ5tyMvDhqSRCk",
    "zx0EvoFr9hPwQNCtJjNLcRUZPDSb6QJ1WLuKLITtMGpf23J",
    "uDBaxf0or2vEymXJ8JkTdGdFk9bt2fGcHTyu32eSofQKSAboY8DrvkRTMbjmXJrIfSRZS86i3WAIMpHaPF_hcMj",
    "QnmCsRcsE6WzP9Mr65jVrEzVbKbLYBP6Kq3GbZO8RuJ8_Hgt0dZzcRnmD0W1EBYhoctufRaMOv",
    "Ie6e2q4rL9hT7XbV4DG9MWaMggC3Ml1iyLRP6EDbOFKKq_FSZk6JSr9pyZilGX4RMGnKYUsBCFFtZ86l",
    "4niVJuvXjnRy5W2dqyILg1uDkGQwmW9zZsbMiw",
    "w5HJguinm",
    "MDePGOQTsG9xUV_fh4uFC1_Qone2JV5JcNhgv",
    "YXwc5R_akI3j3MKac8g9Zypl0iWA42IzMDExlhv1fpouj7ngX3Nj2ZTJ2tSVCw0FbfrvC98GIpambw9mH0cTvX",
    "unoLgIRusYxGi2sXFb7kRFq7g6gnNEk7ErzQLBPBad_0CzPJ292RwjUufsDm8omLA",
    "_Z_8KKfVzzFmX3Cyi6ILw3jHpk3ERM3LI5LAmpDc9",
    "0qB3C_RBCnnGVZmOGeIOGdeyItwJgZbzZrkldfqB32vjKub56xqJ7RTWz",
    "TZXqv8L7q2S_vjXF1jxd7vodw9CvBdRuxLJCwZsLlWj9JKqAAYyYgxSOs_zfg5Zc99idSmkvaE7X",
    "FZUgPe5sbHjfiiM0h_deG_1jXDPHMqZ5304cLxiBJ2fopzKHRXrVZc0hc1L64qxWM2ibxPi6H",
    "E0oFRdlXEfzQfDd4sumJI_zrVZUSiNtP4rQ7qLtMtyfz3gsFzgiS",
    "c44_Gh0urWdh7cCi86Xjvk2l9YSEnQrNSRYGuT1L_vvlSOuz",
    "yogLSSvHY3fmztEpIUJnYpQKvUsaA29hmfsFpWwGOFVjSG8H8hQw89CqYbDumkjQ8lWbGaFLXv8sqgq8kOUMH_hNel_j5b_n",
    "VUNXczQvxQ",
    "xUUmGOmUB2_z2aOWI04",
    "S7wY8w3cSWQcFzohjDCC09Q5ziJT88RylJex1zLKvvXkU4nUuvcrTKkPXlBbjR",
    "hbGW_M5z_hqVot2eD4uolykx",
    "l_22Tq9rfghUfhmFzlQiQit7aBe3W7ccWjjsMUMcTfgFA7MGBJJVDCsGFVjb",
    "9QpgtjLs_9HmJLbuq8uxVScgA_fsYun",
    "ozvmUKfcqXyXm5hXfVj8AxFO",
    "5TivkQXJQ0gu3eEgQ8vw89GDHAa",
    "V7TCYoyw8UmWNtUvCKRQK5VXe4nxdma8DcwVD7yYIL1kbTHWTREDoH71ZWsRQKkiaML47cUY4Zn5CR0ChgG",
    "NWj9BO0fqEC2Nr25x7egBZANdqARfhLVF6Ud39BF97imvNRcABnXCPsyDulTWZQ6GW2w8YAGhoTRZdoc67jNLveMLJMLVarJ4H",
    "uJDm7S4K0dPqyu",
    "HS56YRml7zf",
    "C2EpdHxKXRmoSVIJTVcC3GMkGJ28Y3XiNk4HDLh6VgrgUjuu5PnKTmEJ",
    "a1XnaJml",
    "q2Kl6t3z_S6RleV9Dbc_99C1FiRCZT4eiUumPgEWzNpnbL_NkgL3GeHMr7qlJevjcwBef0m61tKtNlLJA_AHbRu",
    "TXmfLeO",
    "pqHL1YNikOAqM4J94omahMXzDvmd5zl0GcMUSn",
    "kZOhxPtNAg0lk_1nwzwZy91X",
    "NifEerJRxChez7LLGgLwSKTFab0vxLMmRVUc",
    "xRb9xt8y_JJdGgIxJaOIuGjkf1cIMwdqQzT",
    "6_O3up_9KVu4st4oSE",
    "rEZUtkXnESYkDDHKSBcqMtRRViwDXBu7mEgkrV",
    "0tqYfaa5UMyWo1UgyOktpZuITMt45RH2D0DlxKOEwAAKmyhyzg3Lz3hKx43IDWCTvQZIF",
    "EUj52BMRv4O37BQb_y8QekZdgRZ3qOMQQaJ2MjwGavrjStlIr0mcUHcqzNkHPzKYWhIbLT",
    "w_5ghsxGvJt3EQCQU4N_HYz41_mbPZHBYgM4BXEwyccPV",
    "uBsS3ee2Ra70k7KND4Tmobp",
    "OaDqJVcj6y9_B_WHpLwDHZfB5PNyrTQgXB35qb83o",
    "3jstHA5pcEgzKiWNrqwIQrI7QDJzbwoSGTr10vvSHlC",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 544);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
