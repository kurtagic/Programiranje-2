
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 148;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "MmhGSzGGixS37YVb1lrv_VWUqM");
    nizi[1] = nizi[0];
    nizi[2] = nizi[1];
    nizi[3] = nizi[1];
    nizi[4] = nizi[2];
    izdelaj(nizi, 5, "GYXiB04T_JZ9goXlL1tb6");
    nizi[6] = nizi[1];
    nizi[7] = nizi[4];
    nizi[8] = nizi[5];
    nizi[9] = nizi[2];
    nizi[10] = nizi[2];
    nizi[11] = nizi[0];
    nizi[12] = nizi[6];
    nizi[13] = nizi[10];
    izdelaj(nizi, 14, "JJghUwYd0WlNTwhNsJnANjZddOEO3uQg");
    nizi[15] = nizi[4];
    nizi[16] = nizi[14];
    nizi[17] = nizi[15];
    nizi[18] = nizi[3];
    nizi[19] = nizi[6];
    nizi[20] = nizi[15];
    nizi[21] = nizi[1];
    nizi[22] = nizi[0];
    izdelaj(nizi, 23, "fjZwnKlrQu25LT2IMQt2UMSJWQeHHUFg0gR2josX3JraMQ7iqCA6SI2Ke6nnPofO79LD8eC5");
    nizi[24] = nizi[17];
    nizi[25] = nizi[23];
    nizi[26] = nizi[17];
    nizi[27] = nizi[20];
    nizi[28] = nizi[20];
    izdelaj(nizi, 29, "3fieHYW2gxTSyrXbU");
    izdelaj(nizi, 30, "zyqGEWwCI9G9JkIFMsTRkJIlEbFZoxZCB4sYfdDBJecfBjXm");
    nizi[31] = nizi[22];
    nizi[32] = nizi[4];
    nizi[33] = nizi[24];
    nizi[34] = nizi[4];
    nizi[35] = nizi[0];
    nizi[36] = nizi[3];
    nizi[37] = nizi[15];
    izdelaj(nizi, 38, "rKVXVrSFYFGzkX2l5lDjS7vG2Iz5CMez2KLyuG1fk7Ovot_XrWnfEWGo2urGkw8z_bwl5__2s5TyqRY4c0BY8BVsjnL9MKz");
    nizi[39] = nizi[3];
    nizi[40] = nizi[25];
    izdelaj(nizi, 41, "FS5DSDs5GvCqk_Ab4muZ804MmDkh1t90WGGHdYapGdBALHV2gprd6WEL6fsba1oWe4GXHNvQfVbvVlXdUjZW8Bipdp7H");
    nizi[42] = nizi[4];
    nizi[43] = nizi[22];
    nizi[44] = nizi[19];
    nizi[45] = nizi[16];
    izdelaj(nizi, 46, "MgjBWoMyKZUxlQB6QR9vRkR4A7");
    nizi[47] = nizi[27];
    nizi[48] = nizi[10];
    izdelaj(nizi, 49, "JN7vYWtW9xLFAY_WUrDH_DUC3zKEHNUwUI6YX_");
    nizi[50] = nizi[47];
    nizi[51] = nizi[6];
    nizi[52] = nizi[29];
    nizi[53] = nizi[22];
    nizi[54] = nizi[52];
    nizi[55] = nizi[23];
    nizi[56] = nizi[11];
    izdelaj(nizi, 57, "qYWSzLfASVriA6pCVQPOe");
    nizi[58] = nizi[1];
    nizi[59] = nizi[52];
    nizi[60] = nizi[52];
    nizi[61] = nizi[39];
    nizi[62] = nizi[40];
    nizi[63] = nizi[61];
    nizi[64] = nizi[42];
    nizi[65] = nizi[43];
    nizi[66] = nizi[34];
    nizi[67] = nizi[24];
    nizi[68] = nizi[40];
    nizi[69] = nizi[25];
    izdelaj(nizi, 70, "5wHbYsPwfStDui04_Lc5iSx4W_");
    nizi[71] = nizi[52];
    izdelaj(nizi, 72, "eg9P_HviWQ4Pl64SanskDEYt1bynAL8_Ek_JLgwMt98YW3Ubk7oyeno");
    nizi[73] = nizi[67];
    nizi[74] = nizi[14];
    nizi[75] = nizi[4];
    nizi[76] = nizi[32];
    nizi[77] = nizi[56];
    nizi[78] = nizi[44];
    nizi[79] = nizi[48];
    nizi[80] = nizi[72];
    izdelaj(nizi, 81, "eWhlwe0KQqEq93FQ6SboEsBMM028_blaqOOXcrSg1SYybqOlSr_vVsovIODCGY6");
    nizi[82] = nizi[16];
    nizi[83] = nizi[33];
    nizi[84] = nizi[39];
    nizi[85] = nizi[23];
    izdelaj(nizi, 86, "u92RCSQl2u1VdRzTHI8IJo5KGOsx7i2cj36lQN8A2EapW7uEKKqElUqek3xsFehPT_kal9LHpqxpaqPkLUT3QMg9w1h");
    nizi[87] = nizi[74];
    nizi[88] = nizi[33];
    nizi[89] = nizi[10];
    izdelaj(nizi, 90, "E_SuFFcpt7tl2qPY6n5_6pHLZ6_T41AAEA758dCCqLOm6pGRQC9DUFVt9WIKdYdC4t_HZpC0lcZwttjeqC5XpJV4OKS5dJEwp8");
    nizi[91] = nizi[62];
    izdelaj(nizi, 92, "lFwSKyKz8fKM2yz6WY3ck4d6LTGB69JQjXruPEugis0YGBI_YdroHKO4g4sRVxsaM7S8RDGypN0Ajn");
    nizi[93] = nizi[37];
    nizi[94] = nizi[44];
    nizi[95] = nizi[78];
    nizi[96] = nizi[79];
    nizi[97] = nizi[44];
    izdelaj(nizi, 98, "spKgExeUleb7r36k2");
    nizi[99] = nizi[50];
    nizi[100] = nizi[62];
    nizi[101] = nizi[100];
    izdelaj(nizi, 102, "tJomEnpjkRcQlg0o8f6O9sPhVnVDlPTNJl0fAxjp7dDs6rHz5jAbkQU4QWIBOUH6W0_AlGeTSbsAjicrI58Z9si6IJo_q66nPB");
    izdelaj(nizi, 103, "vF0JQuzTt30EdZtlT4txwqWGhCsKpkNE254VfM4iAgeDhkCqJ0tXMSWvoo9NtPs2LDgPldsGdzUV2j");
    nizi[104] = nizi[19];
    nizi[105] = nizi[96];
    nizi[106] = nizi[101];
    nizi[107] = nizi[33];
    nizi[108] = nizi[1];
    izdelaj(nizi, 109, "krb_WZPO_1TOP8gZQuZFgsfCYbgf410VobpfIWmoXHNUYYk0b9VQIemEOOnfz3GmASKRmNLajEXX");
    nizi[110] = nizi[46];
    nizi[111] = nizi[29];
    nizi[112] = nizi[106];
    nizi[113] = nizi[28];
    nizi[114] = nizi[28];
    nizi[115] = nizi[98];
    nizi[116] = nizi[45];
    nizi[117] = nizi[21];
    nizi[118] = nizi[12];
    nizi[119] = nizi[28];
    izdelaj(nizi, 120, "hSJfVv1bvdejtJ8l83eAZfU0QfXPDxdPYSeYwrXBOqHHfJvRKoLP7ZUUojJCz8q8_pzUI_mDOYOMqZkwtyS7KVcdfJw_DN4ruLF");
    nizi[121] = nizi[76];
    nizi[122] = nizi[39];
    nizi[123] = nizi[73];
    nizi[124] = nizi[59];
    izdelaj(nizi, 125, "uXrAS2A56F6SHo_jEqkfnDiaX0PbCwmEETyNgJvPHTk_LVn");
    nizi[126] = nizi[115];
    nizi[127] = nizi[83];
    nizi[128] = nizi[10];
    nizi[129] = nizi[29];
    nizi[130] = nizi[106];
    nizi[131] = nizi[85];
    nizi[132] = nizi[106];
    izdelaj(nizi, 133, "KsMY3o7MRgksePf0kwlX436YriF8CJuIBgQ3YRxPDman7eSbpYNqhY7EJL");
    nizi[134] = nizi[110];
    nizi[135] = nizi[105];
    nizi[136] = nizi[111];
    nizi[137] = nizi[119];
    izdelaj(nizi, 138, "7L8zi");
    nizi[139] = nizi[32];
    nizi[140] = nizi[138];
    nizi[141] = nizi[72];
    izdelaj(nizi, 142, "cep0hKWp8_9zzkRyFCAlqOTJjM4Rw5nFAgNmcSoTJBD");
    izdelaj(nizi, 143, "xtUWxptQnlrAPq7ppXcgmnhmsAtCxSoUw1ppW5");
    nizi[144] = nizi[53];
    nizi[145] = nizi[75];
    nizi[146] = nizi[94];
    nizi[147] = nizi[70];

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
