
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
    int n = 128;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "ZhtHiNz2DOUxBGTRiOCXE8BGyKAAbRjqV9wksw8ENUjdtDwvJcg0AuKJzf89bCMmnQhW1KUBoRQ");
    izdelaj(nizi, 1, "kNosLkXSa2JzPq_wb5lGhDZSMX7arYsQ1VrphOZTEzFTZhKpu6Yc");
    izdelaj(nizi, 2, "jkdmbt1HZEj7r3lvQWvcHpBWEOecuwo8CSoodlZLDPPAK3qeV61WvAIB6gzDD");
    izdelaj(nizi, 3, "mKYwKTTQPC9GEIOc8KEqhkmVX_l8hd6mB7kdozwh");
    izdelaj(nizi, 4, "3VXZexz2rUaymK76Nt2buE_l9DYw7VIwflbuVIzcOdsv8XJQ");
    izdelaj(nizi, 5, "Oix8fZtXYzH");
    izdelaj(nizi, 6, "CYo5VPuwiQhsmshZ046TKKLovOj9OpKWEtL");
    izdelaj(nizi, 7, "kNosLkXSa2JzPq_wb5lGhDZSMX7arYsQ1VrphOZTEzFTZhKpu6Yc");
    izdelaj(nizi, 8, "eAA9qvEYWkXaC9Z5n6jZoiyL3rDVldk4BLuTye9qBEVoRG");
    izdelaj(nizi, 9, "Y2O");
    izdelaj(nizi, 10, "0ibMJh0D9HPqTV");
    izdelaj(nizi, 11, "YoPwmZZVmZ8oJWxppCwpYoQVL0wu8qqiwinLTi8z_Dne3oKYpr2D");
    izdelaj(nizi, 12, "_ZZAUYIyF12gwY4L1G6xAAnv5S6rpPKeSizTEoa3LdEfpwdw579Og0mUzIx13vgAL1NRmSRoGE4URHcPLvY0uyuOB6sZZO9zfnE9");
    izdelaj(nizi, 13, "mKYwKTTQPC9GEIOc8KEqhkmVX_l8hd6mB7kdozwh");
    izdelaj(nizi, 14, "bTpl6Tjq9jpLw");
    izdelaj(nizi, 15, "t9XB7OqydysMT8Q4_QCr6jqq5HcyZo697Lyy8WusqRZcoUK1hh");
    izdelaj(nizi, 16, "t9XB7OqydysMT8Q4_QCr6jqq5HcyZo697Lyy8WusqRZcoUK1hh");
    izdelaj(nizi, 17, "ZhtHiNz2DOUxBGTRiOCXE8BGyKAAbRjqV9wksw8ENUjdtDwvJcg0AuKJzf89bCMmnQhW1KUBoRQ");
    izdelaj(nizi, 18, "_pTnfmQwKpfYLKQ_aitXvVJ5w17kQz5bV9Si8MJdHQAoAp8ewFyOBeAXlLOa7JuuTbxqR_dYiESsWyyzg3JdvC8ln09");
    izdelaj(nizi, 19, "aQ6DDLwBVn9W1RJMxOY76Dd3XHnGaRpjusDWj97tQ9mJRcp5");
    izdelaj(nizi, 20, "mwXXUw5xZaUwAUmUiOIKTOEW7Ukje1RBlGK_TVg4p0c9N");
    izdelaj(nizi, 21, "CEUy_d36Mfr5wcI8s0sghI7_SUAv");
    izdelaj(nizi, 22, "mwXXUw5xZaUwAUmUiOIKTOEW7Ukje1RBlGK_TVg4p0c9N");
    izdelaj(nizi, 23, "r7yevvIwzf88tQxIbKeqNW2s6yM9zLqDlXyG2w1maFeOSqBeNiMxLeAlYHe57os8O3EjF9uO");
    izdelaj(nizi, 24, "91nlefMaAm560bUdMALun16fmUXLU8Q7oyNH1V9vfaXCQtBw2G");
    izdelaj(nizi, 25, "vkTyXqsXZX7eIoCImRlYsZiDq8_BfOmfEyFKCOwRzbXGKnQZCy74T1GKG3JBE5sfvFX_g");
    izdelaj(nizi, 26, "lN1Ygb9g3q");
    izdelaj(nizi, 27, "uhWj9nW0Xjh0CMI4eyaDUtlnk46vFpb10jmFXMS1iPORB4yqJPt6pALDZMS07k");
    izdelaj(nizi, 28, "r7yevvIwzf88tQxIbKeqNW2s6yM9zLqDlXyG2w1maFeOSqBeNiMxLeAlYHe57os8O3EjF9uO");
    izdelaj(nizi, 29, "ZhtHiNz2DOUxBGTRiOCXE8BGyKAAbRjqV9wksw8ENUjdtDwvJcg0AuKJzf89bCMmnQhW1KUBoRQ");
    izdelaj(nizi, 30, "TZeENc_1rHbw_5yC");
    izdelaj(nizi, 31, "G3ZP5_d23EcTJRPbqBH3sqb53YPuCRWJHiyT9u03j0IEKOY3P");
    izdelaj(nizi, 32, "CEUy_d36Mfr5wcI8s0sghI7_SUAv");
    izdelaj(nizi, 33, "Z5pu_LuotITWm7NW600Fb4dFKkr99yT03_w5egeCpB4JZpXCeBlQA6f5MRiupjF7");
    izdelaj(nizi, 34, "o3w4CHdjKnVIqouzxRWPbMzXkzfNW7ebzyUD8uPR4ss7_r3tNuBWhL3EsY2XZ9Bt8NNjBCa7BnuJuLCy5SFcAMXCC4oAv");
    izdelaj(nizi, 35, "mKYwKTTQPC9GEIOc8KEqhkmVX_l8hd6mB7kdozwh");
    izdelaj(nizi, 36, "fQhpPjRZAozedvxp9_9J44Ca_AVREaFfjF");
    izdelaj(nizi, 37, "91nlefMaAm560bUdMALun16fmUXLU8Q7oyNH1V9vfaXCQtBw2G");
    izdelaj(nizi, 38, "l834ofTEBzxk_d");
    izdelaj(nizi, 39, "gvKlRaJGqszkDCZet");
    izdelaj(nizi, 40, "MLkLFYmsJAI9DbsEQmkzdYBNIE2wHzNb_kT2aOHtO8ufTs");
    izdelaj(nizi, 41, "rzaZXNavTnQq9p0PlyQSrzGGgiRbZ9MgqN");
    izdelaj(nizi, 42, "vkTyXqsXZX7eIoCImRlYsZiDq8_BfOmfEyFKCOwRzbXGKnQZCy74T1GKG3JBE5sfvFX_g");
    izdelaj(nizi, 43, "kNosLkXSa2JzPq_wb5lGhDZSMX7arYsQ1VrphOZTEzFTZhKpu6Yc");
    izdelaj(nizi, 44, "1wblljq2yDbB5khhVNHhl3");
    izdelaj(nizi, 45, "07PzQoaFg9Mvi_x");
    izdelaj(nizi, 46, "uun5uYR2PzxcHEe11neogt");
    izdelaj(nizi, 47, "kA9mWdSFQIHY1OtuLnHDGToI34aQQVUS58SlLNS5OMy5wlrBrpoRFFElFkS3n1U");
    izdelaj(nizi, 48, "w6EZT1EXmi8PqcE1rbpjrnxxebtrbm8whbJ1B2RdAGakEi1t_iGJItx");
    izdelaj(nizi, 49, "OnQFL8yovy6U2NO0Hr9yRdAp_PUa6pe5rnxF");
    izdelaj(nizi, 50, "t9XB7OqydysMT8Q4_QCr6jqq5HcyZo697Lyy8WusqRZcoUK1hh");
    izdelaj(nizi, 51, "EEmaPWUII_cLWNTrtipC4sCM1yMHaSnnvCNmvEd5Hwv");
    izdelaj(nizi, 52, "0qPum6alX_zGey955HS6trlRuoK3DQjCJA8dakeHh4lhhyO5brpEEIB8oAtMSnTgfIIef6kHG");
    izdelaj(nizi, 53, "e6eKxCkmaCT_zW8LFbTWLpa0dpZ6IJaWiLkrIEJGAoc2xc6uzkmsnDTCZoYPF4S8MHLlqoeARhH0knpf4dax");
    izdelaj(nizi, 54, "qJ7lJyJtQGLHt_5KAghDNtqKd45LB17SUGzKp2rssfs7G5mLl");
    izdelaj(nizi, 55, "GHQKhOAV9Wg_Co38rK4lCHGjhVuDZxlpEw0xw3bh0uRUMetB9Cuo4QoOw8ntz4UTRGqYW56dczap1T6xUWzbezHObtMgBezgvL");
    izdelaj(nizi, 56, "WsvXvmGytTAV6hgFXKok0zgD_r28112Sg_0shyXJV");
    izdelaj(nizi, 57, "OJSytIwDV6K67ZKh3YqV95cqbzkuZ7Yi9jJtqHLVW2d3JfwBS6Wo6g4rtxLULwjg_SppB2yt_dDMECcuJtqbYjhXzXrBT");
    izdelaj(nizi, 58, "mztfoXT2n64nuuKwH5A2TqZWbhlxrSLFugOGC1DGuNRo2kSwqGbgYGNfoPrGYhOAXH0NyHigRsP");
    izdelaj(nizi, 59, "_pTnfmQwKpfYLKQ_aitXvVJ5w17kQz5bV9Si8MJdHQAoAp8ewFyOBeAXlLOa7JuuTbxqR_dYiESsWyyzg3JdvC8ln09");
    izdelaj(nizi, 60, "_pTnfmQwKpfYLKQ_aitXvVJ5w17kQz5bV9Si8MJdHQAoAp8ewFyOBeAXlLOa7JuuTbxqR_dYiESsWyyzg3JdvC8ln09");
    izdelaj(nizi, 61, "YihOyqq9G0rkzXlWaVLlloD21KralRJL0sFLl13tVPf2Uw0");
    izdelaj(nizi, 62, "r7yevvIwzf88tQxIbKeqNW2s6yM9zLqDlXyG2w1maFeOSqBeNiMxLeAlYHe57os8O3EjF9uO");
    izdelaj(nizi, 63, "ZhtHiNz2DOUxBGTRiOCXE8BGyKAAbRjqV9wksw8ENUjdtDwvJcg0AuKJzf89bCMmnQhW1KUBoRQ");
    izdelaj(nizi, 64, "hOAH3gmAYvVU7CujDYK7c3IbGN0LUzjlmzOtS2b4JSBm8oAAFfGjekn33b1WyAZoDvLQPlSxrSK");
    izdelaj(nizi, 65, "_FAm2j_lYN3AZhypL01UV");
    izdelaj(nizi, 66, "QVeBOkzAhy");
    izdelaj(nizi, 67, "GHQKhOAV9Wg_Co38rK4lCHGjhVuDZxlpEw0xw3bh0uRUMetB9Cuo4QoOw8ntz4UTRGqYW56dczap1T6xUWzbezHObtMgBezgvL");
    izdelaj(nizi, 68, "fNga");
    izdelaj(nizi, 69, "QfAlGA7gT6gE8D8jPHAgX4uasjrFWiQzujIKWUEVLwZ2dM8m7r80RxDptD0eipPmYuW7I_2esTcIpErMPERWLD6agyKBnb_7");
    izdelaj(nizi, 70, "3VXZexz2rUaymK76Nt2buE_l9DYw7VIwflbuVIzcOdsv8XJQ");
    izdelaj(nizi, 71, "HgTTB1F0ztFjdImmHAfuqErY_Ll8esv1mdyJ76bsNjvfY");
    izdelaj(nizi, 72, "uf__eYOZqazTleWu6izMx3AlM4o");
    izdelaj(nizi, 73, "FRtZLA");
    izdelaj(nizi, 74, "Md4b6q56U4QcKXna3H5n5w5FDu_dd68ZW0KfBTyhNMutgvZBpqK2Wds");
    izdelaj(nizi, 75, "0wDAkao3tceVa8j9XCGjeTpW5Ys9kbCu7Dg2fyONbh5EAtZmCvfLNGB");
    izdelaj(nizi, 76, "R7JsQPAOqJWihLdrUDfsr76XYM5kjYlsC8vKea2E0x5PLVKhFRdylbjSC1JXJkbFNa33qvm5sa9W1pICjBdlqH2");
    izdelaj(nizi, 77, "WsvXvmGytTAV6hgFXKok0zgD_r28112Sg_0shyXJV");
    izdelaj(nizi, 78, "Ysyalv2SQQwhmaCRtjrX4sk0pRw58Dypc");
    izdelaj(nizi, 79, "sPFlX2zYz1VlAIK5JhBSimawkH8qYtSHfp8y9WwA6N9znm6t2ylAm1Wb84kTHDfJ96iPW9xM5TDZKKPtJ9X_ADBop9");
    izdelaj(nizi, 80, "JaMqWaVOSUrvUxb8XbAiAkCGvQdXL_a5Boe5HgAtBhIJLeRcugy6ZSJQPhVN");
    izdelaj(nizi, 81, "n");
    izdelaj(nizi, 82, "MLkLFYmsJAI9DbsEQmkzdYBNIE2wHzNb_kT2aOHtO8ufTs");
    izdelaj(nizi, 83, "UI5OM3XAl1EKm6Yzc7IB1Ho5fgZwQ9OaKfhJ");
    izdelaj(nizi, 84, "vkTyXqsXZX7eIoCImRlYsZiDq8_BfOmfEyFKCOwRzbXGKnQZCy74T1GKG3JBE5sfvFX_g");
    izdelaj(nizi, 85, "hm3FoIXaKraHJ9GbkO74");
    izdelaj(nizi, 86, "qyM3an4FK8e1dn54UmVWZTLrC4Nnm");
    izdelaj(nizi, 87, "az");
    izdelaj(nizi, 88, "0qPum6alX_zGey955HS6trlRuoK3DQjCJA8dakeHh4lhhyO5brpEEIB8oAtMSnTgfIIef6kHG");
    izdelaj(nizi, 89, "UAzkF14U4xXdK2QtsOww5KyMiy6fRaVKbi_hnPTHqaucGzDboXn5L7853oL5lwGY8WUk7XYLX07");
    izdelaj(nizi, 90, "UA8B4zf");
    izdelaj(nizi, 91, "e6eKxCkmaCT_zW8LFbTWLpa0dpZ6IJaWiLkrIEJGAoc2xc6uzkmsnDTCZoYPF4S8MHLlqoeARhH0knpf4dax");
    izdelaj(nizi, 92, "Azu");
    izdelaj(nizi, 93, "WI1Ra5ySQ0FTOh3fwna4ELhtq291UzlypvnkL8eabAvz");
    izdelaj(nizi, 94, "cLdgQEiIeYpqPvYSkeKtRAfsqQ0Ki_j1RxU2g8aDonda3cl6c0ItwRWhYMWrg53XuElF39");
    izdelaj(nizi, 95, "aQ6DDLwBVn9W1RJMxOY76Dd3XHnGaRpjusDWj97tQ9mJRcp5");
    izdelaj(nizi, 96, "BRkrqg2w5ieIfjTZlWzuDgf_jmEiz3aIFcVNSlCUGW7avPUG_aBGh1NlB_8BHQRLl6eP7UWcF3AGOKNMEl");
    izdelaj(nizi, 97, "q3TGIxUzuHlg_LPgrgb05vyjquudruakDYCWz0jn4");
    izdelaj(nizi, 98, "LxywCLO3PtGVyFYZ2x5NRO25m");
    izdelaj(nizi, 99, "nmtGZzI5fE7hsAoiZatq2qOoC_vVMt0sa8_XIxcVXoHD4DfWglN9wJR63WutONd1dZYk");
    izdelaj(nizi, 100, "R1YDJwE4DZgX2L5BTpvoBuq6nNbnHcH_oa1hA_lYqrrg");
    izdelaj(nizi, 101, "rzIPz_SSjd71MHxCM9Ey2uxHhUCZeEyvB3vdOnSKWp1khb4wWyk4zw2l0QbHoE");
    izdelaj(nizi, 102, "_FAm2j_lYN3AZhypL01UV");
    izdelaj(nizi, 103, "gseDFpc5zmmZ9ZlXryQvJ6st4WBvJYQYMjh3DA");
    izdelaj(nizi, 104, "_FAm2j_lYN3AZhypL01UV");
    izdelaj(nizi, 105, "mKYwKTTQPC9GEIOc8KEqhkmVX_l8hd6mB7kdozwh");
    izdelaj(nizi, 106, "hZko0EK5FmdnMBlTPllj98BwU");
    izdelaj(nizi, 107, "9ZuFZKFecoscqWw6r02YLHlc68XUTQXNXgFopoxfSwdchvbIVMa7lVxVWwi4CgkhZt8GuDXMZyaqWKvl2Qw9X2sEkVXdi");
    izdelaj(nizi, 108, "UI5OM3XAl1EKm6Yzc7IB1Ho5fgZwQ9OaKfhJ");
    izdelaj(nizi, 109, "r7yevvIwzf88tQxIbKeqNW2s6yM9zLqDlXyG2w1maFeOSqBeNiMxLeAlYHe57os8O3EjF9uO");
    izdelaj(nizi, 110, "t1JW7J6RfUj3ibDWILHsSM6b2cpGci0hHe456m_kLPFkrFHNeS3H");
    izdelaj(nizi, 111, "XcbkaxwoLWneWmZO6NNRfkn1UZT_RGysrDplevSmSALeh9L0thA4oVId");
    izdelaj(nizi, 112, "jdQcQbwn5xM1PtoWu58P5Yb7ICKNIcGWdulvu6VeXEw");
    izdelaj(nizi, 113, "OUJOcaJwLGgrd3vlhmcXHwAfDOk0Rz4KzI9ls7vvX0Xgfp1Ro1EOmSPG1Uxe37bGg2Ywi");
    izdelaj(nizi, 114, "mKYwKTTQPC9GEIOc8KEqhkmVX_l8hd6mB7kdozwh");
    izdelaj(nizi, 115, "sDsZlOdwI8Dsco0E8ta2VKPIT9W9rJ7525vRVoB9ezdRdF02G8so6jSpZeMbVCmwovJKz");
    izdelaj(nizi, 116, "N8RBqeZn0");
    izdelaj(nizi, 117, "eAA9qvEYWkXaC9Z5n6jZoiyL3rDVldk4BLuTye9qBEVoRG");
    izdelaj(nizi, 118, "eENfKDJWmZ9THV3y_nWQzqJnVUOQsmwIIGeBxWITwgptH3cx0jaBhYOd4YY_cCQyvncHvDiXBJjTPFs0Q1I_1V3VAQkEj");
    izdelaj(nizi, 119, "ZhtHiNz2DOUxBGTRiOCXE8BGyKAAbRjqV9wksw8ENUjdtDwvJcg0AuKJzf89bCMmnQhW1KUBoRQ");
    izdelaj(nizi, 120, "Lx191c3RS4yAVVdLsPLN7EyCkUI1XVyS6UY46rrd");
    izdelaj(nizi, 121, "o3w4CHdjKnVIqouzxRWPbMzXkzfNW7ebzyUD8uPR4ss7_r3tNuBWhL3EsY2XZ9Bt8NNjBCa7BnuJuLCy5SFcAMXCC4oAv");
    izdelaj(nizi, 122, "N8RBqeZn0");
    izdelaj(nizi, 123, "cTj8KNEVAm_U7pT_gXUvaxAgFIH87WHmqAy2JhoqqcMYhcd2JbBfx20LT9paLPALTcFV_qR2x3hBVA6dIK_VxNxPXXk9uIxhOXC");
    izdelaj(nizi, 124, "N8RBqeZn0");
    izdelaj(nizi, 125, "l_KXFeMM29O3WoyQthEa");
    izdelaj(nizi, 126, "Bn3fpF6_gTWRDk13TlrOXh0SgHJ5fsAEF_aDQPaqwth5Vq1lUJvkL");
    izdelaj(nizi, 127, "aQ6DDLwBVn9W1RJMxOY76Dd3XHnGaRpjusDWj97tQ9mJRcp5");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
