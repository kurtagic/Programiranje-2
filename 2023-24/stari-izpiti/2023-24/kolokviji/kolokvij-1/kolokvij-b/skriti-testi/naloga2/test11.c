
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
    int n = 142;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "vqqHIwvadAmYsY5Prfv6lUBHO55nLC_CkXN0JXRHO");
    nizi[1] = nizi[0];
    nizi[2] = nizi[1];
    nizi[3] = nizi[1];
    nizi[4] = nizi[1];
    nizi[5] = nizi[3];
    nizi[6] = nizi[0];
    nizi[7] = nizi[1];
    izdelaj(nizi, 8, "eSaXepI0iUrZxnkftZgiaDAulVhV2m0b9kFZRwOJmhzrATDePUzocYH");
    nizi[9] = nizi[0];
    nizi[10] = nizi[4];
    nizi[11] = nizi[0];
    nizi[12] = nizi[11];
    nizi[13] = nizi[2];
    nizi[14] = nizi[2];
    nizi[15] = nizi[10];
    izdelaj(nizi, 16, "ozH6EDAJLSW1xtKLSGlWEUi31wcTNKnFy_4g_xgWY93Hx6hoLsEPDUZcWpcRwGfw9_UWy1UYmvK8dl2qRrMl6gYfFoS");
    nizi[17] = nizi[12];
    nizi[18] = nizi[12];
    nizi[19] = nizi[12];
    nizi[20] = nizi[11];
    nizi[21] = nizi[11];
    nizi[22] = nizi[2];
    nizi[23] = nizi[16];
    nizi[24] = nizi[3];
    nizi[25] = nizi[19];
    nizi[26] = nizi[25];
    nizi[27] = nizi[11];
    nizi[28] = nizi[21];
    nizi[29] = nizi[27];
    nizi[30] = nizi[7];
    nizi[31] = nizi[13];
    nizi[32] = nizi[3];
    nizi[33] = nizi[2];
    nizi[34] = nizi[23];
    izdelaj(nizi, 35, "gI0UVNz0T8I4k34U7G3dkd8VEKkwzXdeG9xdaX1X1ykAzexAD_yNDcdtYxVLbgj021_q6P5pm82500EMb65gNQ8FnYSwz4Z");
    nizi[36] = nizi[11];
    izdelaj(nizi, 37, "_n7I_CkuGmjyN6oRfPCIWx8fEVGhcb0s64AvQ2p1tRo2n5sWVFno5Bz8zMBQGQL1t2POw82OXZQfBmJbBfqUofgx");
    nizi[38] = nizi[25];
    nizi[39] = nizi[0];
    nizi[40] = nizi[33];
    nizi[41] = nizi[3];
    nizi[42] = nizi[2];
    nizi[43] = nizi[31];
    nizi[44] = nizi[1];
    nizi[45] = nizi[41];
    nizi[46] = nizi[39];
    nizi[47] = nizi[36];
    nizi[48] = nizi[24];
    nizi[49] = nizi[27];
    nizi[50] = nizi[43];
    nizi[51] = nizi[26];
    nizi[52] = nizi[45];
    nizi[53] = nizi[25];
    nizi[54] = nizi[2];
    nizi[55] = nizi[42];
    izdelaj(nizi, 56, "wwsLji2G2qtAnXOguazd");
    nizi[57] = nizi[32];
    nizi[58] = nizi[50];
    izdelaj(nizi, 59, "plXBoEbnYUCBcQy74FP5LjvBPZxDyYZmUBVhhXxRkgJM0DUf25X2rC4vHElYh0ECRV7lnEXnQbvCjJaS88dcc");
    nizi[60] = nizi[53];
    nizi[61] = nizi[25];
    nizi[62] = nizi[3];
    nizi[63] = nizi[1];
    izdelaj(nizi, 64, "VRF5");
    izdelaj(nizi, 65, "Fug0cPkUI5frsguuezxzL3leRcSe_E2l8jDedaKZiMWLUqkC3QgajM_VNU6DWfZMBCXaJFvxtPOM");
    izdelaj(nizi, 66, "lP0TZjy09yt_vSVHdVDu9vh6SfODsXT6UpUPQ82PJeyabZ3ODrfLFrD");
    nizi[67] = nizi[30];
    nizi[68] = nizi[20];
    nizi[69] = nizi[48];
    nizi[70] = nizi[29];
    nizi[71] = nizi[33];
    nizi[72] = nizi[38];
    izdelaj(nizi, 73, "I3LGitZtfBWRFxdBsFOhfTFwA07ePCX42WATP6oyGt6M_Jt3lL8t6WOdjlw3BKPfptrk8xAOYaAoo");
    nizi[74] = nizi[7];
    nizi[75] = nizi[14];
    izdelaj(nizi, 76, "31noBYgF40nj5JhYtxd6_ThC72pwgdFAITjKOrmbxqLtXDEv");
    nizi[77] = nizi[73];
    nizi[78] = nizi[65];
    nizi[79] = nizi[41];
    izdelaj(nizi, 80, "auKjkQ9RN4L9ln7kIeIIMQPHZfz3uevY0DfC3CzbIfELH9ZtA68m3whmkf9DJOVrQKDk1BlasSV_sETKZ8D22Cpm17AXHinx");
    nizi[81] = nizi[32];
    nizi[82] = nizi[44];
    nizi[83] = nizi[39];
    nizi[84] = nizi[29];
    nizi[85] = nizi[73];
    nizi[86] = nizi[8];
    nizi[87] = nizi[65];
    nizi[88] = nizi[11];
    nizi[89] = nizi[80];
    izdelaj(nizi, 90, "ZJXPCPYLVpclIVdsXm5YPrDOIsRpyNuS8AvG34tAzVEj3PwMMb3CH");
    izdelaj(nizi, 91, "hH0Z0BLjwcXMaSnqFpskx_r4JsnMNBdFAWW162Cc7NDSqXj9M62AMn0oCvPbravvMUHM");
    nizi[92] = nizi[10];
    izdelaj(nizi, 93, "JrcJ6qtyjSAqMpYWogTJq2vDyou5G5bvrFnOnDg_iO4yoB9");
    nizi[94] = nizi[61];
    nizi[95] = nizi[82];
    izdelaj(nizi, 96, "TT5ZlnpH37UjPS7us");
    izdelaj(nizi, 97, "MEnp1Rsip4v4LpWqqv3uTDL0fXFiJpXMzaKUwX0pJVuYA36E_pVP58kSkM7RJhgMrYJvJTdqjtwEpkurdaPNjpoygo");
    nizi[98] = nizi[42];
    nizi[99] = nizi[49];
    nizi[100] = nizi[6];
    izdelaj(nizi, 101, "jynLWBk7StqP60lh6VH6yU2itpoWiZtTo8h");
    izdelaj(nizi, 102, "6");
    nizi[103] = nizi[76];
    izdelaj(nizi, 104, "jqq8UFrIckWSFRG947JXgEVKS8CXwQUms5");
    nizi[105] = nizi[49];
    nizi[106] = nizi[53];
    izdelaj(nizi, 107, "0IHP2DjiyR9_16qP9V5YlnhvSA9g0Jbkz3imcaikJkDXwM8bNmB_c3jppaz7cDH2lkITQsjer7KAF6Qvi4q_zNkK2tkQ_2oC");
    nizi[108] = nizi[45];
    izdelaj(nizi, 109, "JYtyvWgYkVZ5nquZF3oNjKRJfS24VBgqCCh0aYW");
    izdelaj(nizi, 110, "KgQl4NGtoZO8QQo4O2GPNpwjVyv3");
    nizi[111] = nizi[103];
    nizi[112] = nizi[29];
    nizi[113] = nizi[102];
    nizi[114] = nizi[97];
    nizi[115] = nizi[4];
    izdelaj(nizi, 116, "MY3pTj3oKBTQL994dg22khsyy7PHWWLCi");
    nizi[117] = nizi[16];
    izdelaj(nizi, 118, "P6LoT4Ia9Ij75gv7A8q3H6iYuasAlDPQrfGksdFjIixVWvYBsjL4EFheZAdDiWe16SDrzorZNUO9Aoyj7eCw");
    izdelaj(nizi, 119, "BP8");
    nizi[120] = nizi[98];
    nizi[121] = nizi[37];
    nizi[122] = nizi[104];
    nizi[123] = nizi[6];
    nizi[124] = nizi[71];
    nizi[125] = nizi[67];
    nizi[126] = nizi[38];
    nizi[127] = nizi[103];
    nizi[128] = nizi[111];
    nizi[129] = nizi[61];
    nizi[130] = nizi[17];
    nizi[131] = nizi[10];
    nizi[132] = nizi[17];
    nizi[133] = nizi[116];
    nizi[134] = nizi[118];
    nizi[135] = nizi[104];
    nizi[136] = nizi[44];
    nizi[137] = nizi[122];
    nizi[138] = nizi[135];
    nizi[139] = nizi[28];
    nizi[140] = nizi[88];
    nizi[141] = nizi[123];

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
