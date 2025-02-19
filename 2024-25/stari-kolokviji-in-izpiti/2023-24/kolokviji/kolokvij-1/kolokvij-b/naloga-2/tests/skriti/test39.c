
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
    int n = 101;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "OIqdNCLnCKS9kw5bhtyMUCTao7Gf3VilbqdapvI33JJ7He6J8f4U8o4EJJY9Uupx0_2");
    nizi[1] = nizi[0];
    nizi[2] = nizi[0];
    nizi[3] = nizi[2];
    izdelaj(nizi, 4, "yy5OSlbUx4r_KUUbUO3MaXdn7vrzj3Dz");
    izdelaj(nizi, 5, "mfxDi5RR7EH9iuDmYvoIzqAOFPCs");
    izdelaj(nizi, 6, "qtK3BBFZR5lxmw5CPHKhxYE7bEz7blzyVFsWKSQyGziqbpgOajXaQNy5Xy2");
    izdelaj(nizi, 7, "uST27Qwegu3bkckGaV1gSfyLWh6Gj");
    izdelaj(nizi, 8, "HwC5JBm2PB2kLA5_HENno");
    izdelaj(nizi, 9, "oVz5r9Wxs0NYoL09IRsgJ3VcsAOxm2ithW");
    izdelaj(nizi, 10, "2Z8ZPoddvvxRzNVMo0cPerqDjOU72bZQydV2tspAgHpbCyyedrhV3nxaYKaurDNNWriechSd8XKuqZCMyYNcM2u");
    nizi[11] = nizi[10];
    izdelaj(nizi, 12, "hrAeejocoPnCAqvL5t3H75U_CDW0EtTOeGCbzpixMJbxaYep1zxS0fhzGAQQukdHz0");
    izdelaj(nizi, 13, "w5_psKUhtDweJE63zbVxfIX9HGMP163GdKnz");
    izdelaj(nizi, 14, "z7AvkUNNIN");
    izdelaj(nizi, 15, "QLIMBGeExtfDkVQYF7tWtmoX6C5p74RpbzMHv9tb5FSas7oEzJnHoQVVk7GhUCQdiig4o0XpBj9eKSYBXBdTtUQVl");
    izdelaj(nizi, 16, "ezMN8UgeppZ1ZEo8nv4zvp");
    izdelaj(nizi, 17, "fOJiW");
    izdelaj(nizi, 18, "CUJNG6YuCS4uFBsCvkPrLY_cnS0qIDWzNuupQsWf2TJhTJc1BYxCJ6VP5x5hQKB6CbhJwBvkiYPnKu8XdkMrvS");
    nizi[19] = nizi[3];
    izdelaj(nizi, 20, "eTaJV7UmYXdICwDhepkvJywUf1cLoz8wcjyGcwbHAwhtUewnj5");
    izdelaj(nizi, 21, "KroLPShDRlbn4NV2g42AIfhcNSxihSDal3CBS2kIr");
    izdelaj(nizi, 22, "hDMzmBmSWVKw6QB4VyNDqCMPZohD5GUPXYDdxRY3EisyIzZW85");
    izdelaj(nizi, 23, "nqidz87rj5Y8L_hy0YnVouDH7AJveAdmkz7T8fTbiiCOFHbMHhyJzbymxCn85XqURf84Dyy");
    nizi[24] = nizi[18];
    izdelaj(nizi, 25, "JN7vYWtW9xLFAY_WUrDH_DUC3zKEHNUwUI6YX_");
    nizi[26] = nizi[2];
    izdelaj(nizi, 27, "hp7BoubinLdGB4tT8C8T9n88YOqqQqzcf0Qftsfbhv7D85T0vX5E_T6zsFB8aTGGSjTQ_M2DLxRhGnAcIsm");
    nizi[28] = nizi[25];
    izdelaj(nizi, 29, "0rUMo7so7ZcNt6DMnHCM7bo70bIcbRPv15RAv9zCsSLN5CWVkwhVC9fHxhUzZK1K9Ke5kvWyrhzpk");
    izdelaj(nizi, 30, "elGmJdDus5nE7czqFxe0lClYfrGziV2kJxM2v3DVMlowM3KT3tc");
    izdelaj(nizi, 31, "tU220i7ogFOw");
    izdelaj(nizi, 32, "mDCaNxOrBBI");
    izdelaj(nizi, 33, "EOixdiqt39J9ypapM5EapP6GMFSHAvgCJAPeaWVR");
    izdelaj(nizi, 34, "cC9I_7jsFjV7OZ9xgHTa0p4rtNV45CrIDEVN6N9TkLe5p8Z1ZbxuvrE6IM7Ez3xI8ubimBBhYxAcAlbc6ztETU1togmoW5");
    nizi[35] = nizi[5];
    izdelaj(nizi, 36, "03pE7R9rCvSGPvzI6rCNgggVsoAbk1jZe8xyYSFqGdqHnFW9v1WncfGzWmHQzgQ6FabQsh3tUz9bMEHjPh");
    izdelaj(nizi, 37, "kUzw");
    izdelaj(nizi, 38, "oKoItWvOJ");
    izdelaj(nizi, 39, "AR4LUTx7H03eUnCxmKn6mxhluG7_ql_MFv_izU5qOkO0KR7C3a2BVA5bi1lSRCt2YP4");
    izdelaj(nizi, 40, "kKo1VyAc52IDNujhJjLmbHbceAZBNcmnd4CYhQAV");
    izdelaj(nizi, 41, "SkEpW6rN_cLmQMzg_yONHm21yd3Drd3EZosIqWpoVr");
    izdelaj(nizi, 42, "y6GJ8VQQcXlXuH5v");
    nizi[43] = nizi[36];
    nizi[44] = nizi[26];
    izdelaj(nizi, 45, "pCm87Vx6Fiym0vOoe06vRmTQKpJkm");
    izdelaj(nizi, 46, "N_mzCKwoWO19RkyckjBEI6gW80HYrjuJPfsiw7aHH5tsQBZcwMu59RN4wkCcJ");
    nizi[47] = nizi[4];
    izdelaj(nizi, 48, "qKvqek1DucO");
    izdelaj(nizi, 49, "lUfFGSODXgG4h0prGP0Mf6pU");
    izdelaj(nizi, 50, "5A_wC7ohEWP");
    nizi[51] = nizi[13];
    nizi[52] = nizi[11];
    izdelaj(nizi, 53, "Xqd7P9oFAKYd");
    nizi[54] = nizi[15];
    izdelaj(nizi, 55, "MqWtrk0XMDs5rPi_uoujIImeh37MjWEdkAbZeTQLXAC8I1lBuWEln05zE6cgdOzkpYhBiVj");
    izdelaj(nizi, 56, "kb3ThU");
    nizi[57] = nizi[20];
    izdelaj(nizi, 58, "yxWCBl2TIOv9IAilS2GMTs6OAVHbCVc_vIMDcOK37etbm8fVakEjtVKezlnja55Z854XHg");
    nizi[59] = nizi[50];
    izdelaj(nizi, 60, "LjTyzkzTJS579GrVUEqaNU97pPSG4YgvhE76yfyiUu8ZovmvvlDV5VWdBwgA8nw0Csur4WubWN1ymmrghQA");
    nizi[61] = nizi[4];
    izdelaj(nizi, 62, "r");
    nizi[63] = nizi[15];
    izdelaj(nizi, 64, "k303_Io1NhMfNX1GNm4ck_HRLkQ");
    izdelaj(nizi, 65, "xof");
    izdelaj(nizi, 66, "GK7_zvI8Mu4DT");
    nizi[67] = nizi[22];
    nizi[68] = nizi[27];
    izdelaj(nizi, 69, "jqGtwev9SgGvqx9tQ5UsGIg1k7_C3ODg2z0IaR9k6M0xj8uRQH9Gc6gk1kcpOp1f5q8eo4LAizGbXVmg");
    izdelaj(nizi, 70, "ZE2TXS8msggLHNCEJPMNNO0sBubD9GUhZUXpE");
    izdelaj(nizi, 71, "loO6HKTk62712zf1dvSnDnPZisipxGMXovp06lt2gZJrcnx4_4d5an37pGlmRyxNP57dKwBs44");
    izdelaj(nizi, 72, "RG7Vtk1arGU");
    nizi[73] = nizi[66];
    izdelaj(nizi, 74, "quaqpgJbvcB2EqHwviKuy0dDFA8dBtE9HoS7FXSRI_C9Mv");
    izdelaj(nizi, 75, "lP0TZjy09yt_vSVHdVDu9vh6SfODsXT6UpUPQ82PJeyabZ3ODrfLFrD");
    izdelaj(nizi, 76, "0");
    nizi[77] = nizi[42];
    nizi[78] = nizi[68];
    izdelaj(nizi, 79, "N9lsOuSh1LzdIec36x2ypkkE5i6QbCxHGTk9hCXPAMvXL6m6Ga");
    nizi[80] = nizi[34];
    izdelaj(nizi, 81, "kjJiJyIhzF_qDpEu8mftKkzm_gKxODPt0uFe1d1ta");
    nizi[82] = nizi[44];
    izdelaj(nizi, 83, "VEA1hczjz1s1n4WNqGZ");
    izdelaj(nizi, 84, "ddfiUdWi2O4aOZueV0Ql06821zl05mHW1OTbHNSDgv6kvQ1bOary9_rvQOABc0kbzMBDXfJ1D_NtJmSCc");
    nizi[85] = nizi[63];
    izdelaj(nizi, 86, "iGdAJahCKr1h0zQw28n__Bha6PVvGKTQTH3");
    izdelaj(nizi, 87, "jmO5oX");
    nizi[88] = nizi[48];
    izdelaj(nizi, 89, "lWMUqZOST2Zv2zFUDbi0PcPGpEcVnbtGzT1flXnBvnUrOA8amcQI8va989PTb7cueV72hu1f");
    izdelaj(nizi, 90, "Zt6ZSuWQP2qV4ilDUEW8H9iO_TUAHTBGcMaePpEy7SOGnMEXrCu1pjgsmlngUI3I0oq3ZLJVAEE9gM");
    izdelaj(nizi, 91, "GbRr_tZRAcjl7gpQuowtKkiJft0eQrLJv3");
    izdelaj(nizi, 92, "Wj3BpBOIBWkJ0fC_Kr1RJGZ6ei2PH6r6ylNs6lyBtmv5wXQwcQQw6B8FAMi");
    nizi[93] = nizi[21];
    izdelaj(nizi, 94, "fL3K_Lgr3QrSWAb3YASyE162cadIZfOzdzWICGrmbw2N2");
    izdelaj(nizi, 95, "IiTSW_PBs51wV8cUjTZ_JLiBts7HiX6ftmxJn9QfdXvaaY4QLFyp1mZm7");
    nizi[96] = nizi[35];
    nizi[97] = nizi[44];
    nizi[98] = nizi[30];
    nizi[99] = nizi[3];
    nizi[100] = nizi[34];

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
