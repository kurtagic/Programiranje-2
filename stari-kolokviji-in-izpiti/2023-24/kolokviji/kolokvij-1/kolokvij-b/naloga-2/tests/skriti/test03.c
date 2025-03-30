
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
    int n = 113;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "1aqW4dl2R8dfFWqnqnypdq9Wpf4dzFLBZBMqh86xFCECHa5ltsyjdXjJPbSMIT2gAwWlLD");
    izdelaj(nizi, 1, "VnjO2BGMvu7oCvPRoqTvRuTrTohN");
    izdelaj(nizi, 2, "b4AZzFAt_9AdLB6Tj2LZ9X7E_kyZ3Vuo3QJagboVVb8");
    izdelaj(nizi, 3, "Ojtroa5aF_ePkEtj0BNzF8iHV_n2IU3DVX6DSI1r7");
    nizi[4] = nizi[3];
    nizi[5] = nizi[1];
    nizi[6] = nizi[0];
    nizi[7] = nizi[1];
    nizi[8] = nizi[2];
    izdelaj(nizi, 9, "SERmscc0ZP2dSNyJpJUpXmf2t7KixLYPWQIvD9NDhDKEc3T8oRcF0b");
    nizi[10] = nizi[3];
    izdelaj(nizi, 11, "pGKiZbansVFsQ72ifhvFP9Ao8cXckZWTQjh2lCUi1e9lwNAJBn74z5XIP_g0jxZKwUncnhjE2jtdzU8TggsfU_uN17ZCdGQ3");
    nizi[12] = nizi[2];
    izdelaj(nizi, 13, "ODKG3ytIgfbSjOsjLioVN43n35ftvtZt7SovPy6XNGM0f_FfmYLXMh8wJ5RjWET");
    izdelaj(nizi, 14, "KlxFljhJf");
    nizi[15] = nizi[12];
    izdelaj(nizi, 16, "nZBIMmdsSHuALem4Rb0tyDoWBBToX8AVgYTb30xCe");
    izdelaj(nizi, 17, "UpvpOvkUxmov35Nw64fec");
    izdelaj(nizi, 18, "0J2V2IdMQSEnO8HEqxMouGn_mfkID9tg6Qni0io56f6HktAtBx2IXVy6YkeebpMoSh4z2ntQYCg");
    izdelaj(nizi, 19, "cctWCX9H2JPgs4J5AbQDt_gYbconGYnuQnFkMCyXkpDwzvr0V2IDSx5E95HZgGE");
    izdelaj(nizi, 20, "lIRlFMUBk9tgcuXJwl0nNqAoKAAKVjSlNGlBd7rP7tpqu0Uo6bTdxhfjP1WmDERfZGTq3");
    izdelaj(nizi, 21, "r2vsNnn86YnJxZEBzbWjPB9j4g7fr9HarbtJ29CdOno_WZFYv4FUUen58UqS");
    izdelaj(nizi, 22, "lFKjjVG01OJ8o1ps4QyryIUhYp6IXriN5ft7bnNpBP8TwLeHkQY2kDX7HemaV0IZ4P2");
    izdelaj(nizi, 23, "l_CL");
    izdelaj(nizi, 24, "6WzqtvQ7ILrT28M");
    nizi[25] = nizi[18];
    izdelaj(nizi, 26, "kBk6YuMl2lL5HelZqqW1L0vee57gr7g9OV0");
    izdelaj(nizi, 27, "K");
    nizi[28] = nizi[6];
    izdelaj(nizi, 29, "s1");
    izdelaj(nizi, 30, "Da3qufo3MaLQx1_L9oe7XVFh5UGsG9h");
    nizi[31] = nizi[0];
    nizi[32] = nizi[4];
    izdelaj(nizi, 33, "7ixFbU1c5dNgGO8jf6Ffdre6zfdXhXliHtVuzUBOBjEEgY9M4_SBd8EKhauqAX5YmNt_lyE42898KS1pbBCx1Z8JcIc5fk");
    izdelaj(nizi, 34, "9nUU4ENMvrmDywffjmQ8bHsuqNGx");
    izdelaj(nizi, 35, "DQZVemTWtPPyJgb4jtokV8KYs9abcdz38EhtDTKr_l1hDTHIC4T3YV8VMKNbtmBDYMte3odAjeaIP");
    izdelaj(nizi, 36, "aGVMAIYlCIwHBXVbHPSXtbXtOvc4uuwtWGnHtd2AfDcuz9xzt8r3mJt4vOQ");
    izdelaj(nizi, 37, "0BcJE6VP089t3vgGaXOF8Am4hizLAcAtauWlPqUuesjS8UgxdzdF5WM3p8cPBV5eIefwhXB17MmMD1FpPS_U2VZAQOY44_L");
    izdelaj(nizi, 38, "wYTFvvtCpIBesshe4ycLynEs14ztC4A4sqEXMfJHCAWKKGIS7DgmXyG83Zyd9N");
    izdelaj(nizi, 39, "bRvUFY2dpP4uO3GwePluHHa3YvR8FLgHH5XZrwPsz8L8su5pijQ1BP3Bdt6SRlfXIxesm");
    nizi[40] = nizi[30];
    izdelaj(nizi, 41, "3AaaZr4wGsaY8EfOFHrGcAmMiL42cLM9");
    nizi[42] = nizi[38];
    nizi[43] = nizi[31];
    nizi[44] = nizi[26];
    nizi[45] = nizi[13];
    nizi[46] = nizi[45];
    nizi[47] = nizi[23];
    izdelaj(nizi, 48, "Dn_4YU0Dw0hohAW77osTLgrhLXAA5OK_zp6RAZ3AG2SPfG6Y3CQswsu");
    nizi[49] = nizi[0];
    izdelaj(nizi, 50, "nvdU6jlCxFthq");
    izdelaj(nizi, 51, "0RinPEwKTv3OI");
    izdelaj(nizi, 52, "UXtFHlwYUw");
    izdelaj(nizi, 53, "1vB_KmwN");
    izdelaj(nizi, 54, "6");
    nizi[55] = nizi[42];
    nizi[56] = nizi[14];
    izdelaj(nizi, 57, "iGprNU9kb1dGSQSN7H0ka2aqin5Id4TKN7u3fdjmHIS5V5SRrucDqxB_en4C6i3D7fVWqgdw_GKJalA_B1WTZ7jxnPoVT8cz5sK");
    izdelaj(nizi, 58, "4sXTDZ1zvRX4q6V9uonpXfJaBgBZul_vtqFIKUbOPaNek3ns8g");
    izdelaj(nizi, 59, "3ixzCcjYIjLmAN1hb6EwgNwoOwcT3wLofXtg4u4W4xV");
    izdelaj(nizi, 60, "o380Wf7ujq0Gd4xRb");
    izdelaj(nizi, 61, "YDf0AV3CZNcX0l_d4rjw8tM2uKMhHyG5IUBk3NIpMUL9UNItdg6g2p6S0wd1E6kEPj7C");
    nizi[62] = nizi[28];
    nizi[63] = nizi[11];
    nizi[64] = nizi[12];
    izdelaj(nizi, 65, "E8avhpIMWcaF3AKikrSvQA_hDf0lWT1mCdQY4K4V2JyYf9FGiMjEV0tSqRoYnc28NKT3R8");
    izdelaj(nizi, 66, "5nxcRwvSPxMWlLawzm4NDNlhcCtlbA740t60");
    izdelaj(nizi, 67, "hbhjFe0K3ZhvxdwiqO4zn7xDVapxkVOJMqb_w2LNW4yH0WAlyjwpL1oJTqA2bvDUq8NR");
    nizi[68] = nizi[63];
    izdelaj(nizi, 69, "UAn_5_LcjCF34hPqIpDcCRJja_WPEg1HUVpln98JHks1tyCczOg");
    izdelaj(nizi, 70, "B93p9vxMkRF_HAWiiizhUCRl6pA17UtKy8HCim7DsQ0UTvsMnktdiv6O");
    izdelaj(nizi, 71, "VaY5aaFWn9Jm8GFh4qhEJEn447WQZT30ElPm7VNWoAD7b5PzHZHj6uFcwW");
    nizi[72] = nizi[67];
    izdelaj(nizi, 73, "aWoNuF9XrcZ8fLvylf7ZYcjn");
    izdelaj(nizi, 74, "E8s8Qj6pNI4F");
    nizi[75] = nizi[25];
    nizi[76] = nizi[2];
    nizi[77] = nizi[2];
    izdelaj(nizi, 78, "GJgk9Z24nya3wayOO6NxTc9353R1SnRiJEhY");
    izdelaj(nizi, 79, "VbXqhcs9PCCYBoTYp_nkQjei0SmhnO4ya1rU");
    nizi[80] = nizi[19];
    izdelaj(nizi, 81, "1DpmvqiHDypNbxZfpPSQGp8Wv3oOO");
    nizi[82] = nizi[81];
    izdelaj(nizi, 83, "aI");
    izdelaj(nizi, 84, "LFE0jegUsag7KOBbZad_WfJqBntQlH2");
    nizi[85] = nizi[50];
    izdelaj(nizi, 86, "g9tkI0ifqnaNe57ez2KKBjUGmGJ9CJHYySRPT2u8enc4oQ6j4HCTACVZOldubolZuGYul0apeXPtr2Z");
    nizi[87] = nizi[73];
    izdelaj(nizi, 88, "5ydFuDArQTyVbjhfzL0CyD6gTC3WT8HvqVQg57jw2f_TDoDUyni_w2I1McQDjC444");
    izdelaj(nizi, 89, "xqiV6elNh5da");
    izdelaj(nizi, 90, "hbGfMNMHXXFqUFXBTrnKJZXZa_mZwjoq1d5q");
    izdelaj(nizi, 91, "hXM_CjwfdYh4UUUZPPb_Ll7wTc");
    izdelaj(nizi, 92, "k7jgBBTdFcRa74C");
    izdelaj(nizi, 93, "rmlYUlHIIfGsGIu8rKvfeW2IpaUyySQ2Fg02dNAMR4TRw");
    izdelaj(nizi, 94, "jVoz0cE868FKCtNKMRNv9");
    izdelaj(nizi, 95, "Uqa9fL62BFsit8EDwLOa0O7I40VVh1_m_IjMCMyM1EOJC_7AVmhSidvq7D1IHeY2KM4S8Nx4pFVFcvpiwFRDVGhU8_kTMDC1q");
    izdelaj(nizi, 96, "TFL7YGDa");
    nizi[97] = nizi[77];
    nizi[98] = nizi[31];
    izdelaj(nizi, 99, "uXrAS2A56F6SHo_jEqkfnDiaX0PbCwmEETyNgJvPHTk_LVn");
    nizi[100] = nizi[66];
    nizi[101] = nizi[72];
    izdelaj(nizi, 102, "uHL5LY5U_sOqxTpYtsHmmyjLv87qmYpP72x6YJzxTFKjHtQLlZ5EyWjj0qcoT36ogic_D3Ix8pVJCVNv5UxCoFGwfcAI9U");
    izdelaj(nizi, 103, "xQxw9CFsIB8Bp");
    nizi[104] = nizi[83];
    izdelaj(nizi, 105, "Ar7y_65bDHOg_LRbIaYZ9siUppzW5yrd3sS0OO9rNAduVLNGCJ5ntirqtGtP5OUBAOd47qRTPfBUUaRJ5aT7tpXG");
    izdelaj(nizi, 106, "Lt_LJ7VSHFqi5S5ZiFAILTqrFm");
    nizi[107] = nizi[5];
    izdelaj(nizi, 108, "cOCAVCK7lVNH_qnrtuv6DuZ1pCd4AKta029Dhx7QSgvt8L590T1");
    nizi[109] = nizi[63];
    izdelaj(nizi, 110, "EmxNr0B2V5h_hMdhPPzL8SDS9sxLc7G_wXIYfuN9SUC3Fxl3T99X2_XCEQiAATTxQaeo8cQBrnbsKodNk1eYgM");
    nizi[111] = nizi[71];
    izdelaj(nizi, 112, "RH6PSlPVnGHiNoj3L5IavyAPPMP2yxnv3ayvTd8Dcjs2G78Y5ay3z5CMnIBQogtJVIA");

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
