
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
    int n = 161;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "D4Zd7jSkFSkFIULdleJ95tbMP8zSjU52qfY_JctBwTCsJFIKw4IgsTTdBzQOVKOGUmW6GLEwNTodSHBseth2wwwBIry");
    nizi[1] = nizi[0];
    izdelaj(nizi, 2, "H4HgDzCzlN6ONgaRPl0nFmavQPSVeiEpI9tXvsKNpZYQAoz5gHJZWc");
    nizi[3] = nizi[2];
    izdelaj(nizi, 4, "LrX8E7ztI0l1LYXheUp1eUlZC");
    nizi[5] = nizi[1];
    izdelaj(nizi, 6, "aoldKk7gbjoI4P9zuSXrB8huuV9LLyvbLykJDQf2VvDoB_7sQN_Igl3rx6CjOLQDWaRyGQ");
    nizi[7] = nizi[4];
    izdelaj(nizi, 8, "2aMHgeO4j2M17wkIQUTQZs4LTyRmMU_pzgmTmuGXlN5MDUHDSd");
    nizi[9] = nizi[5];
    nizi[10] = nizi[1];
    nizi[11] = nizi[9];
    izdelaj(nizi, 12, "UrX_HpbF72XLRp");
    nizi[13] = nizi[0];
    izdelaj(nizi, 14, "RvmryVPr006S8BjmNBz74M98efEdwzd57by_bD7VIJsLxM8btxaMX2t");
    nizi[15] = nizi[13];
    nizi[16] = nizi[7];
    izdelaj(nizi, 17, "1RHE5CK2vgUoI9GS5NJKtiH4nww1a9TWKYNam");
    nizi[18] = nizi[12];
    nizi[19] = nizi[4];
    nizi[20] = nizi[3];
    nizi[21] = nizi[19];
    izdelaj(nizi, 22, "YD3VKRnR5MAL82A0TUxxpPfdJ1t9u5rUAStqIWcBWi0ZztOGVG2F");
    nizi[23] = nizi[4];
    nizi[24] = nizi[21];
    nizi[25] = nizi[3];
    nizi[26] = nizi[18];
    izdelaj(nizi, 27, "QImuWbrUQUObLmLDBpWVHffCxbkgJXdGbupPRx7dwa9m6qcwlMrztCHAnjXPjBD8ZueQVSGPFyi_AFAot1d7C");
    nizi[28] = nizi[5];
    nizi[29] = nizi[26];
    nizi[30] = nizi[28];
    nizi[31] = nizi[3];
    izdelaj(nizi, 32, "_P5ToVwv2vHuXyEKVOQrSWFWs");
    izdelaj(nizi, 33, "05iZM8pRueSwwPbWOgPwAhRZJcjCoqU6Ho6ttUIELomODuYdwzmqmd4knYxpnCdTVyFQbFyA");
    nizi[34] = nizi[8];
    izdelaj(nizi, 35, "auNSXzlBBmjS7G83Z");
    nizi[36] = nizi[18];
    izdelaj(nizi, 37, "HqtLuJiL47wP8Jxe9ngPfjOe6FTQbvcLuEXH70rXuVa4RpoUy1Kpklke8Or1bV4zxPr2FNT");
    izdelaj(nizi, 38, "ejvjq8rxo2h0ancRpwrEyGu4Yba5HmeIWF_DXVwa2ij99");
    nizi[39] = nizi[17];
    izdelaj(nizi, 40, "rflHyVm1VjVXE3WTku2WS7FMDKkhx01vUBrd0MPKWop5b6qxIbqroRbinyI9krT3ETOTWHzp7ojcXLxKLBRqCf5wz7Z___IG");
    nizi[41] = nizi[0];
    izdelaj(nizi, 42, "T7Dh4agoK9KGRVTq1nv7E3b8P_O4OcFh0PHLZfjZa");
    izdelaj(nizi, 43, "zXrEoBmBjt3u_Sr1W19MJdLCBbumTkj3gApXNn6Zjq2AFwCIwP5");
    izdelaj(nizi, 44, "JFjEtPzt20OWB8O4gp84Cee__T091L4XVYsVJQFBRH4aykM74KqxwUkRYw459jVNEMPPdTmxGS3AwulyU0");
    nizi[45] = nizi[2];
    izdelaj(nizi, 46, "ccwDO5w1cMEhVKR9Q2OQebFP_zJHunmamUyb7DWTk0j2O_LJOiXG2Tyob9yqsVHMIUtc7K3ssLoDw_ndvvd");
    nizi[47] = nizi[14];
    izdelaj(nizi, 48, "HuyV");
    izdelaj(nizi, 49, "20F2R");
    izdelaj(nizi, 50, "iRwIgDqxzvsqGsy3ytssmLSyACtufE1Hzr9LPGz_SDnfSm23oyVh6");
    nizi[51] = nizi[43];
    nizi[52] = nizi[33];
    izdelaj(nizi, 53, "UxGH8Ds7h5rGxnE1AnwMxEgtZNneSNsZIYTN9VR2nRZwXI3OMPOdzoVWxxBcqjOQXz4dmLNYcw8ZMvVK6eGHI8oEAHbTY8NaaSi");
    izdelaj(nizi, 54, "tKYs0SR0gUwomvsPqRE07BYfqerHWIoXy1QCQjx3a");
    nizi[55] = nizi[28];
    nizi[56] = nizi[51];
    nizi[57] = nizi[36];
    nizi[58] = nizi[38];
    izdelaj(nizi, 59, "H1PYYLuXu423ZMwQjFrznqvk2i3wctJM0vh1bmgZqeOJL6fPBYlkhL1PfopNhMxwGBVB43dRtPZGTxYbi8sCrwuRaenLz");
    nizi[60] = nizi[30];
    nizi[61] = nizi[22];
    izdelaj(nizi, 62, "WVI52Tcz5g5XPqYM7VfPNd9xQWTPD72Lu0Pgxa");
    nizi[63] = nizi[36];
    nizi[64] = nizi[58];
    izdelaj(nizi, 65, "DM2ui6hTlAjSt_9hH4OA3cf564rMf83ECG2p6FuQk6E46y");
    nizi[66] = nizi[41];
    izdelaj(nizi, 67, "kPsRtuZ3PmVwj46L88a13ERReW54tu8ppJrKLqwSvLQhSlOBFRxuUqA1NRzQP_1LEzVEo8tHH_TShEZdzDZpr4rrcsqp0k4C");
    nizi[68] = nizi[7];
    izdelaj(nizi, 69, "DisvgaZjLb3WEYzO2xgVhus1eYyQAWvkQE4DtWhGOHmT63_MLPp");
    izdelaj(nizi, 70, "MJqljrAIYuMBME34H0RjuduLK9GvVZielRYWYEFvkJ1NMhYysqZhrMtMRg");
    nizi[71] = nizi[26];
    izdelaj(nizi, 72, "UuJAjRdIPqAVGNJJlge5");
    nizi[73] = nizi[27];
    nizi[74] = nizi[38];
    izdelaj(nizi, 75, "nVvUMv5ZWLsYs7E7idkCvHnEwM19qdmkUBy2nDlx7ImSd4nUWvZNwWSym2q6eX_B8zK4hJBAahaydv4roOXkptU1rdOj1");
    izdelaj(nizi, 76, "jwnZb1BW2dq94G__TMe59FmoKIZBhUxCoh3Cuz_pIBcNNIO5usuVLsiTYt674xA2SkO");
    izdelaj(nizi, 77, "K6J0jHvPksetu12br7xEFqHQOyFZBr1Y_964LrnzdaAmPvHgBFNG5VajI9qXe54DvezUepefb9g59fgXqgNfTlT");
    nizi[78] = nizi[50];
    izdelaj(nizi, 79, "X57CDyzRKOIIWVgQsq6JCIcEpRk6wX_0jUA7Xe9mqEt4ne3ZiMOR8SVOh");
    izdelaj(nizi, 80, "a");
    nizi[81] = nizi[62];
    izdelaj(nizi, 82, "MbDQCWSmStAY");
    nizi[83] = nizi[35];
    nizi[84] = nizi[56];
    izdelaj(nizi, 85, "1mXBL2irkdaQZsSuweFhpujPcRwt75D0DbcsFnByu4YBKvi0gxc7L_NLsWio9zJJmBkXU");
    nizi[86] = nizi[47];
    izdelaj(nizi, 87, "VoQpjbRdwyLvTNdMTKeLDyrmVxkzNqiQ7wJj4BTdAFqXrNjHTwMWiclMD8Xq8DxQQoCw");
    izdelaj(nizi, 88, "bxyqqU3GEjDth634xCqQ1Ir273MpImAN4wDW0LkgjfHiLZ5sTyrUB0QME8t");
    izdelaj(nizi, 89, "I7YZyjtFiKX5izWSXFztOnabeOXStd310xc7zIS2BSj4QaBMVur");
    izdelaj(nizi, 90, "x6Id8JFlBTigZo_YYG1C8yNd3a5SrkEr2vV26vXx3SY1rtSmfqt3dVsPAhIakkMVC_PUhOaUukTADaGL");
    izdelaj(nizi, 91, "Oxrt509F6mDaYWG9GW");
    izdelaj(nizi, 92, "eWxrAFQZSAwdvEx0zglVuu2Qa2rWLCcQ6jgVCWSPFU122xYCLuaENlNW5PpdcR");
    izdelaj(nizi, 93, "LfBbK7XbwVve6D3PNFKy_OCqDQFCB7gXQ0_9AYA7psmulnRMt_pNMMfHmJ8AgvnMTMiwC7tGTaT3wP9O6DuyUaBxWbQpfN");
    izdelaj(nizi, 94, "h8Gx2Y2fNnKdGjZgrTHcKQDU41s_GEZBk6oEBShBfAVq0IOHBn485m");
    izdelaj(nizi, 95, "8_BOImDlno8TU05_uQsSPm4rqyOITmOSo6Y69dsnE8AlaGdX3Fjgv6EOt7iLmEJiMOGYnju3R_L2");
    nizi[96] = nizi[84];
    izdelaj(nizi, 97, "PMq_OgLwtMpY1EfQ8PLr1upN9bT");
    izdelaj(nizi, 98, "09IKjGxsznI5d6sNsY");
    izdelaj(nizi, 99, "QYcfpnXCvARgGmsDsyRkW0SrbG09JH39cZzRAAUYOffkY_GowwTNbIfYVfM685wZWiK2zKuMVLaA_sDqfa0eo");
    izdelaj(nizi, 100, "C");
    izdelaj(nizi, 101, "wLjb2wOgCU50YB8fCp3MU68g51bUuzp7DCXLhNRCsP0eQ0wboXg2a07ZiOso");
    izdelaj(nizi, 102, "Mgo8sLS");
    nizi[103] = nizi[28];
    nizi[104] = nizi[43];
    nizi[105] = nizi[14];
    nizi[106] = nizi[46];
    izdelaj(nizi, 107, "1hAWvRPDkmCQV5U_jvzs4IFsto_LibS_ZlygdiEPlCukUuTGuS");
    izdelaj(nizi, 108, "znM72Z_NaqCKhLEl43fHV_SCHCE0q");
    izdelaj(nizi, 109, "DMF2YHO0SXxgtMzQpXOF1EpZWM2QGXmln1q");
    izdelaj(nizi, 110, "0C4uUOKyu2oON7edpyEqCvDm2K4GoEJ0yoeVTKZUht6Covz_nU06cxIEuLlvznGV5UFmihfZ4cPQTS2k7psN");
    nizi[111] = nizi[60];
    izdelaj(nizi, 112, "WSpJicVs4Oo8IAnLCia800YB58mRpctuw4ZquYaFTkFptTVsfooh");
    izdelaj(nizi, 113, "0");
    izdelaj(nizi, 114, "URY9z5vNmRVUd4p2wpcDcP7uLtByjsOCxCLFlpkjJ");
    nizi[115] = nizi[84];
    izdelaj(nizi, 116, "7qmi5UBMr8OwgAjYk8m6cZjbReXSwQRLSagfccRM52efUfEAP2imCl0OMn7tLHsQtR1rDBEsTbzTirWXHQNKzLaS");
    izdelaj(nizi, 117, "7Yj9K4OA2_JKwXMOB2U9GQOSGRPVi9al");
    nizi[118] = nizi[96];
    nizi[119] = nizi[42];
    izdelaj(nizi, 120, "rhDM1p65RLjNLpYrnrFkNY_cY4xf821t");
    nizi[121] = nizi[4];
    izdelaj(nizi, 122, "uGqYER8yZq48YBud2ak4NKISCEBfu6Nno5m_fXnH9JKjuo4GGWJ");
    izdelaj(nizi, 123, "KQGM7IU9xVWruK65CJt2_4iG2ux_NwZfU");
    nizi[124] = nizi[120];
    izdelaj(nizi, 125, "gVzbIxUmbwhNan7X8AB31cVl_gdfPn2jVpfmhqWHq_LyEkDWXmaNA7iRTMWwmXNab0B_pck0yzzwOLqg1H8YVdB1FXzRDCPixMXb");
    izdelaj(nizi, 126, "KrOyET3NV4ZSTahBqNxx_7pCDRVdtUrhgJb644fASOU653olqpS6pqSdbt27OMGHaJBlsKN7HLmA8ZwIcxo7STKV1sUMonhp5Im7");
    izdelaj(nizi, 127, "ruuf_f8_7t_HebjgNFDGpCssH7pD5GuWb2JZlxM8uG8rP823OaNLmSGcGyzW");
    nizi[128] = nizi[0];
    nizi[129] = nizi[61];
    nizi[130] = nizi[58];
    izdelaj(nizi, 131, "Q5Q");
    izdelaj(nizi, 132, "BerG1lxO23p4BboAeJoK7ooFQEk87JTXyTkCuKYb3QKZZ8qDH_OQs");
    nizi[133] = nizi[19];
    izdelaj(nizi, 134, "lWh_dBb57p06Ekr0Poqy1v3neGGPenA6bz_c5t6dnBpIEkojzeorAorDJZoIYKTs_1");
    izdelaj(nizi, 135, "FplBPIVwQU94S8TdPmnelLi3kNOWKo4gabZtQfAFf0PwpkGUU6ghpmmEFShNFARNsKBUpyVZjmFKvB7FbzpqKzsahN");
    nizi[136] = nizi[69];
    izdelaj(nizi, 137, "yr6vRfzpWqJ");
    nizi[138] = nizi[71];
    nizi[139] = nizi[133];
    nizi[140] = nizi[83];
    nizi[141] = nizi[90];
    izdelaj(nizi, 142, "nFVC3xQ6JlmF7wIeIWltYpnYXla2rtZRzg6_g74kKbR6keXQZB7Fk268pJ9OcFNYplkXGJ45ovUUp7KY");
    izdelaj(nizi, 143, "gwn_ccOG4CBAR3d1qsBWb5z");
    nizi[144] = nizi[114];
    izdelaj(nizi, 145, "h2ZI5NgsbpCIIYyTz7zvHslSmXmuIOlwtCtzSpFgYikL9uQlmby9y6QlPtKEszuDcW2_LCj6Fd49CwwQATj0o4sSOVma76aMqD_");
    izdelaj(nizi, 146, "bXMYIqpnEZdbc4XSkeb2NdnxCjrPBLyJnuqZBX27T8GsM03l64Px3AmTFH190sqX1uRnARRi6fmkNrS3");
    nizi[147] = nizi[112];
    nizi[148] = nizi[84];
    nizi[149] = nizi[65];
    nizi[150] = nizi[113];
    nizi[151] = nizi[8];
    nizi[152] = nizi[72];
    nizi[153] = nizi[21];
    nizi[154] = nizi[31];
    nizi[155] = nizi[5];
    nizi[156] = nizi[91];
    izdelaj(nizi, 157, "YkIFDaIrjzlhoLPgfQxTO_tP7MSyp183UpP2Ga3L_to1Z7jEfqCWosI2pEB77UHD");
    nizi[158] = nizi[141];
    nizi[159] = nizi[77];
    izdelaj(nizi, 160, "NfHvaJUdKaUxcO9bPBfqUNowiAVZzSU68ncaV59WAEinRHv13f");

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
