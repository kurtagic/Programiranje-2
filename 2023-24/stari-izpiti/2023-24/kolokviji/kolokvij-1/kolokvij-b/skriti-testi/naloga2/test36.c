
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
    int n = 208;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "jFAgumUESRp4Ln8Taf62J1Fr8guTgu3Uqu8mwltrH0QFeQ7lAUxh4ZKV_Zg_PYr3lvzgIOWCQ3Wvn0ZW");
    izdelaj(nizi, 1, "QJ4jYj7IEX0");
    nizi[2] = nizi[1];
    nizi[3] = nizi[2];
    nizi[4] = nizi[1];
    izdelaj(nizi, 5, "FsF3k5YipTSyrYj9nUbCru03AM0yWZC4HnZ0c_ZadKzoTKhqIa8CiCZHqGqfRR04k_Yms7mTzEGzERQyl");
    nizi[6] = nizi[1];
    nizi[7] = nizi[6];
    nizi[8] = nizi[3];
    izdelaj(nizi, 9, "C9HFatBXkPNHRotC6Nz2LUqVJ_");
    nizi[10] = nizi[0];
    nizi[11] = nizi[10];
    nizi[12] = nizi[0];
    nizi[13] = nizi[12];
    nizi[14] = nizi[11];
    nizi[15] = nizi[6];
    nizi[16] = nizi[4];
    nizi[17] = nizi[12];
    izdelaj(nizi, 18, "mcOFs5QMagJt68w2KNnUkrPLvqD4a87jiEdXXVGsCbDlEo3UThmfYatDX7M4r_Z3ocp_bR");
    nizi[19] = nizi[15];
    nizi[20] = nizi[3];
    nizi[21] = nizi[14];
    nizi[22] = nizi[9];
    nizi[23] = nizi[9];
    nizi[24] = nizi[23];
    nizi[25] = nizi[18];
    nizi[26] = nizi[13];
    nizi[27] = nizi[13];
    nizi[28] = nizi[16];
    nizi[29] = nizi[5];
    nizi[30] = nizi[17];
    nizi[31] = nizi[30];
    nizi[32] = nizi[9];
    izdelaj(nizi, 33, "KtzJlllu8BN5KctC5FgIoAkT6o5DkZGV4jrgRjVFzTj0");
    nizi[34] = nizi[7];
    nizi[35] = nizi[30];
    izdelaj(nizi, 36, "rtHjr3PmwJrBIKCS1ce0vFSmkB0SjQEvCTs3D1I7nfS7ymVn4k4z0z_eiNxcaN");
    nizi[37] = nizi[34];
    nizi[38] = nizi[15];
    nizi[39] = nizi[37];
    nizi[40] = nizi[0];
    nizi[41] = nizi[20];
    nizi[42] = nizi[11];
    nizi[43] = nizi[2];
    nizi[44] = nizi[41];
    izdelaj(nizi, 45, "o44IRvFlXuiTIHAxQfJ8xfR3CXlbdPRsiplfFu3dhUhAlGXtwlfxYLiThGEtn_oBhGxwjNACUvcOp");
    nizi[46] = nizi[41];
    nizi[47] = nizi[37];
    nizi[48] = nizi[47];
    nizi[49] = nizi[22];
    nizi[50] = nizi[8];
    nizi[51] = nizi[37];
    nizi[52] = nizi[44];
    nizi[53] = nizi[39];
    nizi[54] = nizi[53];
    nizi[55] = nizi[29];
    izdelaj(nizi, 56, "JcKWSqpuDbFHGvhwoYrV7Ba9AAiPQvqkCyBGoWF63XYY");
    nizi[57] = nizi[46];
    nizi[58] = nizi[13];
    nizi[59] = nizi[23];
    nizi[60] = nizi[15];
    nizi[61] = nizi[20];
    nizi[62] = nizi[57];
    nizi[63] = nizi[14];
    nizi[64] = nizi[59];
    nizi[65] = nizi[54];
    nizi[66] = nizi[12];
    nizi[67] = nizi[45];
    izdelaj(nizi, 68, "A9TRGirKrdCHcUhpgddgRrpn4074xoNamnE4EkcoJEgVZYddu6cpUH1MHDz1uC5W7HGnrDpAkIapCM3VXtbkM");
    izdelaj(nizi, 69, "q1pzG8769Q6DRkr0hfEFSH6DKOWlwaxWsIwN0IGdWDj1e5iJwhPEH_Ra_IFPdIN_zko2L0wXexg4d426l");
    nizi[70] = nizi[60];
    nizi[71] = nizi[7];
    izdelaj(nizi, 72, "cgi2bLBEZiiuXME2O0_hxayaMpLB");
    izdelaj(nizi, 73, "XYAlQ1B4vG7SPsLjqDy1dVtpYelxNoi3Rt864bo4F7IvU82AMkosiylLSIjsnS1YuLDBsNu8f_67ae31");
    nizi[74] = nizi[50];
    nizi[75] = nizi[10];
    nizi[76] = nizi[68];
    nizi[77] = nizi[39];
    nizi[78] = nizi[6];
    izdelaj(nizi, 79, "ks5cT9MR6FQBte");
    nizi[80] = nizi[34];
    izdelaj(nizi, 81, "noHpBqT6KohuIgV5kmYk97vNI3XSn0yy0bXJ5QQXu0uRcyeCO1yaen3DOwW8Ihroyc_o9BAVfMlpaT15");
    nizi[82] = nizi[41];
    nizi[83] = nizi[48];
    nizi[84] = nizi[77];
    nizi[85] = nizi[84];
    izdelaj(nizi, 86, "1vB_KmwN");
    nizi[87] = nizi[75];
    nizi[88] = nizi[38];
    nizi[89] = nizi[56];
    nizi[90] = nizi[53];
    nizi[91] = nizi[78];
    nizi[92] = nizi[72];
    izdelaj(nizi, 93, "34xszmgtCiFUOmQFk7wuyDx0fazhNMedtiF1jGWsTOcJthfaN2Di2InnDgs_UNIkfd50BZNyD_0VSm5TqU0aewx");
    nizi[94] = nizi[20];
    nizi[95] = nizi[26];
    nizi[96] = nizi[40];
    nizi[97] = nizi[76];
    nizi[98] = nizi[55];
    nizi[99] = nizi[44];
    nizi[100] = nizi[89];
    nizi[101] = nizi[70];
    nizi[102] = nizi[97];
    nizi[103] = nizi[39];
    nizi[104] = nizi[62];
    nizi[105] = nizi[10];
    nizi[106] = nizi[39];
    izdelaj(nizi, 107, "zV");
    izdelaj(nizi, 108, "0UipICfzzgKOI5qnKuKuFDHJKwyLWQwElD_HqiEnVuz0g1IwHkCZYUoEagLaekZOzO80EHLEBk13u2bdOj1Ibt6kvKCIJaY1");
    izdelaj(nizi, 109, "LAbI9sTmjdgpTz20oMr5Y6Z9SadNGM_kblZ0q");
    nizi[110] = nizi[1];
    nizi[111] = nizi[57];
    nizi[112] = nizi[100];
    nizi[113] = nizi[38];
    izdelaj(nizi, 114, "GK6LQio1");
    nizi[115] = nizi[54];
    nizi[116] = nizi[101];
    nizi[117] = nizi[59];
    nizi[118] = nizi[93];
    nizi[119] = nizi[107];
    nizi[120] = nizi[102];
    nizi[121] = nizi[23];
    nizi[122] = nizi[35];
    nizi[123] = nizi[93];
    nizi[124] = nizi[107];
    nizi[125] = nizi[40];
    nizi[126] = nizi[43];
    nizi[127] = nizi[34];
    izdelaj(nizi, 128, "rqH7RMjbH0AOve5sD1lQoq0HKOe9S6Jgf6JbvpUt0xlHfMXXwmvjRiZWAsGAnKsTGfTt7qgqAbfw");
    nizi[129] = nizi[57];
    nizi[130] = nizi[124];
    nizi[131] = nizi[43];
    nizi[132] = nizi[75];
    nizi[133] = nizi[61];
    nizi[134] = nizi[39];
    nizi[135] = nizi[76];
    nizi[136] = nizi[17];
    nizi[137] = nizi[123];
    izdelaj(nizi, 138, "KyZ8T8C89HieOUi09936_fAK2sDRCSNgQo1PRZXXVI_q1TXT04550");
    nizi[139] = nizi[73];
    nizi[140] = nizi[5];
    nizi[141] = nizi[11];
    nizi[142] = nizi[12];
    nizi[143] = nizi[22];
    izdelaj(nizi, 144, "o53Z9eXtN1XRumTE1OL0o1wowdaKJjP");
    izdelaj(nizi, 145, "cWI59ACDpir3ymHSt6UtKCvkdw");
    nizi[146] = nizi[88];
    nizi[147] = nizi[110];
    nizi[148] = nizi[56];
    izdelaj(nizi, 149, "Rk7EYTcvwGPrhAPg6IaJkoqDtS0DVYfDNtZzP0i7Ue2v9");
    nizi[150] = nizi[89];
    nizi[151] = nizi[18];
    nizi[152] = nizi[93];
    nizi[153] = nizi[88];
    nizi[154] = nizi[82];
    izdelaj(nizi, 155, "pCwVzC8C7XuybYAdgdVWp0SLIftyQ5cvQaz9PiguODBMpkqQzYpx");
    nizi[156] = nizi[111];
    izdelaj(nizi, 157, "Aw0mooQN1t7PfrfOUP6J7CDLcR1SNSHdQeL8ip2N6PrxQbVwsNkl32amoi");
    nizi[158] = nizi[91];
    nizi[159] = nizi[79];
    nizi[160] = nizi[114];
    izdelaj(nizi, 161, "5MVHYO_Qr6w3akq12iHamsYM88B8rpAUXDWOg2wVm4EJqlfyIPDb3z7I3Qt0wIqGPi7NewNUK1ZTuF9xk2P3Ucw");
    nizi[162] = nizi[6];
    nizi[163] = nizi[45];
    nizi[164] = nizi[85];
    nizi[165] = nizi[109];
    nizi[166] = nizi[8];
    nizi[167] = nizi[65];
    nizi[168] = nizi[151];
    nizi[169] = nizi[135];
    nizi[170] = nizi[97];
    nizi[171] = nizi[9];
    izdelaj(nizi, 172, "dOMwDrhbUNi4vzm5I7SAEj31Rzb7TddAblrd84mn5Rrlnqa6Sr5aR");
    nizi[173] = nizi[149];
    nizi[174] = nizi[97];
    nizi[175] = nizi[110];
    nizi[176] = nizi[112];
    nizi[177] = nizi[39];
    nizi[178] = nizi[169];
    nizi[179] = nizi[177];
    izdelaj(nizi, 180, "noPDLlGxGO7SYOk9tgVxc3fTsRs");
    izdelaj(nizi, 181, "ljjcwMpbQ5QPpULnJBVSAfJqADQKHcN3JrDfbbkpPutvC5dZppN0LlN1T");
    nizi[182] = nizi[97];
    nizi[183] = nizi[157];
    nizi[184] = nizi[76];
    nizi[185] = nizi[9];
    nizi[186] = nizi[176];
    nizi[187] = nizi[151];
    nizi[188] = nizi[73];
    izdelaj(nizi, 189, "RGxukWC");
    nizi[190] = nizi[52];
    izdelaj(nizi, 191, "diolJ3R0PsLz6yoLrk0EmDIqE2vbxYXDrhsVvxJaQ0aJDnNb2B_tE2W2Z");
    nizi[192] = nizi[125];
    nizi[193] = nizi[46];
    nizi[194] = nizi[150];
    nizi[195] = nizi[76];
    izdelaj(nizi, 196, "V1Ee7f0UoFLylALwb8E3_Qcj5iXovJOIrf8w81iLpoKgK7g9BoYzS2tG1Xz0Imqg1Ep1YJ7stD_tThYBw5EiebWVeIko7eBQbWCO");
    nizi[197] = nizi[30];
    izdelaj(nizi, 198, "JrIhmBQTHSpjsVX5_7aAMrVcO");
    nizi[199] = nizi[50];
    nizi[200] = nizi[105];
    nizi[201] = nizi[36];
    nizi[202] = nizi[38];
    nizi[203] = nizi[26];
    izdelaj(nizi, 204, "7z1Kzln0Aw22XJlKlrzr9dilXXyd8LDy3Af3Rp5b6nwULlnENzvs_bcs4mnbrLX4R0Kfn7IZeMkM57pGkvK6NwEIL");
    nizi[205] = nizi[100];
    nizi[206] = nizi[156];
    nizi[207] = nizi[90];

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
