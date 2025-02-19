
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
    int n = 126;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "dPiYZ7N8_LugIsLn");
    nizi[1] = nizi[0];
    izdelaj(nizi, 2, "91QE5845aCH18LslstFscxPkHOSpVOZRz8y3gkBf2BWNYLNIemB_yUARb1oD");
    izdelaj(nizi, 3, "y5Tt7rqfXRSegZX5pzIKPJ8t22dHu");
    nizi[4] = nizi[2];
    izdelaj(nizi, 5, "ONPUKsoao6yjxH2qKD_etDByXMtlJVlNwT8vw4M4_EPtgY7HWc5k8KuUPfoy7N2rIcy9");
    nizi[6] = nizi[4];
    nizi[7] = nizi[2];
    nizi[8] = nizi[4];
    nizi[9] = nizi[0];
    izdelaj(nizi, 10, "vtyPZbmeL");
    izdelaj(nizi, 11, "hEMx2KJqgdmkrDIs0jVfq37891aJNzMWg");
    nizi[12] = nizi[7];
    nizi[13] = nizi[0];
    nizi[14] = nizi[5];
    izdelaj(nizi, 15, "D4RnsNuwYG8ilhXrDlibD5n338esqRzmhVCnGmrTj2wcplbpFbjr4m2AzsypxsmOogXFJUo9I639");
    izdelaj(nizi, 16, "P9DL");
    nizi[17] = nizi[16];
    nizi[18] = nizi[3];
    nizi[19] = nizi[12];
    izdelaj(nizi, 20, "mK9TfIZ9oomDfynPHvxaQ1DvyDo5fCgsCJDYRCiy3IH483iBEdDd0f7LjMDipXp3PDrIppt52fSnYZoDWOh_J");
    nizi[21] = nizi[10];
    nizi[22] = nizi[11];
    nizi[23] = nizi[20];
    nizi[24] = nizi[17];
    nizi[25] = nizi[0];
    nizi[26] = nizi[16];
    izdelaj(nizi, 27, "mpuMZN1ykFnBjwD8aiEYdGwDNp");
    nizi[28] = nizi[19];
    izdelaj(nizi, 29, "l63vGVYsGb5atd2lPB6THRhqi9djg9x2iQyXiWuDRpDSpT1wLc2UJA6VBOfjO0XX4wQibhVOfldWh1KXvpjktMK");
    izdelaj(nizi, 30, "og_yuT6MQnXA9Xwv4HOYiWBwI5jHYHTRvWKm8NACZ30yKDvE5u0ETIaRcIV6U_S");
    izdelaj(nizi, 31, "r0peupb1dyfggILcXMNnyMCADX1skEdeINmhczOGfH5YESxHOkBR0DacsUF5e_2");
    izdelaj(nizi, 32, "mgTw3mErjTPfzXJUpHdZEkLMlQ_jNr0o7sbcF9bZ4A");
    nizi[33] = nizi[29];
    nizi[34] = nizi[6];
    izdelaj(nizi, 35, "XAF5KBjum9pfHrSEk9EkqjcFWWS87nqu");
    izdelaj(nizi, 36, "Itgt2zps7tPguvQ0AAJ6QuIeUK52Fl0CQdFUhab48QkgokU4SoYtENRjrakPVOiMUagoltD9pJMGnie");
    nizi[37] = nizi[35];
    izdelaj(nizi, 38, "EMYnIg4mgUq7lICIqK78Iu_0F8rPyI4DVBfHNvqptCkdXmUna5vJ_BwS9DFJY23D");
    izdelaj(nizi, 39, "4hLTIb1mMJFSy0ZI6bduPI");
    nizi[40] = nizi[36];
    izdelaj(nizi, 41, "DvG77iUhXcuok38g5l");
    nizi[42] = nizi[17];
    izdelaj(nizi, 43, "ZCQC7bRCukQUH30rpgGwBZR8oGrwm");
    nizi[44] = nizi[19];
    nizi[45] = nizi[3];
    izdelaj(nizi, 46, "h_QCZwgPi894_vKWdMHtvmpxFe4QRNGi");
    izdelaj(nizi, 47, "gP_V5YTDILVdxlYc7WKOPxD6VwbwSMSkT1GEt9luEnrzomqfuPjni5Xb0wYx1TRjvJ4EEiqHnjDIaFof");
    nizi[48] = nizi[40];
    izdelaj(nizi, 49, "1OP1D1Oeo02cmdLW2");
    izdelaj(nizi, 50, "ApcRgeZUFklFgFc6pqoIohkTtZ");
    izdelaj(nizi, 51, "0Q67cpXO03eyAiBzvxveAWYpu8_abtChqQtZdLDtcORSUPvd_kjvCGADi5hoC4R88vGnzcu2UC");
    izdelaj(nizi, 52, "ajEMOEC32ya77zLVj07KzbI3i6");
    izdelaj(nizi, 53, "noPDLlGxGO7SYOk9tgVxc3fTsRs");
    izdelaj(nizi, 54, "Nu3qE8xCzVTpqECeFZYk5_6U4Ys9BSSOvkA87ywDupyQBGkfc8TSX2x6qKmnwDyp_SBaP");
    nizi[55] = nizi[11];
    izdelaj(nizi, 56, "ac1A_7dDCgYu6qRBDTRQco8Be9qkAznX10f0CUm3QtfP9RiFJP9bp0KPA9lkSfHj2i9qlYcCa9ZMJylzWjhISvTRVKM4i4pyhX");
    nizi[57] = nizi[0];
    nizi[58] = nizi[37];
    izdelaj(nizi, 59, "l50nqg2zeQTSHZxPTOSslMKA_3n1bcAwGtiNUvjrl4hI3Qq_o4x_zWkkp");
    nizi[60] = nizi[3];
    nizi[61] = nizi[5];
    nizi[62] = nizi[24];
    nizi[63] = nizi[28];
    nizi[64] = nizi[7];
    izdelaj(nizi, 65, "AgygKZ0TYHPhKAt4Vuo31bKkE2ikyFcWcOTlmiP3a4zuHLlaMycoGZIPXdrF22YHvv1yggBjWVxs7_d5fviHfGba");
    nizi[66] = nizi[32];
    izdelaj(nizi, 67, "oKoItWvOJ");
    nizi[68] = nizi[66];
    izdelaj(nizi, 69, "0F801_mLAvnIJDkpNg2NG5yFJWGm01ci_SFgmJozqm0Ee1C");
    izdelaj(nizi, 70, "USA24gwSJ10dRqlPbGM2vwNskITncrIItyH42up1mHfEmRTpQ");
    izdelaj(nizi, 71, "QR779i9SEfJG");
    nizi[72] = nizi[31];
    nizi[73] = nizi[12];
    izdelaj(nizi, 74, "G9JeJz58Fn8jqldcpvkv_rcDt7QEF7zsPGb4cflNGLXa_QUsIyEl3xWh9kGbDT0O8R2wgvHCUer5akpT_vlnSXJ");
    izdelaj(nizi, 75, "DlqQ6USe7");
    nizi[76] = nizi[64];
    izdelaj(nizi, 77, "mbif2PiMLA4pwckmdxcgWwBH57MggZe3zolAWdYisHIAo9AhCxhXaFjti4CAgTpDbzLkwAY3ETUkIz");
    izdelaj(nizi, 78, "hEGzYo2edI_uqUOinq2wAdgMFa2yhtdaWtWAjoxJsqDFhaaMb3u2_6hLB");
    nizi[79] = nizi[39];
    izdelaj(nizi, 80, "og80lgUK0ETq6Ly8eyIsFDNBGaFv9TanRN6TZNZsIpaFMf6tCr2QArcZL4m_e");
    izdelaj(nizi, 81, "O3ovdOYWgqOfpQSBKAkeo6feiA2");
    nizi[82] = nizi[54];
    izdelaj(nizi, 83, "TiRt21DibiiMBf1jxBuv_aM_VorCDLYloUkCO91n9bvLYiZtyo8sKeCbIjdRh8D5ulXkH");
    izdelaj(nizi, 84, "RvmryVPr006S8BjmNBz74M98efEdwzd57by_bD7VIJsLxM8btxaMX2t");
    nizi[85] = nizi[8];
    nizi[86] = nizi[36];
    nizi[87] = nizi[67];
    izdelaj(nizi, 88, "x4LTbxeRoucPA4_qYohT_0Pk");
    nizi[89] = nizi[77];
    nizi[90] = nizi[77];
    nizi[91] = nizi[17];
    nizi[92] = nizi[52];
    nizi[93] = nizi[10];
    nizi[94] = nizi[11];
    izdelaj(nizi, 95, "v5RisH2xFEyt1oVPRiqZpsiXXP9UJsipkWq0IsmlDaPGd33RtaGNTwyZMKwMY9hNAd7yJBCG4qniU_Vs10EPNAsxb1");
    nizi[96] = nizi[11];
    izdelaj(nizi, 97, "gF42vkg47kgs4OUqX7pOQEL5VN2olh2LV");
    izdelaj(nizi, 98, "pYPptTcuW6pbVAThpIExYuvmTiZh3ssArnJwZD5DH9tOukWz1fdZuWcvjqibcnPpxrJQOtm");
    nizi[99] = nizi[29];
    izdelaj(nizi, 100, "q4FcH5u7NU14Omemv8w40I0ExYqbnNRJ5c4uQ3rR31WH2HKoictvyKKs");
    izdelaj(nizi, 101, "DQf2BeUiKQ3e_8wgWlMiqd06WbYnrxH40oB");
    izdelaj(nizi, 102, "U3Lw0gWCeArLai5");
    izdelaj(nizi, 103, "ejmkyrqcMwC8qA99Qu7skVStpDo5UverSp7WojddjJh72Pwe1F7v1Ap8c0ywCwCxAugIox1ui1657EWpGz");
    nizi[104] = nizi[18];
    izdelaj(nizi, 105, "mcOFs5QMagJt68w2KNnUkrPLvqD4a87jiEdXXVGsCbDlEo3UThmfYatDX7M4r_Z3ocp_bR");
    izdelaj(nizi, 106, "KL2zbJZP8HMeb0FdU0KlbNR2MlGmxkMeKj15");
    nizi[107] = nizi[22];
    nizi[108] = nizi[33];
    nizi[109] = nizi[2];
    izdelaj(nizi, 110, "1njkssBl5XmkDJq34x43LXx0CiZH7Y32dcfDx6D42cO4Q7B53RoZzowVSj8KHy");
    izdelaj(nizi, 111, "uVEFD10tkfoXvd1Vj");
    nizi[112] = nizi[52];
    nizi[113] = nizi[34];
    izdelaj(nizi, 114, "gf32IFFvoeRlMs");
    izdelaj(nizi, 115, "w0Xy8EqK3xDmIzXib9s");
    izdelaj(nizi, 116, "MgjBWoMyKZUxlQB6QR9vRkR4A7");
    izdelaj(nizi, 117, "Kvai0BIR8lZq8D00oR17kzeQ2YU5WEZ");
    nizi[118] = nizi[31];
    nizi[119] = nizi[87];
    izdelaj(nizi, 120, "MZea9GUDE1zHKUb1EjBjH2Ehw_6CPgB7Z_YlS4z1CcwLssKY8J6QeRlY9dCflQ7rhwRX5riOK");
    nizi[121] = nizi[55];
    nizi[122] = nizi[35];
    nizi[123] = nizi[66];
    nizi[124] = nizi[80];
    izdelaj(nizi, 125, "vYNJTvWwDCp99iRNhB7Z_0xiJDt1IeX8JBWP");

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
