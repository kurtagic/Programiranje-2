
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
    int n = 212;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "NFIl6Ie8TEc3s83GICYYJIs2bG3idqWNLArXHDy_y9PyOSFfc2gXhVIoREpospA");
    nizi[1] = nizi[0];
    nizi[2] = nizi[1];
    nizi[3] = nizi[2];
    nizi[4] = nizi[1];
    nizi[5] = nizi[1];
    nizi[6] = nizi[3];
    nizi[7] = nizi[4];
    nizi[8] = nizi[4];
    nizi[9] = nizi[3];
    nizi[10] = nizi[3];
    nizi[11] = nizi[0];
    nizi[12] = nizi[1];
    izdelaj(nizi, 13, "NFIl6Ie8TEc3s83GICYYJIs2bG3idqWNLArXHDy_y9PyOSFfc2gXhVIoREpospA");
    nizi[14] = nizi[6];
    nizi[15] = nizi[1];
    nizi[16] = nizi[12];
    izdelaj(nizi, 17, "NFIl6Ie8TEc3s83GICYYJIs2bG3idqWNLArXHDy_y9PyOSFfc2gXhVIoREpospA");
    nizi[18] = nizi[3];
    nizi[19] = nizi[18];
    nizi[20] = nizi[16];
    nizi[21] = nizi[14];
    nizi[22] = nizi[17];
    nizi[23] = nizi[4];
    nizi[24] = nizi[5];
    nizi[25] = nizi[21];
    nizi[26] = nizi[24];
    nizi[27] = nizi[14];
    nizi[28] = nizi[21];
    nizi[29] = nizi[22];
    nizi[30] = nizi[26];
    nizi[31] = nizi[0];
    nizi[32] = nizi[0];
    nizi[33] = nizi[17];
    nizi[34] = nizi[3];
    izdelaj(nizi, 35, "OjNTqjCeSqVS6myz7ydNA5PdAg4bpSkZwAUBb2BYIOn_QhFYK5q6s5RkTOENddit5TzpMwv192x4ySWrVjrlttg");
    nizi[36] = nizi[31];
    nizi[37] = nizi[32];
    nizi[38] = nizi[31];
    nizi[39] = nizi[35];
    nizi[40] = nizi[26];
    nizi[41] = nizi[26];
    nizi[42] = nizi[1];
    nizi[43] = nizi[12];
    nizi[44] = nizi[27];
    izdelaj(nizi, 45, "NFIl6Ie8TEc3s83GICYYJIs2bG3idqWNLArXHDy_y9PyOSFfc2gXhVIoREpospA");
    nizi[46] = nizi[10];
    izdelaj(nizi, 47, "OjNTqjCeSqVS6myz7ydNA5PdAg4bpSkZwAUBb2BYIOn_QhFYK5q6s5RkTOENddit5TzpMwv192x4ySWrVjrlttg");
    nizi[48] = nizi[46];
    nizi[49] = nizi[27];
    nizi[50] = nizi[8];
    nizi[51] = nizi[44];
    nizi[52] = nizi[14];
    nizi[53] = nizi[14];
    nizi[54] = nizi[43];
    nizi[55] = nizi[11];
    nizi[56] = nizi[8];
    izdelaj(nizi, 57, "NFIl6Ie8TEc3s83GICYYJIs2bG3idqWNLArXHDy_y9PyOSFfc2gXhVIoREpospA");
    nizi[58] = nizi[30];
    nizi[59] = nizi[9];
    nizi[60] = nizi[44];
    nizi[61] = nizi[39];
    izdelaj(nizi, 62, "NpnzxaMsqbJUsauHZRbdjhJOeFWJ4DCWcFeFiv9qq9yAEatC8dguhr0X6zOQDRwCk2I7PxEyz4mOd_OIDGuT9");
    nizi[63] = nizi[25];
    nizi[64] = nizi[3];
    nizi[65] = nizi[25];
    nizi[66] = nizi[16];
    nizi[67] = nizi[66];
    nizi[68] = nizi[7];
    izdelaj(nizi, 69, "NpnzxaMsqbJUsauHZRbdjhJOeFWJ4DCWcFeFiv9qq9yAEatC8dguhr0X6zOQDRwCk2I7PxEyz4mOd_OIDGuT9");
    nizi[70] = nizi[6];
    izdelaj(nizi, 71, "0gJD2Ngz0AVHDvfSWdNoRalyny0lIWGld");
    nizi[72] = nizi[51];
    nizi[73] = nizi[6];
    nizi[74] = nizi[53];
    izdelaj(nizi, 75, "OjNTqjCeSqVS6myz7ydNA5PdAg4bpSkZwAUBb2BYIOn_QhFYK5q6s5RkTOENddit5TzpMwv192x4ySWrVjrlttg");
    nizi[76] = nizi[69];
    nizi[77] = nizi[34];
    nizi[78] = nizi[8];
    nizi[79] = nizi[58];
    nizi[80] = nizi[20];
    nizi[81] = nizi[66];
    nizi[82] = nizi[76];
    nizi[83] = nizi[15];
    nizi[84] = nizi[56];
    nizi[85] = nizi[34];
    nizi[86] = nizi[59];
    izdelaj(nizi, 87, "NFIl6Ie8TEc3s83GICYYJIs2bG3idqWNLArXHDy_y9PyOSFfc2gXhVIoREpospA");
    nizi[88] = nizi[44];
    nizi[89] = nizi[34];
    nizi[90] = nizi[85];
    nizi[91] = nizi[6];
    nizi[92] = nizi[56];
    nizi[93] = nizi[66];
    nizi[94] = nizi[69];
    nizi[95] = nizi[71];
    nizi[96] = nizi[62];
    izdelaj(nizi, 97, "ObfQMRuHcjIpVvRDi82syA_Tffd_FtpgK9d8m2axv");
    nizi[98] = nizi[14];
    nizi[99] = nizi[79];
    nizi[100] = nizi[38];
    nizi[101] = nizi[35];
    nizi[102] = nizi[7];
    nizi[103] = nizi[62];
    nizi[104] = nizi[68];
    nizi[105] = nizi[44];
    nizi[106] = nizi[50];
    nizi[107] = nizi[41];
    nizi[108] = nizi[52];
    nizi[109] = nizi[45];
    nizi[110] = nizi[77];
    nizi[111] = nizi[64];
    nizi[112] = nizi[95];
    nizi[113] = nizi[42];
    nizi[114] = nizi[50];
    nizi[115] = nizi[99];
    izdelaj(nizi, 116, "ObfQMRuHcjIpVvRDi82syA_Tffd_FtpgK9d8m2axv");
    nizi[117] = nizi[13];
    nizi[118] = nizi[1];
    nizi[119] = nizi[34];
    izdelaj(nizi, 120, "OjNTqjCeSqVS6myz7ydNA5PdAg4bpSkZwAUBb2BYIOn_QhFYK5q6s5RkTOENddit5TzpMwv192x4ySWrVjrlttg");
    izdelaj(nizi, 121, "NpnzxaMsqbJUsauHZRbdjhJOeFWJ4DCWcFeFiv9qq9yAEatC8dguhr0X6zOQDRwCk2I7PxEyz4mOd_OIDGuT9");
    nizi[122] = nizi[83];
    nizi[123] = nizi[117];
    nizi[124] = nizi[12];
    nizi[125] = nizi[28];
    nizi[126] = nizi[38];
    nizi[127] = nizi[76];
    izdelaj(nizi, 128, "ObfQMRuHcjIpVvRDi82syA_Tffd_FtpgK9d8m2axv");
    nizi[129] = nizi[90];
    izdelaj(nizi, 130, "OjNTqjCeSqVS6myz7ydNA5PdAg4bpSkZwAUBb2BYIOn_QhFYK5q6s5RkTOENddit5TzpMwv192x4ySWrVjrlttg");
    nizi[131] = nizi[40];
    izdelaj(nizi, 132, "eRt1zwCKbeoI7dTJiLdFwf5NUAKNjisqOWvuaT6FoXjopwtIUi6_sO7I5ehMtyA3J_GDP");
    nizi[133] = nizi[89];
    nizi[134] = nizi[131];
    nizi[135] = nizi[85];
    nizi[136] = nizi[52];
    nizi[137] = nizi[3];
    izdelaj(nizi, 138, "2");
    nizi[139] = nizi[27];
    nizi[140] = nizi[60];
    nizi[141] = nizi[0];
    nizi[142] = nizi[14];
    nizi[143] = nizi[62];
    nizi[144] = nizi[90];
    nizi[145] = nizi[69];
    izdelaj(nizi, 146, "eRt1zwCKbeoI7dTJiLdFwf5NUAKNjisqOWvuaT6FoXjopwtIUi6_sO7I5ehMtyA3J_GDP");
    izdelaj(nizi, 147, "T5");
    nizi[148] = nizi[75];
    nizi[149] = nizi[34];
    nizi[150] = nizi[26];
    nizi[151] = nizi[117];
    nizi[152] = nizi[129];
    nizi[153] = nizi[58];
    izdelaj(nizi, 154, "81xxi39bg5kBliOPYuFUi4jz73Le_ZeSxzThVoxK07");
    nizi[155] = nizi[42];
    izdelaj(nizi, 156, "eRt1zwCKbeoI7dTJiLdFwf5NUAKNjisqOWvuaT6FoXjopwtIUi6_sO7I5ehMtyA3J_GDP");
    nizi[157] = nizi[29];
    izdelaj(nizi, 158, "LkKSccTSCVL5U_9dX4II4LDKD7dP8XeEbHcU_a0tiji0AnIcP3SmYdO_lOg5LmCzuniVgsqZ3FfBiAreTH");
    nizi[159] = nizi[14];
    nizi[160] = nizi[1];
    nizi[161] = nizi[62];
    nizi[162] = nizi[132];
    nizi[163] = nizi[78];
    nizi[164] = nizi[163];
    nizi[165] = nizi[39];
    nizi[166] = nizi[12];
    nizi[167] = nizi[133];
    nizi[168] = nizi[146];
    nizi[169] = nizi[107];
    nizi[170] = nizi[59];
    izdelaj(nizi, 171, "8xLgHVjWiGF0ETNZe_POAvwTLSdQxSOyQht072HW1k0OIy1XxWpqwyOrVLwdeBIvvNdmXwKaZiWj9UR");
    nizi[172] = nizi[101];
    nizi[173] = nizi[108];
    nizi[174] = nizi[140];
    izdelaj(nizi, 175, "8xLgHVjWiGF0ETNZe_POAvwTLSdQxSOyQht072HW1k0OIy1XxWpqwyOrVLwdeBIvvNdmXwKaZiWj9UR");
    nizi[176] = nizi[65];
    nizi[177] = nizi[152];
    nizi[178] = nizi[69];
    nizi[179] = nizi[87];
    nizi[180] = nizi[101];
    izdelaj(nizi, 181, "lYQRfBolrXO7i3qJ1gGSPVaYWqY1L6u8O_SGHSy3PGHyelWD");
    nizi[182] = nizi[31];
    nizi[183] = nizi[164];
    nizi[184] = nizi[96];
    nizi[185] = nizi[152];
    izdelaj(nizi, 186, "LkKSccTSCVL5U_9dX4II4LDKD7dP8XeEbHcU_a0tiji0AnIcP3SmYdO_lOg5LmCzuniVgsqZ3FfBiAreTH");
    nizi[187] = nizi[127];
    izdelaj(nizi, 188, "lYQRfBolrXO7i3qJ1gGSPVaYWqY1L6u8O_SGHSy3PGHyelWD");
    nizi[189] = nizi[74];
    nizi[190] = nizi[78];
    nizi[191] = nizi[113];
    nizi[192] = nizi[170];
    nizi[193] = nizi[5];
    nizi[194] = nizi[130];
    nizi[195] = nizi[85];
    nizi[196] = nizi[163];
    nizi[197] = nizi[113];
    nizi[198] = nizi[114];
    izdelaj(nizi, 199, "0gJD2Ngz0AVHDvfSWdNoRalyny0lIWGld");
    nizi[200] = nizi[66];
    nizi[201] = nizi[132];
    izdelaj(nizi, 202, "2");
    nizi[203] = nizi[98];
    nizi[204] = nizi[164];
    nizi[205] = nizi[198];
    nizi[206] = nizi[28];
    nizi[207] = nizi[163];
    nizi[208] = nizi[194];
    nizi[209] = nizi[122];
    nizi[210] = nizi[199];
    nizi[211] = nizi[165];

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
