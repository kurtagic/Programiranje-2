
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
    int n = 111;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "MJ2QQi98NRGC6QIYAxRYQeSUBVZ1Drjgwl293kdyrbpdlU1MqnqTrWP9Q9UexwvyzTF1aqg");
    izdelaj(nizi, 1, "ZENHtnk8hycarF7EVG");
    izdelaj(nizi, 2, "DvG77iUhXcuok38g5l");
    nizi[3] = nizi[2];
    izdelaj(nizi, 4, "9PEYgPTMdpdC_1mpuXujSkaXPpQYj");
    izdelaj(nizi, 5, "f8GLvfGYl0");
    nizi[6] = nizi[0];
    izdelaj(nizi, 7, "UnFAkL10CX4z7xmBzNbCK8JGrqcs3H7vkubJzgZP");
    izdelaj(nizi, 8, "dNwXNgtFlbLiuvxW_6Ll9u28t28czeHkg2WYiyiAUomEhtY5qo1");
    izdelaj(nizi, 9, "Ob8YIu_zDZsGS4");
    izdelaj(nizi, 10, "7P859pbM3KIbvM6nqikqo82EHrEJqTfmaytxgbzZVMPAPCFN03NE9");
    nizi[11] = nizi[4];
    izdelaj(nizi, 12, "0ncrkfzlvxNXS6LiCJ7BsPhpxQJc0E3jbq4Lkhz_o3pgS");
    nizi[13] = nizi[11];
    nizi[14] = nizi[12];
    nizi[15] = nizi[7];
    nizi[16] = nizi[9];
    nizi[17] = nizi[4];
    izdelaj(nizi, 18, "MpPc8NhxYjIyB4mCmrLlQNQGpFBXEFpYv7ZpGurvJogaI9pYa");
    nizi[19] = nizi[12];
    nizi[20] = nizi[16];
    nizi[21] = nizi[18];
    izdelaj(nizi, 22, "AJrR3Ua6gEqnSmO30qWzuVQOfJR");
    nizi[23] = nizi[15];
    nizi[24] = nizi[9];
    izdelaj(nizi, 25, "MOQVNVH6HVZlTpfrC6ReRm2CV5aGipqWRnoISG9SpoYxB_PyPE6agiPQqH5nKU8ebSkZEd5");
    nizi[26] = nizi[24];
    nizi[27] = nizi[13];
    nizi[28] = nizi[19];
    nizi[29] = nizi[3];
    nizi[30] = nizi[0];
    izdelaj(nizi, 31, "EHRf8hs8CYkPGkxo4R2rGIW0xjnGu7hmvRhH0JV8pF180gR24");
    nizi[32] = nizi[4];
    izdelaj(nizi, 33, "6Oimpozz9k9tY");
    nizi[34] = nizi[26];
    nizi[35] = nizi[28];
    izdelaj(nizi, 36, "QdHqNmnT2KL0dY2sTp9yIEnOqKDcNSA7d6py8xyMtQhPDEyV2QhGU8uMyybqpeGxTzA_AUbblFb");
    nizi[37] = nizi[14];
    nizi[38] = nizi[32];
    nizi[39] = nizi[34];
    izdelaj(nizi, 40, "TEmf3TNBHOLVzKcW5GkDg1l0EBO1PwwynVXfZMTbC3_XTpnS0rX1KCYgnGNP8j82Zur9xK0");
    izdelaj(nizi, 41, "YyjmYl1h5WI3xGCQScKY4zWGE9XKeVrN694CHzL1EXImkx3q8wD3ZLL906LrY1CUHTKru8gWpY8mHlhYQGdAb44YZ");
    izdelaj(nizi, 42, "RU7FXb3XeU7_qJ26jatH1pC_CebsIR2oSFp_O8wrrccn6RKkzHGCdGA76aPWsvMPGETBEvs6U");
    izdelaj(nizi, 43, "GT2yD");
    nizi[44] = nizi[37];
    nizi[45] = nizi[4];
    nizi[46] = nizi[30];
    nizi[47] = nizi[19];
    nizi[48] = nizi[19];
    izdelaj(nizi, 49, "gSfWitLqTQGJ84FSIMUnsvBnz");
    nizi[50] = nizi[48];
    nizi[51] = nizi[8];
    izdelaj(nizi, 52, "LNTNic8tv0n");
    nizi[53] = nizi[48];
    nizi[54] = nizi[35];
    izdelaj(nizi, 55, "RqQadtt9DUBxwyQPxw0Lmw_0wyrc02IfoBLe5c3_CS92pEWcni0_9yZtFRIio_YBGTuNu2x5EQmiyoclJ");
    izdelaj(nizi, 56, "A8HHkRv8");
    nizi[57] = nizi[45];
    nizi[58] = nizi[43];
    nizi[59] = nizi[6];
    nizi[60] = nizi[16];
    nizi[61] = nizi[8];
    nizi[62] = nizi[29];
    izdelaj(nizi, 63, "lna30R");
    nizi[64] = nizi[5];
    nizi[65] = nizi[52];
    izdelaj(nizi, 66, "0katfUGJecF50E3SV2e2w4mVjL0rwjAl5Uisx3HKyA2xnWco9hAaw32mY8P");
    nizi[67] = nizi[52];
    nizi[68] = nizi[6];
    nizi[69] = nizi[19];
    nizi[70] = nizi[50];
    nizi[71] = nizi[6];
    nizi[72] = nizi[16];
    nizi[73] = nizi[48];
    nizi[74] = nizi[48];
    izdelaj(nizi, 75, "aOxENEZFnzizO1B151EljFOkoMndBBy_3sjMY241KJXDuSGOywaHvzyMIQJEJs");
    izdelaj(nizi, 76, "OCvOtz7Igs6NI9vOtXhMI60");
    nizi[77] = nizi[58];
    nizi[78] = nizi[37];
    izdelaj(nizi, 79, "KZMzS");
    izdelaj(nizi, 80, "V2VaLzbEMFRgR70UevJM8HG3lh_pgOEMescYo7Pd16ULPOA054OKbtmyxuPlVCG0pds5iFh0Ww4QAjeFFGGKA7TU");
    nizi[81] = nizi[22];
    nizi[82] = nizi[11];
    izdelaj(nizi, 83, "tRdVLnN4_Vr41kNaXnF1mDL47R2LmX4pupBdwX1c13xG45l_MMs8EuFR7i0EdARUzOjZ8yXQ_1A61JJVvSYNTs0");
    nizi[84] = nizi[56];
    nizi[85] = nizi[78];
    nizi[86] = nizi[79];
    nizi[87] = nizi[65];
    izdelaj(nizi, 88, "eZK62OYFhpWLDPSOxRj5sKcc6dBevw6UOKe8hJt5GYa59vQy4rdv2DcIb4rL");
    nizi[89] = nizi[66];
    nizi[90] = nizi[67];
    nizi[91] = nizi[27];
    izdelaj(nizi, 92, "SiGXykvcphuGOsAYJNCtqnj6pfW2Lsf4a11vS8cawdQ8Ubug3UYw4Vv2gfvhlJx2ys_jJNPcJE17P2IYc8fg6V8E");
    nizi[93] = nizi[2];
    nizi[94] = nizi[4];
    izdelaj(nizi, 95, "2yD70Z2BeNgzJz6pq5y1vhBMo");
    nizi[96] = nizi[33];
    nizi[97] = nizi[26];
    nizi[98] = nizi[38];
    nizi[99] = nizi[82];
    nizi[100] = nizi[53];
    izdelaj(nizi, 101, "WjzIZtz3u4BIGiq_oE6QIUcUkb9");
    nizi[102] = nizi[29];
    nizi[103] = nizi[47];
    izdelaj(nizi, 104, "aJImB_Ga9EnrR2jFwVNf6LxJcjJwOPdbnofNsfy26Nsy1ac4");
    nizi[105] = nizi[44];
    izdelaj(nizi, 106, "hN7zCixoGjox3nGpTQbRgpVWb5pGWNglOig9N7mOLvF8BI1npmQRaUSKaLFr");
    izdelaj(nizi, 107, "a9d5zJtbdc9AzoQsSOtU4Teyezi4qA4ClLkx1YE7Ir2cQvoFc6VC4kr47BpYWgfnclrZeBjGvcrcL_kR9q_qBdnwsrC0");
    izdelaj(nizi, 108, "RScdLAdA3ieIsk7uw5aaSW0FEhCX6sP63VoxtL4c_YWzI53CST");
    izdelaj(nizi, 109, "nf2hU3BTRGDCwy_fXLhdITuJ0CFAv5Ivd_pv1GURK6LYQsSze_hnzDUgPmC0j_AHEo8lx_adT8u3fM0FC1D");
    nizi[110] = nizi[34];

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
