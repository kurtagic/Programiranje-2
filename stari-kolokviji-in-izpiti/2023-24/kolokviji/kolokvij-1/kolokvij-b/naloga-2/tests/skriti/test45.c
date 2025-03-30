
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
    int n = 210;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "01EtJwiyYtsyFwQzq89AvluTAzGbYEmBsYVuZMXIQkHNzO63xPULSQQfEslelB8VLgU8gyUws8j9PYcPBF9J");
    nizi[1] = nizi[0];
    nizi[2] = nizi[0];
    nizi[3] = nizi[1];
    izdelaj(nizi, 4, "QnyohPtk1q1bbGjiVZU3P");
    izdelaj(nizi, 5, "ZMKP8gYYELT4SlCsP_Z2V_5Svdn0z1RWOmu0YZftHhNY2FfvUKsj_bpb3wR7Zbj4KIgBjhCh");
    nizi[6] = nizi[3];
    izdelaj(nizi, 7, "1wKIbDCtUh3NbjMSUrr4QZmnN5v8b_vYVaGaC3w6hg");
    izdelaj(nizi, 8, "Vldf2IBTsGO8ZrMi9Z3UDvWKaIePVWptRElKFUTlnTj6isift");
    nizi[9] = nizi[0];
    izdelaj(nizi, 10, "bkv2oseDLRAqaNEQ2aT1AT7q6yJITfRgxhbzw65I");
    nizi[11] = nizi[2];
    nizi[12] = nizi[3];
    izdelaj(nizi, 13, "tqy_Tjf2IkpyfYLkBwf9LsKi0tgYTqkOgSGnMqivEUA39rjMtKAykJQQRU0zsAB");
    izdelaj(nizi, 14, "HvG1IN63x3vbU3");
    nizi[15] = nizi[6];
    izdelaj(nizi, 16, "9b4FBicOJWWWzNopK6TNuMelHa1WMAy43wN_zhwTgG90uxQhki17DhIB_c3NX57IyhNd");
    izdelaj(nizi, 17, "1ilgyaSDoPGHCml2loXocmQpLVRnNQ2vLObbCRg3RfuSkfeItZczwrjmCziSl3YnRchSeqDj62EA");
    nizi[18] = nizi[7];
    nizi[19] = nizi[8];
    nizi[20] = nizi[7];
    nizi[21] = nizi[2];
    izdelaj(nizi, 22, "efFaExt9SbdL3KocZDm_UJnpAi5dnm_vkGY_iBy");
    nizi[23] = nizi[4];
    izdelaj(nizi, 24, "821yjrCdOliktRETwYEEnfqmih3yze5qekYpE5KXhFRKW0y2Ec602YD9CXUH0AM_QfsSpH2BzG2mt");
    izdelaj(nizi, 25, "e");
    izdelaj(nizi, 26, "ApcRgeZUFklFgFc6pqoIohkTtZ");
    nizi[27] = nizi[8];
    izdelaj(nizi, 28, "o9kK4mkpKQSJ69zMTN55RcrlP20a_RGyyVcaOyDIxQ8uV7Idtq");
    nizi[29] = nizi[12];
    nizi[30] = nizi[7];
    nizi[31] = nizi[17];
    izdelaj(nizi, 32, "rkHdxSAHzrm9IalWwqoNVpsAMkNGgR6JUodfUcuMZjS7yTj1736aRMz54C9CM06lBL7JQk9k7hjDM");
    izdelaj(nizi, 33, "JnI");
    izdelaj(nizi, 34, "U8jENA1xRZxm5QxqAFojF3felo6Q8warr7BEJwTiosfjJI3kivOjWmwqSk9x_cqDvgj_5dbsiyGsu4JO");
    izdelaj(nizi, 35, "MZU7x_6nRGfAv_n8uPCLlvIB7UYMGCHhn4npegEVrf2CYhX3LHYWcCtbiyMRD_6VrNMFi00fII9z1DgTth");
    izdelaj(nizi, 36, "2_hX94_HixmYXA2rb_bADpbXSYYlGHPJZR32vzQvw7cY148B9VH3i7J");
    nizi[37] = nizi[34];
    izdelaj(nizi, 38, "0qPmoOlZM8GDXR5Yi8N4k2t8BiS_SLSwr1In13t9TnLtDM8dGS87fv0bbgr7qw5xcuOsRH8oGikIEpExIsS9vcmqOX");
    nizi[39] = nizi[15];
    izdelaj(nizi, 40, "V6lp4ef812NxsUtPNwS0H0uuGmCq8fWnKgYxz7zDw15BYCCJYS");
    nizi[41] = nizi[11];
    nizi[42] = nizi[37];
    nizi[43] = nizi[31];
    nizi[44] = nizi[12];
    izdelaj(nizi, 45, "qNEui1wEFtDJubpnhB3s8R8wfX1UnjKZaZeDVPpAUzXD4ENZPBllYaQx");
    izdelaj(nizi, 46, "uBVVUyGiwAYrKLkgLjaB_DIXA7Ce2MyAMK2Pey5WGg4NIauxvGZf0LvMPaMm1SNiR2PfRsvJ1MtiFHs");
    izdelaj(nizi, 47, "hz0yNZPfv");
    nizi[48] = nizi[38];
    izdelaj(nizi, 49, "ZwbQQRokHWDZBK04fE3YAkWkjfFjKkLS8VdvRA5DJfw0njYxqNPYPAq5deRHN0VwYl4sKOo1Lf5UTA_3");
    izdelaj(nizi, 50, "nZ_nb66SGWJf_bFQHDgmSIld1V9Mgs0DdnOJDaCfFICZyqwqlEBRs8xsYfvr4qTLlg");
    izdelaj(nizi, 51, "nhNSZu0I2JjQvboFD9b0EIgP9LbAOKjdusRDQpwAH7apt_ZeOv");
    nizi[52] = nizi[20];
    izdelaj(nizi, 53, "94nQ5cieikNja1IYHZOT2q9c2xN_5mEFN");
    izdelaj(nizi, 54, "tcZezxva2MfpWKRplSQ8DAs9P30rLGTFiKXX7u2UogZ8GKjYESVhzK5OFyXA4PpvWFoxcotNuH8C");
    izdelaj(nizi, 55, "z3FWRd");
    nizi[56] = nizi[35];
    izdelaj(nizi, 57, "3oKt9swwxRRBhb3wGSxLeIlVcsxvMzCakIo__qzsozp4LT9F3FGjxT9sikGg8dbApncyeJwmhSrSby2E0aclj2");
    izdelaj(nizi, 58, "UrVVjq0iZuidI0pbgzDm0BEqIvUa48UUHbr50k6KYQz5DbsVM2jrL2PutdrJX97GgbMSwBU49iunXhjBYYl2wHCDLGgF");
    izdelaj(nizi, 59, "5gQR5HOQj0x3Wdsltunzu970BRGvDrWCRclXfCNNN4Pb");
    izdelaj(nizi, 60, "YxLO3JRmsU");
    izdelaj(nizi, 61, "JRFmSVAgSOmrrGWClNpLmDsEQqWRcYFRjGUZjTWHEEoDoMw3ayUCCaqgGR4oYCu7MGm");
    nizi[62] = nizi[8];
    izdelaj(nizi, 63, "lWdYRDm");
    nizi[64] = nizi[5];
    nizi[65] = nizi[17];
    nizi[66] = nizi[23];
    nizi[67] = nizi[32];
    izdelaj(nizi, 68, "SNGqAbRywqAOGSIunuUUhTq");
    nizi[69] = nizi[36];
    nizi[70] = nizi[50];
    nizi[71] = nizi[25];
    nizi[72] = nizi[36];
    izdelaj(nizi, 73, "vsU_NzpEUVgk5RaSqr4LPRaC7ZpeDHgJ8w57bEFSdzRBUYEZtqLmHXgVxEJh1ESPJpQOLtnshurbG3on5TYGh");
    nizi[74] = nizi[37];
    izdelaj(nizi, 75, "J941ctHSGq7cFdDsKruSGhEMLwv04kj6u");
    nizi[76] = nizi[10];
    izdelaj(nizi, 77, "ClBajFZ4xbXGOqkXOg7nHEKrYI18i1bMQQYCTl6gTg");
    nizi[78] = nizi[75];
    izdelaj(nizi, 79, "eTaJV7UmYXdICwDhepkvJywUf1cLoz8wcjyGcwbHAwhtUewnj5");
    nizi[80] = nizi[26];
    nizi[81] = nizi[62];
    nizi[82] = nizi[18];
    izdelaj(nizi, 83, "wbST5pYEobIIHvO0");
    izdelaj(nizi, 84, "VqyH4qzvLvb65qgV4T6Zr_pM62dERaTMCq5B");
    izdelaj(nizi, 85, "xP8VFoIV7Cr1A5dk8W171JQQRlo5IlSUdWYcDL539i44MxWleznWH");
    izdelaj(nizi, 86, "iDEpciV2vy9A96");
    nizi[87] = nizi[40];
    nizi[88] = nizi[14];
    nizi[89] = nizi[16];
    nizi[90] = nizi[16];
    izdelaj(nizi, 91, "rUo6kfh8x32qafdRJCBPOAvu70QAVk0GoDbNHSGy0B3hvZccSVzfOdSrqP_t4sZM7qlXXmnqHSKP3uUhwzjGQ6uCdoM9B");
    izdelaj(nizi, 92, "oZ3aBSngwZz2f0KqkeJ1P2L0OcjjBev75zVZaTeRtLMvqdAJQCstjeCLkvwWMgZyW_");
    nizi[93] = nizi[19];
    izdelaj(nizi, 94, "6VDm96jVbHPCb25F3rsG1V6JwEIoC1r7DzFlYQzyffynWt9O97ucBVy9ypAR2EWbI3XZeFKyY");
    izdelaj(nizi, 95, "9RLFKXhewFiyNOaULO6YByZia0r75APuFt7nGye5Kh96h3jAavOpLFdmCaHJSO74R");
    nizi[96] = nizi[51];
    izdelaj(nizi, 97, "mvdtelyBuVpbb20ijrBup0loSlByRdPEpqR9BID8QNtyiPLAjxNLXvhqF");
    izdelaj(nizi, 98, "KwHMVrbRHCL2oJsuW0ahQxiLZF0SknVgUrRiXUzhfehz1AVomTt4n46oH03izvAZpBtMwdJTlyyjj6Ypj4xqAGZnmFU");
    izdelaj(nizi, 99, "IVKD8bY7YOaBdZGT8H6uHlgkNkvu7BZG88PQRF");
    nizi[100] = nizi[24];
    nizi[101] = nizi[31];
    izdelaj(nizi, 102, "3V_rB8_eOUOx4ctKzJbqMA5IyH");
    nizi[103] = nizi[52];
    izdelaj(nizi, 104, "es6BjYqsbSxRIFYMmtygm2LIRjAkwtYxkYtV2_uigbh9HkJW4arClt8gZ2Ttq");
    nizi[105] = nizi[67];
    nizi[106] = nizi[30];
    nizi[107] = nizi[14];
    nizi[108] = nizi[2];
    izdelaj(nizi, 109, "42dZXx4h85p3Yx699Hqwm7");
    nizi[110] = nizi[107];
    nizi[111] = nizi[81];
    izdelaj(nizi, 112, "C2o3HliXPRSSeM6pb7do7bYM");
    izdelaj(nizi, 113, "X8ouBR1HCGMd7JZ7");
    izdelaj(nizi, 114, "XZ1JWSWx8g7xScGBjxfj5vCl");
    izdelaj(nizi, 115, "iUY55KQMZG9wtqa094iWmaHsPOYAzg");
    izdelaj(nizi, 116, "DvG77iUhXcuok38g5l");
    nizi[117] = nizi[39];
    nizi[118] = nizi[96];
    nizi[119] = nizi[16];
    izdelaj(nizi, 120, "dT42V6uHE6qNjxSl6O_Kxpv1TYpl0WXmMoYH4xHnOb0cAAefpZEaNHwC");
    izdelaj(nizi, 121, "dcrqh4qVlaWhEw0GLR66_fAMFvtoUhmn");
    nizi[122] = nizi[20];
    nizi[123] = nizi[46];
    nizi[124] = nizi[25];
    nizi[125] = nizi[43];
    izdelaj(nizi, 126, "loruYiG4Jvk9XL1pezupgXwlIMfUsTEi2Ofhmk1iPhAnTK4qMRT5_d8rX3l9xc66sMNrNFv7gC");
    nizi[127] = nizi[105];
    nizi[128] = nizi[10];
    izdelaj(nizi, 129, "WdO3fihqTRA76sx2YD_LPcDKTYYAqB4dTirD_aT0fOFbXJThMYMCIPBsvMpqE9Q");
    nizi[130] = nizi[87];
    nizi[131] = nizi[2];
    nizi[132] = nizi[117];
    nizi[133] = nizi[110];
    nizi[134] = nizi[65];
    nizi[135] = nizi[71];
    nizi[136] = nizi[79];
    nizi[137] = nizi[3];
    nizi[138] = nizi[77];
    nizi[139] = nizi[114];
    izdelaj(nizi, 140, "r");
    izdelaj(nizi, 141, "WBkS9DOUFki4ngSifZ5jFQx7IoOUT3gIKnILqcaHRb3aegpoVGXV");
    izdelaj(nizi, 142, "6F9mieHFTT3lquyG4MBTewJhajDV9A2kmays_b6M");
    nizi[143] = nizi[43];
    izdelaj(nizi, 144, "rEC31PDV5WwBZUe6F2a");
    nizi[145] = nizi[104];
    nizi[146] = nizi[7];
    izdelaj(nizi, 147, "AumeLnMrz6PsOnqkDiBDRZ_bp7kBFPlze30dzvbZaFErcwCPPsbVol2UhdaC0D4Qo_wVef");
    izdelaj(nizi, 148, "WTLgcFwV4whWGFMwJ0HHbYpAa152VUpJ6VRxXY7NxrKkrhQf2gJ1TvtEnyIQND4QFhiaRBdLtuUbBY");
    nizi[149] = nizi[71];
    izdelaj(nizi, 150, "Zu8RO_steah_NA8IYvLCfxUIG8tWK1CFvb2C");
    nizi[151] = nizi[119];
    izdelaj(nizi, 152, "1YXeFnZHkYHAq0x6cTMqSsWJtQI8VMYv9SorKgWL5c6");
    nizi[153] = nizi[91];
    izdelaj(nizi, 154, "8AaAZywrRX6LV9Bveaas8OZg8edn3JKKFO8N04ewBsRKLWE7nFIZiU7Te6YZct2tZtPlWkkEK8BuEjjZl3iWOq1lFTaTGK");
    izdelaj(nizi, 155, "yeejKEPLxAKipI");
    izdelaj(nizi, 156, "3gDvfpqoiwKYVE5bs9ow5PADv90HSSCuMRbsEg8YcxfMakW7Y8Ey4PQDdIuCCKJH9z8_W");
    izdelaj(nizi, 157, "L78_ma89tZfaftdg");
    nizi[158] = nizi[94];
    nizi[159] = nizi[61];
    izdelaj(nizi, 160, "6uXdJA2bRIzoMWa7854R1YnNgsfQeqzLB1HNJY4ePzOnW6W8kPafaYjV_nHqFtSdAYzZ9qgDEuRRoHLGRGZ7qBk8mFoy");
    nizi[161] = nizi[126];
    izdelaj(nizi, 162, "OtF8POdhvJzH7jmaLjgWGIypif_LD0d_e9KV");
    izdelaj(nizi, 163, "bl7yhTVRrPW5C0MbaTzuJEdM0LBxCBvswhFBZxeaAk57urkpbnOAzbmj_yfjJJlezhbcgBEaX0v3bx_7jd1z0cXsn");
    izdelaj(nizi, 164, "ZwiwefHa6LO30ECxW91H7NoRq1MaEpTW9KK2qlt7NhOV9n5HLq_6XkkR1qbRwGu2lxVOC404NS6HKnCot9xp4jUh0aw_z9IFEQGb");
    nizi[165] = nizi[42];
    izdelaj(nizi, 166, "yQLevmHDU3b_Lq1crvvEjF");
    nizi[167] = nizi[89];
    nizi[168] = nizi[165];
    izdelaj(nizi, 169, "831kwxW5cIF7Tn_Nol2fb7pQVbF8RNCgIRyv_NNl4CxjK6wm6PRh4Owy1BK6qLGqMYpIU3cye99Nem7XsQYV8EykQGDuGhahyQB");
    izdelaj(nizi, 170, "E2jxhn8Etxb9Kt6Myjgis2AY1yu5YEFdtOvucRp");
    izdelaj(nizi, 171, "fXrle4Foyw6m4VhL9rNnviyGI3ZrhpbGAc_3Dn");
    izdelaj(nizi, 172, "lt9D40sRPDkmwG1fCg0AWtdVaY4Zb0");
    izdelaj(nizi, 173, "YM0ol4QyNroduPGiI7onVRnB8W1NjTyCmNVmzzhfbx430hsm7HBmVQE_llDfsHxvOEn15g0IIeshTFH19Zb9LkOk9");
    izdelaj(nizi, 174, "j");
    izdelaj(nizi, 175, "dGvxVtsq_4VGtWndK0mEGeZXG1C");
    izdelaj(nizi, 176, "NpuUtcFBoxuHWbHI64w8Nz83j75Rx17eMEGGQZ_KmhPs5wtbkyitGf0fErav56y4GH7fjWwJn6Uc0r253pSAa3qFQ8bQF9R4");
    nizi[177] = nizi[176];
    izdelaj(nizi, 178, "rG_l3oQxZi2SGBw7uKnVu4Uj8SkraGc9y303paY2");
    nizi[179] = nizi[13];
    nizi[180] = nizi[82];
    izdelaj(nizi, 181, "aAkBt1SsRU0mqk_1IAUFXCsfS9oCA4xwZH3sXF6_CxQ3xQQQL8jbim20E");
    nizi[182] = nizi[80];
    nizi[183] = nizi[37];
    izdelaj(nizi, 184, "TO");
    nizi[185] = nizi[31];
    nizi[186] = nizi[66];
    izdelaj(nizi, 187, "vllkUrlKz7pG0ulHt2tN_86rQmmlIrsWtzK2bqQMkXN7uVmKLwluT5f47SfgQmaDpJRx2rfhri_DSc9kCrmJpNUPN87G");
    izdelaj(nizi, 188, "nLUFUcEDU1lTXUzUChuB4nzAOZkCcqEQma5LnFOKj7KtaKrPit3vFiSsnE3q2RUJ0PXm_gukziiwPll9sECl4FM4Ovz");
    izdelaj(nizi, 189, "zg05IO37mZeYgTF3v72hP4JL7rJ3V41Sg86IiGFV7hyWO1fiVgGk1CR33A9di_S4YqPhEQMKgifCijgxeaDSJZnLg6y_");
    izdelaj(nizi, 190, "Uuq5Ovc1NoMXqO7SVPAcjCKFsj6nOLeKJ");
    nizi[191] = nizi[59];
    nizi[192] = nizi[58];
    izdelaj(nizi, 193, "D1rQ7VM9C0nIIkbYdXwBJBkjZvEGUGbxakP");
    izdelaj(nizi, 194, "xQxw9CFsIB8Bp");
    izdelaj(nizi, 195, "l");
    nizi[196] = nizi[150];
    nizi[197] = nizi[35];
    izdelaj(nizi, 198, "JFjEtPzt20OWB8O4gp84Cee__T091L4XVYsVJQFBRH4aykM74KqxwUkRYw459jVNEMPPdTmxGS3AwulyU0");
    izdelaj(nizi, 199, "TKmzBSckWsujpQa8aNPb47FLzrT");
    izdelaj(nizi, 200, "UM2phUaypVqwoEdU9r_HpZYeISlOO_otcywvwmYvGVUIwcbCGGi1KxICXZLT24cujWbt0Ed9PIh037W1Jw3V2jPwc3");
    izdelaj(nizi, 201, "D4Zd7jSkFSkFIULdleJ95tbMP8zSjU52qfY_JctBwTCsJFIKw4IgsTTdBzQOVKOGUmW6GLEwNTodSHBseth2wwwBIry");
    izdelaj(nizi, 202, "CPH0Jk");
    izdelaj(nizi, 203, "GetkxnF_CMla5nz8glF61r_JzvRxQBTnZEeaxu6vpziogRlxUG7qGL5GyedDS_qheV8Wdhx0ksAbdT_JUXDEKWOSGQ");
    izdelaj(nizi, 204, "Qks_otK2UZyl9GPqzaidQmZCT9iLExqD2Jeup7UQZHIdj7QuQ72kRwzUfSTKr0h69IIE3Pacd07TatK4QLLNCzB5mkzVN");
    nizi[205] = nizi[16];
    nizi[206] = nizi[136];
    izdelaj(nizi, 207, "_0Cq9YJFHq_8NIFe7xUf0AxmAxrN7kqIMQClSoerAOKR");
    izdelaj(nizi, 208, "HdY30QhT9S4R5DY4m0udYbdn1FHEZKAttQpuHr3kzp3_yJUY2GKLGlnW5yxpYtl7sNlsF2fzVnZ5vrqq2nzH1fzmWgV08WXcs");
    nizi[209] = nizi[119];

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
