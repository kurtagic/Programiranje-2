
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
    int n = 168;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    nizi[1] = nizi[0];
    nizi[2] = nizi[0];
    nizi[3] = nizi[1];
    nizi[4] = nizi[1];
    izdelaj(nizi, 5, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    nizi[6] = nizi[4];
    nizi[7] = nizi[2];
    nizi[8] = nizi[5];
    izdelaj(nizi, 9, "jNbSrr");
    nizi[10] = nizi[9];
    izdelaj(nizi, 11, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    nizi[12] = nizi[11];
    nizi[13] = nizi[9];
    nizi[14] = nizi[13];
    izdelaj(nizi, 15, "jNbSrr");
    izdelaj(nizi, 16, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    nizi[17] = nizi[10];
    nizi[18] = nizi[2];
    izdelaj(nizi, 19, "HuyV");
    nizi[20] = nizi[14];
    izdelaj(nizi, 21, "RS5Y_EuWbEMCIgMomde2P4iY8BvgqL2dZNk0ARtGPY3");
    nizi[22] = nizi[13];
    izdelaj(nizi, 23, "jNbSrr");
    izdelaj(nizi, 24, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    izdelaj(nizi, 25, "jNbSrr");
    izdelaj(nizi, 26, "Slszq_zOD_EfV6lTrowjlHMP37HH5sfE9fxjeLSojzvUHMZmD47SVn9tVXm3tyyVKaF4UtyVcehVsi8Aqj");
    nizi[27] = nizi[5];
    izdelaj(nizi, 28, "HuyV");
    izdelaj(nizi, 29, "eWcKQ1XHqXOEIJxe47gvhbSAObza0NA5VyA");
    nizi[30] = nizi[10];
    nizi[31] = nizi[26];
    nizi[32] = nizi[7];
    nizi[33] = nizi[20];
    nizi[34] = nizi[20];
    nizi[35] = nizi[12];
    nizi[36] = nizi[26];
    nizi[37] = nizi[27];
    nizi[38] = nizi[20];
    izdelaj(nizi, 39, "uCqliyPFbWf0hfauyyUG2_UhOrej1fHFwq0A0vn");
    izdelaj(nizi, 40, "TdPIW1ATWjRZs3vy2YpjkIb6JIrQnf5sCHGQSX02trPCrtGI7MXvL3rxzMBAIN_iuStVVA_cIQ");
    nizi[41] = nizi[21];
    nizi[42] = nizi[10];
    nizi[43] = nizi[3];
    nizi[44] = nizi[0];
    nizi[45] = nizi[41];
    izdelaj(nizi, 46, "HuyV");
    nizi[47] = nizi[15];
    nizi[48] = nizi[42];
    izdelaj(nizi, 49, "TdPIW1ATWjRZs3vy2YpjkIb6JIrQnf5sCHGQSX02trPCrtGI7MXvL3rxzMBAIN_iuStVVA_cIQ");
    izdelaj(nizi, 50, "uWChjOXqUb33oouyzPgu21CUv4McQ8BSO17nsOmQnbnWDTsL9BbOkH8Khf");
    izdelaj(nizi, 51, "VtTv_GyiW4x8hODHruhi5RC8LBkpICylZWwd0ouOhgO0kTJVevGhdjNg2Ty6MSSolggFjWiFM");
    izdelaj(nizi, 52, "HuyV");
    izdelaj(nizi, 53, "RVncb66davv9jE7kMjmkuTW2_jFKSKsfu1Wv1y8eUAZ493");
    izdelaj(nizi, 54, "Opr67VDett80mDis1KFOnbOkFs");
    nizi[55] = nizi[0];
    nizi[56] = nizi[6];
    nizi[57] = nizi[12];
    nizi[58] = nizi[57];
    izdelaj(nizi, 59, "Opr67VDett80mDis1KFOnbOkFs");
    nizi[60] = nizi[23];
    nizi[61] = nizi[3];
    izdelaj(nizi, 62, "uCqliyPFbWf0hfauyyUG2_UhOrej1fHFwq0A0vn");
    izdelaj(nizi, 63, "6eXIU");
    izdelaj(nizi, 64, "uWChjOXqUb33oouyzPgu21CUv4McQ8BSO17nsOmQnbnWDTsL9BbOkH8Khf");
    izdelaj(nizi, 65, "1zie");
    izdelaj(nizi, 66, "1zie");
    nizi[67] = nizi[22];
    nizi[68] = nizi[44];
    nizi[69] = nizi[58];
    nizi[70] = nizi[9];
    nizi[71] = nizi[7];
    izdelaj(nizi, 72, "JbOIbUUhsGUJK8s9LzoJe5u1JnDFSk6c0TEDqfY1rL4cVn");
    nizi[73] = nizi[8];
    nizi[74] = nizi[13];
    izdelaj(nizi, 75, "1zie");
    izdelaj(nizi, 76, "KXcFKaTOjOEKP3cyrNUn2P18JwCa3A9BmXyHD3Dzo8L2iyoVqaGCUS4ffxtWKeoFTOx");
    nizi[77] = nizi[28];
    nizi[78] = nizi[44];
    nizi[79] = nizi[38];
    izdelaj(nizi, 80, "eWcKQ1XHqXOEIJxe47gvhbSAObza0NA5VyA");
    nizi[81] = nizi[56];
    nizi[82] = nizi[22];
    izdelaj(nizi, 83, "VtTv_GyiW4x8hODHruhi5RC8LBkpICylZWwd0ouOhgO0kTJVevGhdjNg2Ty6MSSolggFjWiFM");
    izdelaj(nizi, 84, "1Rh_7MZrfijIRQRCCfMaXiG9vFRSpsANHp3hRW7YZqOyCbBYikNElE4lojag8dnJ6AdErZ");
    izdelaj(nizi, 85, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    izdelaj(nizi, 86, "Slszq_zOD_EfV6lTrowjlHMP37HH5sfE9fxjeLSojzvUHMZmD47SVn9tVXm3tyyVKaF4UtyVcehVsi8Aqj");
    nizi[87] = nizi[76];
    nizi[88] = nizi[28];
    nizi[89] = nizi[1];
    izdelaj(nizi, 90, "RS5Y_EuWbEMCIgMomde2P4iY8BvgqL2dZNk0ARtGPY3");
    izdelaj(nizi, 91, "VtTv_GyiW4x8hODHruhi5RC8LBkpICylZWwd0ouOhgO0kTJVevGhdjNg2Ty6MSSolggFjWiFM");
    nizi[92] = nizi[33];
    izdelaj(nizi, 93, "6qBwF7c_DqLB9qhhFxMoQC_UvFmbFbyaKg9lxq05Jvo21R8EfT0yItyYg");
    nizi[94] = nizi[36];
    nizi[95] = nizi[41];
    izdelaj(nizi, 96, "_9ShXUCAYfYbIaEyppNaBgSROBtjSazMarQEqYFsqxssrrdsJUwPHr2EIfar5OUHbUU");
    izdelaj(nizi, 97, "6eXIU");
    nizi[98] = nizi[53];
    izdelaj(nizi, 99, "_9ShXUCAYfYbIaEyppNaBgSROBtjSazMarQEqYFsqxssrrdsJUwPHr2EIfar5OUHbUU");
    izdelaj(nizi, 100, "1zie");
    nizi[101] = nizi[50];
    nizi[102] = nizi[46];
    izdelaj(nizi, 103, "biAuzVRTfkzvVaIX6b4FdBd3upJQe8AxHj5vAyFn1OwsDoFsiosa5Oc0XIxgeWhAtzzEdnW5bbDxjVnQ2p1P1NDQonNPE");
    nizi[104] = nizi[49];
    nizi[105] = nizi[88];
    izdelaj(nizi, 106, "KFeXVASV2ILlUdb63");
    nizi[107] = nizi[49];
    izdelaj(nizi, 108, "4KuNSgsG1sUOAnULqcV9yCYSRGi8JaszPX6Sel8yz");
    izdelaj(nizi, 109, "eWxrAFQZSAwdvEx0zglVuu2Qa2rWLCcQ6jgVCWSPFU122xYCLuaENlNW5PpdcR");
    nizi[110] = nizi[97];
    nizi[111] = nizi[78];
    nizi[112] = nizi[7];
    nizi[113] = nizi[27];
    nizi[114] = nizi[88];
    nizi[115] = nizi[84];
    izdelaj(nizi, 116, "hbGfMNMHXXFqUFXBTrnKJZXZa_mZwjoq1d5q");
    izdelaj(nizi, 117, "smpqE6j8JBZmr4EguJkYEhZRXmUVAcMAUpGjb0CSRTRDi2TFE6Cryn9yMxaKGQdTrd941A0Zv9Jc9LzZ4x0eRVq6J4s_O9gtJn");
    izdelaj(nizi, 118, "aOWbMNC99kiKjieDuap01fN5oKwA");
    izdelaj(nizi, 119, "hbGfMNMHXXFqUFXBTrnKJZXZa_mZwjoq1d5q");
    izdelaj(nizi, 120, "HuyV");
    nizi[121] = nizi[26];
    nizi[122] = nizi[38];
    izdelaj(nizi, 123, "qGOR0mQW7qF");
    izdelaj(nizi, 124, "TdPIW1ATWjRZs3vy2YpjkIb6JIrQnf5sCHGQSX02trPCrtGI7MXvL3rxzMBAIN_iuStVVA_cIQ");
    nizi[125] = nizi[82];
    nizi[126] = nizi[15];
    izdelaj(nizi, 127, "Rym06h1LipcEjIl");
    nizi[128] = nizi[40];
    nizi[129] = nizi[120];
    nizi[130] = nizi[76];
    izdelaj(nizi, 131, "6w5PU02WtluYaKv5N9v8RAvhrki9TEu7XWy29lwrwYGrl3apct0wLLL_gXhowAfOk8e");
    nizi[132] = nizi[35];
    nizi[133] = nizi[84];
    izdelaj(nizi, 134, "KFeXVASV2ILlUdb63");
    nizi[135] = nizi[108];
    nizi[136] = nizi[72];
    nizi[137] = nizi[99];
    izdelaj(nizi, 138, "Slszq_zOD_EfV6lTrowjlHMP37HH5sfE9fxjeLSojzvUHMZmD47SVn9tVXm3tyyVKaF4UtyVcehVsi8Aqj");
    izdelaj(nizi, 139, "_9ShXUCAYfYbIaEyppNaBgSROBtjSazMarQEqYFsqxssrrdsJUwPHr2EIfar5OUHbUU");
    izdelaj(nizi, 140, "qGOR0mQW7qF");
    izdelaj(nizi, 141, "Sf9MuCS19CquZc5fT89xEV75KvdaihDnRBWKql8niccyLgKw4");
    izdelaj(nizi, 142, "zrh0k9L2AfWd4wiauU7eD86hV");
    izdelaj(nizi, 143, "XPDzc5WTkNE3VzCtizDpddMMtEqCzVsdHuPdu7Qg7QMIPoPb6yYNQBfGuhuLxVG7Fe4D7KuI82WdvUC_MtkCZtTxfjGrRiwq");
    nizi[144] = nizi[76];
    izdelaj(nizi, 145, "hbGfMNMHXXFqUFXBTrnKJZXZa_mZwjoq1d5q");
    nizi[146] = nizi[103];
    nizi[147] = nizi[103];
    nizi[148] = nizi[41];
    izdelaj(nizi, 149, "3e8O0BwyCHMK1KtxBoLH");
    izdelaj(nizi, 150, "gsAvdARWko9En");
    izdelaj(nizi, 151, "HuyV");
    nizi[152] = nizi[133];
    izdelaj(nizi, 153, "Zsvv");
    nizi[154] = nizi[60];
    nizi[155] = nizi[125];
    izdelaj(nizi, 156, "KXcFKaTOjOEKP3cyrNUn2P18JwCa3A9BmXyHD3Dzo8L2iyoVqaGCUS4ffxtWKeoFTOx");
    izdelaj(nizi, 157, "ixWIKzPIuGKVCcxYwWbtYfYOC37E0RtMnhzY80H0w1b1dXJHj2ZjgAnQGi7Jv_bQ");
    izdelaj(nizi, 158, "xBxngPlHBsrHrBaLONk6AcFhcKhAmD3vnyKlgUtEYmrHTAx4RJETgQAqdE6GdvwZNXMqkE5o_D1svREAVFFEE0Bbgri");
    nizi[159] = nizi[42];
    nizi[160] = nizi[1];
    izdelaj(nizi, 161, "XPDzc5WTkNE3VzCtizDpddMMtEqCzVsdHuPdu7Qg7QMIPoPb6yYNQBfGuhuLxVG7Fe4D7KuI82WdvUC_MtkCZtTxfjGrRiwq");
    izdelaj(nizi, 162, "lNrgtDekgJcSEJo07SXoLGbAS56GObWuwOdxLHwUQLAhYzP2i6N59");
    izdelaj(nizi, 163, "RjOs69VTfp4so53EX2YpvKfrKCRont8xE9ORRcIQy_H9W7O7U4h46ihU95u7NodAuSeCPqKGSOOjUCpRImpZH4");
    nizi[164] = nizi[25];
    nizi[165] = nizi[143];
    nizi[166] = nizi[139];
    izdelaj(nizi, 167, "rnuPmatDXCvqI0LjFuHZOJ93zPijpFZq5Gix5Oxig");

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
