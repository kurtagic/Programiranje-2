
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
    int n = 114;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "o_U4MoNxZntY65TTw5whz1z4HOZYX0giDGMkTP_5lLKDoytRzRVwVbtcGZJ6UY2yn5Vz9pSPW2DCoUXMJdQH");
    izdelaj(nizi, 1, "qyPlfvoN1N_SKAluGUX981jJWasEeSeqpeWTitO4qcYM13rCiT1NNhN1QO");
    nizi[2] = nizi[1];
    nizi[3] = nizi[2];
    nizi[4] = nizi[3];
    izdelaj(nizi, 5, "4fWv5tSPqSMoGySAeWf2i9PVn_OpFht175MXy3VCl1iS4WMBuaxZl0HqRrfClcgSwc1MUpKdu1");
    nizi[6] = nizi[1];
    izdelaj(nizi, 7, "qHG_c4dPEQ30Dm7TIb2GfYUQP5HQ3LzMJefQzPTYpQrU7v");
    nizi[8] = nizi[5];
    nizi[9] = nizi[1];
    izdelaj(nizi, 10, "p9I8zMEgIKF5spefAvJh2dc5CZMPna6KKMHmtfwnuQEI1zN2uaqAQTlUxILZZ2ekAbybzQAJ");
    nizi[11] = nizi[6];
    izdelaj(nizi, 12, "iCA9e5HtLwSLSBlrTxalJJN8DGgJGD_q4BKyHaYmVrvEaYAOcN9FYjB1zILM0izR7aq4E1gUY6e7j2QLv5VBII5rHV5_0TrwTzA");
    izdelaj(nizi, 13, "fjVNa8xTT4pHDH8ix");
    izdelaj(nizi, 14, "ERqO6Xx7kY6e69Mn780TBB7w2F2df_7k");
    nizi[15] = nizi[2];
    izdelaj(nizi, 16, "p9wFogmZmqQ_c7aHpRVnCh7UOJsfWcIxNLGbJ5VYIvWAxkmXuma");
    nizi[17] = nizi[0];
    nizi[18] = nizi[8];
    nizi[19] = nizi[7];
    izdelaj(nizi, 20, "jIY4sztUF3xe78rFVC9bQz");
    nizi[21] = nizi[20];
    nizi[22] = nizi[0];
    izdelaj(nizi, 23, "f5Bz636hWey9x7gmzA8KKBvbY7SP2kq0FS");
    nizi[24] = nizi[11];
    izdelaj(nizi, 25, "7Loo2xwkdHeOQz30wPAjV59ifSmRp3wbS");
    izdelaj(nizi, 26, "BebTNf__KtKEmw_Se90cynXePFW4R0pfs446ruZRP5pfK0QpkWVXLnQIx8E_vFPq66yEIBDhKWfLDNS5drCcnXRh3");
    nizi[27] = nizi[11];
    izdelaj(nizi, 28, "vMo_2vo6raK132KDV9eYCsBaSR6qEnuWl2JjasXXjgbxRwa_a1Da4YLcMZcH8a26ytpx6PCO149fAf2TZm2kWuqLLxXmbh");
    nizi[29] = nizi[21];
    izdelaj(nizi, 30, "spEjTGwwEtuNiDxPpgRSl1_Gnp6z5R8DwCmOm4iQhtdv3h0tCP7G28");
    nizi[31] = nizi[16];
    nizi[32] = nizi[14];
    izdelaj(nizi, 33, "1pwytcEOK3W9dJDazdQ3pvDawfWcxLXNknYjzCM3cnHetZX92eV_B3Ia");
    izdelaj(nizi, 34, "0MQcVIBBj5fT2TLrSe2jQYI8nI");
    nizi[35] = nizi[25];
    izdelaj(nizi, 36, "Ws82SZwV2fp8VT4DnWtxBkwwCR64ooYwFYAxcckBfPBMNtntr27TexCT6KMPo2HViDIqS8RAbZtYXzKsB1nL70Isaf9SQ_w");
    nizi[37] = nizi[26];
    izdelaj(nizi, 38, "zpfIQqR5VtwNk9BL4Qzg1wR1gKUzZ_iSEJd2JsHlxUpkejxNjVYa2Qb3SPoP1QtYhv3yi6jGdSxRkJOBrLFIeAF1CzcN");
    izdelaj(nizi, 39, "94uObAb5A9wOxfLnYxDn7KSA0HWIDv");
    izdelaj(nizi, 40, "PCpafLmLD_w62jKnnK_YS");
    nizi[41] = nizi[28];
    izdelaj(nizi, 42, "88uvsUSpXGSmQsW5_vb96s57bdnUGWRbgxp3GiAmLWw0r2K7_75yhNUpuyqcNZVtdWoYA_kfZEVrl3abr");
    izdelaj(nizi, 43, "mRaBz4Sx4YnGzLiqjFXHncIYkWYNTlPfdwukjkx1zkDA2NWLzOB1VeFO7qkm8GXcrOw7JZyGu4oyLB778LMQMYun");
    izdelaj(nizi, 44, "grnFoz1g5LUu0mqUL1pokxilbXfY0xmXGi_TjyZA4qvPihTqhzniLVib_nxsy");
    izdelaj(nizi, 45, "PZbneZUsvQ9dDrzU1sZxem_AiaziF8h4BZM1pJ0L5lZjZOFa5n29wCOr9lp1swFaA1EAHcRelGLNPyWzu");
    izdelaj(nizi, 46, "01EtJwiyYtsyFwQzq89AvluTAzGbYEmBsYVuZMXIQkHNzO63xPULSQQfEslelB8VLgU8gyUws8j9PYcPBF9J");
    nizi[47] = nizi[12];
    nizi[48] = nizi[12];
    nizi[49] = nizi[11];
    izdelaj(nizi, 50, "UguigoNUnPE_WU48DHcphtqNGJ4JKv8Bx41OuKH4cJ1krejzynPFh9OSGn6qQDxY");
    izdelaj(nizi, 51, "u7bXrBXJqhusFFByllwdDVmDFVQA607ARS4g4oPaWyNBJMHQ");
    nizi[52] = nizi[5];
    izdelaj(nizi, 53, "5K4A8NZRrV7MiWZnGAfrkEnaI4AeeNLurrAb5mdut3YKWJsu");
    izdelaj(nizi, 54, "_Q9t0bMc0TTlfumyJHDuFkReLPqoCduCwJ3v3JW0V9W6bggsES4A6ak1cN5ZwB49Hod_KZmkVdOPft");
    nizi[55] = nizi[20];
    izdelaj(nizi, 56, "4Pb3");
    izdelaj(nizi, 57, "rsfcF7Ip6dVcGYS6nG3S1ikZMP5LwXtFReqT1byKv2Tld8mzBCD4PVQICLhxHSsjGrN5WkJFeTsm2xfhEGH");
    izdelaj(nizi, 58, "KdzKUM04BiYIGG0iI0vnDBGBsU7HXYVeCEc3XkwXm11DqvjASXoJG");
    izdelaj(nizi, 59, "Y6W0oavgqaSv59y6tcgTg5Rj6f3nHEYB");
    izdelaj(nizi, 60, "Rzf4FUHpbRl1p0O6btaQB6sdLEqG5_Wp7VAEgQG61393_KdXbxo8E7jyhWDgY_1N8Dii2bY4MtVyaKisMz7ycMMwp8mTctNsCe");
    izdelaj(nizi, 61, "g6Sddz");
    izdelaj(nizi, 62, "F");
    nizi[63] = nizi[45];
    izdelaj(nizi, 64, "B91SxrvtbCPbCy2_sqDHs0UJjDEQo5Xt5VStiwe1dApGjyyKg97DKo3InXyv2STawUfD5wpQWfvb");
    izdelaj(nizi, 65, "ekFhQYqioDYfNm_PsiH7iXGrn32uGO64gdtpTmxe1p_FMQjaMspo4mCBAOI9MZVbi6qqWI_irQ");
    izdelaj(nizi, 66, "Mi6PWrL6Nk7UtoVGBcOJGVgiz");
    nizi[67] = nizi[52];
    izdelaj(nizi, 68, "yP6H80QCNWepelQYkJXLt2tW9");
    nizi[69] = nizi[53];
    izdelaj(nizi, 70, "BJQM07PWXC_fCuedjdMmVxPu0kP2jnAUOjcirQ_10SR0ayf_ZhuDb3kQ406kiF4bzO__wukvG2HbbeI3an91_mYD_");
    nizi[71] = nizi[47];
    izdelaj(nizi, 72, "zQsxERRUegFriIpoGL8s__Zwoal1XnSGhNXU");
    nizi[73] = nizi[19];
    izdelaj(nizi, 74, "4julg6PnCqS_0fWhGBx");
    izdelaj(nizi, 75, "izRU_rEe9nq");
    izdelaj(nizi, 76, "5HYkYyjB4wmvTQlesyfs74ZbWd55MTylyHrapOiqtD4aliXVvqD7j8oHYwxeYXchKBr9BQS122O5MJy9b");
    nizi[77] = nizi[52];
    izdelaj(nizi, 78, "rgM8GV5ya3");
    izdelaj(nizi, 79, "_wDHjd4Q8m0U57g7FH6PHz99ptch6O4EWHhEweBNLkSJXIU3jOe5EeAsa");
    izdelaj(nizi, 80, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[81] = nizi[58];
    nizi[82] = nizi[9];
    izdelaj(nizi, 83, "bj1u8hk5uNoKgjEWa3IZCk7XeGT83zpcwjDusKTcujq");
    izdelaj(nizi, 84, "GpUzpAXBPAw86KwMxBmxC1Hm2KiR7MZr6yDv18WRYWmXG1AH1Lii3_iaqzuAmr0p2zee7Zd_PQrA3mah");
    nizi[85] = nizi[10];
    izdelaj(nizi, 86, "n");
    izdelaj(nizi, 87, "tfqtC3VGx1YheLYOrWBk8wcje4Ij3Qya");
    izdelaj(nizi, 88, "PlrwvD8Q_rDNY_M48sAhxnplidc1bEqIz7FGC0r5NE7JBdHvhSDz3kJ8YVKHs");
    izdelaj(nizi, 89, "ajEMOEC32ya77zLVj07KzbI3i6");
    izdelaj(nizi, 90, "Yew2F969oUfdZ1GSMlaovPH3IVyL2YmDCzXgBI1YGo8_jV0ASCYVD0_IgdVMm3BT6J2qcK");
    nizi[91] = nizi[23];
    izdelaj(nizi, 92, "FreeILaj9CpCtTaNubjNjL9_sreHpf1ZWbGqLPaxfruYNdzdXbfIEduCplu3BrDVoukxjtuP");
    nizi[93] = nizi[40];
    nizi[94] = nizi[65];
    izdelaj(nizi, 95, "iO89Btiivl2qCkod8IQQDRZszOKK14pYE7YeW5UWzGYoPp0DYv");
    nizi[96] = nizi[61];
    nizi[97] = nizi[55];
    nizi[98] = nizi[29];
    nizi[99] = nizi[24];
    nizi[100] = nizi[91];
    izdelaj(nizi, 101, "z_B0_W4XpPNKpfJz9BrF5SoZHSZ86JLebynFad0jHxiEAdUccKikJvXT5LOFiQqOCUg_dW6SeXnDHNsQOyfcsaI");
    izdelaj(nizi, 102, "iF6lvMKtZjrIwGkelzlWmf5p3JwpKgvkF67D4ItuxQ2_RSRH6snGkrseo");
    izdelaj(nizi, 103, "I1");
    izdelaj(nizi, 104, "hb3Xj2RgItxriRgL");
    izdelaj(nizi, 105, "YVnNfORPT0kRSquk6ko0Lk7PaZDy");
    nizi[106] = nizi[93];
    nizi[107] = nizi[1];
    izdelaj(nizi, 108, "EyUagdrJa1wXxWWkLf0vQImhckwNTyvc_KZr4mKrY636qPNM3mIX1dlH_cd6sD92wjoI5ztg9C1KgM1VKwaBGiOObgrxw0");
    izdelaj(nizi, 109, "_5rCKVA5");
    nizi[110] = nizi[17];
    izdelaj(nizi, 111, "GOxgdbKr");
    nizi[112] = nizi[67];
    izdelaj(nizi, 113, "QkRa28GXLANt6");

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
