
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
    int n = 181;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "X8dJRzUKPJTm1yS");
    nizi[1] = nizi[0];
    nizi[2] = nizi[0];
    nizi[3] = nizi[2];
    izdelaj(nizi, 4, "UGfvH2_bUlyqMIrs8E5L5qDJgDCVahkaWFdS58_D9sEfaqyCJOy9");
    izdelaj(nizi, 5, "zGZNqhO8Y4GuIFbXkLMcMDmT5WucSZrqE56ng7BuD7W2HzaRNQb21DM_e07p9lsHTrFrZgYf4yHtE");
    nizi[6] = nizi[3];
    izdelaj(nizi, 7, "X8dJRzUKPJTm1yS");
    izdelaj(nizi, 8, "b3c5gcLb3crh");
    izdelaj(nizi, 9, "X8dJRzUKPJTm1yS");
    izdelaj(nizi, 10, "UhEDyutj9C7iuUJMkRffTyUy1jcTPgxMsYZirCILvDM2WWvEZmoY6n7YR1qmxhpCC7GOASnJnGGDofjMVO0rsXyo2pVgSlJ");
    izdelaj(nizi, 11, "UhEDyutj9C7iuUJMkRffTyUy1jcTPgxMsYZirCILvDM2WWvEZmoY6n7YR1qmxhpCC7GOASnJnGGDofjMVO0rsXyo2pVgSlJ");
    nizi[12] = nizi[4];
    izdelaj(nizi, 13, "UGfvH2_bUlyqMIrs8E5L5qDJgDCVahkaWFdS58_D9sEfaqyCJOy9");
    nizi[14] = nizi[0];
    izdelaj(nizi, 15, "X83W9jGWDWqb9tiUrRj6BTsR0MEkOxQuWzMoFZkQZR2QosAGBQn");
    nizi[16] = nizi[8];
    nizi[17] = nizi[16];
    nizi[18] = nizi[6];
    nizi[19] = nizi[8];
    nizi[20] = nizi[1];
    nizi[21] = nizi[2];
    nizi[22] = nizi[10];
    nizi[23] = nizi[18];
    nizi[24] = nizi[16];
    izdelaj(nizi, 25, "mR5alZF8608B6wCZhYYingdxyDBtnb1dbtiOahuH2URzjvzi2OergYrZC2yqlXgPLZjleR2ItWw3p9nzeoTPBzLxHV2");
    izdelaj(nizi, 26, "X8dJRzUKPJTm1yS");
    nizi[27] = nizi[12];
    izdelaj(nizi, 28, "UhEDyutj9C7iuUJMkRffTyUy1jcTPgxMsYZirCILvDM2WWvEZmoY6n7YR1qmxhpCC7GOASnJnGGDofjMVO0rsXyo2pVgSlJ");
    nizi[29] = nizi[13];
    izdelaj(nizi, 30, "QQEoaLcWWXXl2mjZRavkW1_bOskXyZEPaP2Sg11Oty2k6_yg4MjBrexvGNWMaPaMbi5pggWMMoihtWW");
    nizi[31] = nizi[29];
    nizi[32] = nizi[9];
    izdelaj(nizi, 33, "mR5alZF8608B6wCZhYYingdxyDBtnb1dbtiOahuH2URzjvzi2OergYrZC2yqlXgPLZjleR2ItWw3p9nzeoTPBzLxHV2");
    nizi[34] = nizi[16];
    nizi[35] = nizi[20];
    nizi[36] = nizi[8];
    izdelaj(nizi, 37, "klG1XkgF6ACqBMF8D3AM6DvfHFOgKYOSeQNHreoF1QOqPw4t_yBqFNk2rha6zNsDigxG8CfzpvoQZbbSHoniUpwaX");
    nizi[38] = nizi[19];
    nizi[39] = nizi[9];
    izdelaj(nizi, 40, "X8dJRzUKPJTm1yS");
    nizi[41] = nizi[35];
    nizi[42] = nizi[35];
    izdelaj(nizi, 43, "UhEDyutj9C7iuUJMkRffTyUy1jcTPgxMsYZirCILvDM2WWvEZmoY6n7YR1qmxhpCC7GOASnJnGGDofjMVO0rsXyo2pVgSlJ");
    izdelaj(nizi, 44, "UGfvH2_bUlyqMIrs8E5L5qDJgDCVahkaWFdS58_D9sEfaqyCJOy9");
    izdelaj(nizi, 45, "vAC5gtC4GAR__wT_zMFNJNiqMz");
    nizi[46] = nizi[25];
    izdelaj(nizi, 47, "UGfvH2_bUlyqMIrs8E5L5qDJgDCVahkaWFdS58_D9sEfaqyCJOy9");
    izdelaj(nizi, 48, "hsg7AS2GlSwYBBmQhVlb3QATBJZKxQgwDxOh1Syl1X454rgMeIE22fwaDIMxFb4r5NE7FZ810v5qYYlahjIIFtf1ajEdrupIi");
    nizi[49] = nizi[29];
    nizi[50] = nizi[18];
    nizi[51] = nizi[32];
    nizi[52] = nizi[10];
    nizi[53] = nizi[14];
    izdelaj(nizi, 54, "mMbp4GU1wxueZL8hh5yUtQPt");
    izdelaj(nizi, 55, "5ZytpnZXTCTyIXf2a6ljx4oFiu3HfAMRYDytBnaLMNPnNJi3wG3lBV");
    nizi[56] = nizi[49];
    izdelaj(nizi, 57, "eSjxeiFlCdeFdygVuNYDzzmLMrFN");
    nizi[58] = nizi[15];
    nizi[59] = nizi[41];
    izdelaj(nizi, 60, "ReFZ_Kg6PdbUeI5kZU6MJoY9aIHQStT_El_pvgG08VZzbh");
    izdelaj(nizi, 61, "zGZNqhO8Y4GuIFbXkLMcMDmT5WucSZrqE56ng7BuD7W2HzaRNQb21DM_e07p9lsHTrFrZgYf4yHtE");
    nizi[62] = nizi[0];
    nizi[63] = nizi[48];
    nizi[64] = nizi[37];
    izdelaj(nizi, 65, "M1z1L");
    izdelaj(nizi, 66, "M1z1L");
    izdelaj(nizi, 67, "96wN9uBYHgShtSyhoUQ02tuxz3X7wgnC7sHA35uS");
    nizi[68] = nizi[41];
    izdelaj(nizi, 69, "X8dJRzUKPJTm1yS");
    izdelaj(nizi, 70, "hsg7AS2GlSwYBBmQhVlb3QATBJZKxQgwDxOh1Syl1X454rgMeIE22fwaDIMxFb4r5NE7FZ810v5qYYlahjIIFtf1ajEdrupIi");
    izdelaj(nizi, 71, "M1z1L");
    nizi[72] = nizi[14];
    nizi[73] = nizi[65];
    izdelaj(nizi, 74, "UGfvH2_bUlyqMIrs8E5L5qDJgDCVahkaWFdS58_D9sEfaqyCJOy9");
    nizi[75] = nizi[64];
    izdelaj(nizi, 76, "zGZNqhO8Y4GuIFbXkLMcMDmT5WucSZrqE56ng7BuD7W2HzaRNQb21DM_e07p9lsHTrFrZgYf4yHtE");
    nizi[77] = nizi[44];
    nizi[78] = nizi[19];
    nizi[79] = nizi[23];
    nizi[80] = nizi[23];
    nizi[81] = nizi[65];
    izdelaj(nizi, 82, "yCCGFB9XxLilauxWvHTocsvmaU4rYquhIePVlY9zrUSoqqv2udNSJWUza259PyxYVE2z4OZTZ81vjJWHUMBLycPmqgA6Mrj");
    izdelaj(nizi, 83, "DtaXSRP4SpGXFo3T3q04PgVt4gGMzvi19Bi6akrUCf1XRcpIhJ4kgCFpn5e21__T24bzWQGruNEWDF_QAWF_EbqwabfQ2OMEu");
    nizi[84] = nizi[48];
    nizi[85] = nizi[57];
    izdelaj(nizi, 86, "FS5DSDs5GvCqk_Ab4muZ804MmDkh1t90WGGHdYapGdBALHV2gprd6WEL6fsba1oWe4GXHNvQfVbvVlXdUjZW8Bipdp7H");
    nizi[87] = nizi[1];
    izdelaj(nizi, 88, "96wN9uBYHgShtSyhoUQ02tuxz3X7wgnC7sHA35uS");
    izdelaj(nizi, 89, "ReFZ_Kg6PdbUeI5kZU6MJoY9aIHQStT_El_pvgG08VZzbh");
    izdelaj(nizi, 90, "F0WJ9IfWlcUu1pRYtYJjkb6iNX7AZ399Iv8JVKXzPvWp8rK");
    nizi[91] = nizi[53];
    izdelaj(nizi, 92, "ReFZ_Kg6PdbUeI5kZU6MJoY9aIHQStT_El_pvgG08VZzbh");
    nizi[93] = nizi[50];
    nizi[94] = nizi[80];
    nizi[95] = nizi[18];
    nizi[96] = nizi[1];
    nizi[97] = nizi[72];
    nizi[98] = nizi[83];
    izdelaj(nizi, 99, "ReFZ_Kg6PdbUeI5kZU6MJoY9aIHQStT_El_pvgG08VZzbh");
    izdelaj(nizi, 100, "AWKUIBoApMN4JQ");
    nizi[101] = nizi[66];
    izdelaj(nizi, 102, "ReFZ_Kg6PdbUeI5kZU6MJoY9aIHQStT_El_pvgG08VZzbh");
    izdelaj(nizi, 103, "SfYHQznXVrRdXqD_o3fdgBI2bCg");
    nizi[104] = nizi[98];
    izdelaj(nizi, 105, "X83W9jGWDWqb9tiUrRj6BTsR0MEkOxQuWzMoFZkQZR2QosAGBQn");
    izdelaj(nizi, 106, "X8dJRzUKPJTm1yS");
    izdelaj(nizi, 107, "96wN9uBYHgShtSyhoUQ02tuxz3X7wgnC7sHA35uS");
    nizi[108] = nizi[72];
    nizi[109] = nizi[40];
    nizi[110] = nizi[99];
    nizi[111] = nizi[94];
    nizi[112] = nizi[48];
    nizi[113] = nizi[97];
    izdelaj(nizi, 114, "bqrcZOcyCahwfwNdlzmzU6QeGWavMnlfa2uE34uik9wT5VMQDaJAdpnwrVx1j5ndOHBqZ2R");
    nizi[115] = nizi[94];
    izdelaj(nizi, 116, "hsg7AS2GlSwYBBmQhVlb3QATBJZKxQgwDxOh1Syl1X454rgMeIE22fwaDIMxFb4r5NE7FZ810v5qYYlahjIIFtf1ajEdrupIi");
    nizi[117] = nizi[27];
    izdelaj(nizi, 118, "klG1XkgF6ACqBMF8D3AM6DvfHFOgKYOSeQNHreoF1QOqPw4t_yBqFNk2rha6zNsDigxG8CfzpvoQZbbSHoniUpwaX");
    izdelaj(nizi, 119, "SfYHQznXVrRdXqD_o3fdgBI2bCg");
    izdelaj(nizi, 120, "hsg7AS2GlSwYBBmQhVlb3QATBJZKxQgwDxOh1Syl1X454rgMeIE22fwaDIMxFb4r5NE7FZ810v5qYYlahjIIFtf1ajEdrupIi");
    nizi[121] = nizi[109];
    izdelaj(nizi, 122, "wOpRaoU6tyCcb2Xm7S1KtcvolKXAJF_aOA0Kll_FWt9");
    izdelaj(nizi, 123, "bqrcZOcyCahwfwNdlzmzU6QeGWavMnlfa2uE34uik9wT5VMQDaJAdpnwrVx1j5ndOHBqZ2R");
    nizi[124] = nizi[51];
    izdelaj(nizi, 125, "gAJLZ9AY0OTc5AmYm4_S5qSyiEhB");
    nizi[126] = nizi[96];
    nizi[127] = nizi[76];
    nizi[128] = nizi[44];
    nizi[129] = nizi[55];
    nizi[130] = nizi[51];
    izdelaj(nizi, 131, "spEjTGwwEtuNiDxPpgRSl1_Gnp6z5R8DwCmOm4iQhtdv3h0tCP7G28");
    nizi[132] = nizi[126];
    nizi[133] = nizi[64];
    izdelaj(nizi, 134, "b3c5gcLb3crh");
    izdelaj(nizi, 135, "UGfvH2_bUlyqMIrs8E5L5qDJgDCVahkaWFdS58_D9sEfaqyCJOy9");
    izdelaj(nizi, 136, "mMbp4GU1wxueZL8hh5yUtQPt");
    nizi[137] = nizi[17];
    nizi[138] = nizi[20];
    nizi[139] = nizi[101];
    izdelaj(nizi, 140, "eSjxeiFlCdeFdygVuNYDzzmLMrFN");
    nizi[141] = nizi[76];
    nizi[142] = nizi[44];
    izdelaj(nizi, 143, "mMbp4GU1wxueZL8hh5yUtQPt");
    izdelaj(nizi, 144, "n8xC5d9S2Bu0Fbw5L0uhcL84thkJNyK2dJlZZpcR6NB0lh_K3pd_gzAGTfsG8");
    nizi[145] = nizi[108];
    nizi[146] = nizi[124];
    nizi[147] = nizi[52];
    izdelaj(nizi, 148, "klG1XkgF6ACqBMF8D3AM6DvfHFOgKYOSeQNHreoF1QOqPw4t_yBqFNk2rha6zNsDigxG8CfzpvoQZbbSHoniUpwaX");
    nizi[149] = nizi[130];
    izdelaj(nizi, 150, "fSK5");
    nizi[151] = nizi[7];
    nizi[152] = nizi[38];
    nizi[153] = nizi[125];
    nizi[154] = nizi[136];
    nizi[155] = nizi[42];
    izdelaj(nizi, 156, "qjeEX");
    nizi[157] = nizi[74];
    nizi[158] = nizi[73];
    izdelaj(nizi, 159, "vAC5gtC4GAR__wT_zMFNJNiqMz");
    nizi[160] = nizi[19];
    izdelaj(nizi, 161, "akvlsM5jG6hOJ_2WyL0A2D6fZ5OCp4OfFbjUSPIlqLHBRHTnluoENjSFLuO9shz0k9rJIXQ86sV7ARVXyF2IpMy27k");
    nizi[162] = nizi[158];
    izdelaj(nizi, 163, "AWKUIBoApMN4JQ");
    nizi[164] = nizi[21];
    izdelaj(nizi, 165, "klG1XkgF6ACqBMF8D3AM6DvfHFOgKYOSeQNHreoF1QOqPw4t_yBqFNk2rha6zNsDigxG8CfzpvoQZbbSHoniUpwaX");
    nizi[166] = nizi[58];
    izdelaj(nizi, 167, "zGZNqhO8Y4GuIFbXkLMcMDmT5WucSZrqE56ng7BuD7W2HzaRNQb21DM_e07p9lsHTrFrZgYf4yHtE");
    izdelaj(nizi, 168, "wGieQtTCC2KY00AF_fu9fde9DVqMbvLRKdwaYfhsI2_od6X4nyW2I2aIa0fIbd");
    nizi[169] = nizi[48];
    nizi[170] = nizi[5];
    nizi[171] = nizi[48];
    nizi[172] = nizi[27];
    izdelaj(nizi, 173, "bqrcZOcyCahwfwNdlzmzU6QeGWavMnlfa2uE34uik9wT5VMQDaJAdpnwrVx1j5ndOHBqZ2R");
    izdelaj(nizi, 174, "VfQsuWTpAUZQvKPw2yEqlp65XgbZtV1zJbbsv9jO3llsatKFEtzcKPyJkfpz");
    izdelaj(nizi, 175, "7ClzM8YCd8sZROch8z8OttRHko_9zHvtx6ScTX_TFiYFNbkGDIF_Jzl6IwN");
    izdelaj(nizi, 176, "spEjTGwwEtuNiDxPpgRSl1_Gnp6z5R8DwCmOm4iQhtdv3h0tCP7G28");
    izdelaj(nizi, 177, "3ecsnBNqNBByuBopnG6wLJNL_Lc4YQZPtybSYPUhRJVl781JPBvkshXMCFe8Nn637");
    nizi[178] = nizi[101];
    nizi[179] = nizi[171];
    nizi[180] = nizi[110];

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
