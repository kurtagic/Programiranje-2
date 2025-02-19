
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
    int n = 205;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[1] = nizi[0];
    izdelaj(nizi, 2, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[3] = nizi[1];
    izdelaj(nizi, 4, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[5] = nizi[4];
    izdelaj(nizi, 6, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    izdelaj(nizi, 7, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[8] = nizi[6];
    izdelaj(nizi, 9, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[10] = nizi[1];
    nizi[11] = nizi[6];
    izdelaj(nizi, 12, "LfWUtfrA");
    izdelaj(nizi, 13, "LfWUtfrA");
    izdelaj(nizi, 14, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    izdelaj(nizi, 15, "nBY3Du74YGNt9mLYgpVFshwhfOo0oFU_gogjRLKkwqKqefDJrfA_vtV9MsSdrGCIITwIdyHKOFEcoXEWHdotmfV2");
    nizi[16] = nizi[7];
    nizi[17] = nizi[14];
    izdelaj(nizi, 18, "pES3lMydg0O4ClYStkvtESuciMuy");
    izdelaj(nizi, 19, "nhgatiKlolzwR1ZzuvFbyWjOL0U5sdKqIJk0MsN9La67rdXCm8pMGIzVhulb3kJpxD0nFlYsQrEjHeWk1BZEoUv");
    izdelaj(nizi, 20, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    izdelaj(nizi, 21, "1si5etqd2CnLh0BLGNjHPzv9szgBBpHmeIfb3isppKD83BspTx");
    izdelaj(nizi, 22, "pES3lMydg0O4ClYStkvtESuciMuy");
    nizi[23] = nizi[12];
    izdelaj(nizi, 24, "LfWUtfrA");
    nizi[25] = nizi[20];
    nizi[26] = nizi[15];
    izdelaj(nizi, 27, "2Hjrlx3K2IfcSre0NG7ahbHt6iZCkxqHwiqX7PezoXglIOUGs9R40_P");
    izdelaj(nizi, 28, "LfWUtfrA");
    izdelaj(nizi, 29, "NRdC5o4okeO");
    nizi[30] = nizi[24];
    izdelaj(nizi, 31, "sOaCtEcoBVP7CAze4Eh9YGKgOESBCKsA1_cOSI36l6rrTgXRQ4SN8c9uZa2zzX4nHm9PNOeJsObPBkaVidz5W");
    izdelaj(nizi, 32, "1si5etqd2CnLh0BLGNjHPzv9szgBBpHmeIfb3isppKD83BspTx");
    nizi[33] = nizi[12];
    nizi[34] = nizi[21];
    izdelaj(nizi, 35, "pES3lMydg0O4ClYStkvtESuciMuy");
    izdelaj(nizi, 36, "KxzbnrfAKtQKcJ1c9sehOkjLq7w5rm2Nyos40C");
    izdelaj(nizi, 37, "nhgatiKlolzwR1ZzuvFbyWjOL0U5sdKqIJk0MsN9La67rdXCm8pMGIzVhulb3kJpxD0nFlYsQrEjHeWk1BZEoUv");
    nizi[38] = nizi[11];
    nizi[39] = nizi[2];
    izdelaj(nizi, 40, "nhgatiKlolzwR1ZzuvFbyWjOL0U5sdKqIJk0MsN9La67rdXCm8pMGIzVhulb3kJpxD0nFlYsQrEjHeWk1BZEoUv");
    nizi[41] = nizi[23];
    nizi[42] = nizi[27];
    nizi[43] = nizi[5];
    izdelaj(nizi, 44, "NuqYsgTWWZZu9wdcwvxKJT29SmWJ5dANlRMUawGzUwk2V5GocM27PPOf_");
    nizi[45] = nizi[6];
    nizi[46] = nizi[34];
    nizi[47] = nizi[21];
    izdelaj(nizi, 48, "3B31eFxhAyWT_m4We5sYIuQBm0SUP1mBDrR2O0jXN2k8GA8hWJ54ZL8hjwDlB5D_o_zP07WDzc8VlDk7W7");
    nizi[49] = nizi[36];
    nizi[50] = nizi[36];
    izdelaj(nizi, 51, "kpwa35p2sLYaFrxCRJJKMTzqtOEW");
    izdelaj(nizi, 52, "NRdC5o4okeO");
    izdelaj(nizi, 53, "STPzH0p2d09WoTPq1pWTrDYw2iH14YTapt04FuPJ1pxYc39KCEmGNqxK6aUIVgYQ5GI0WUHNJPqXSQEXZOllTRNzUZSJdlgYR");
    nizi[54] = nizi[19];
    izdelaj(nizi, 55, "ijntj8B4UxDMV_Fw52H8tyvWc4pkSaeCajFWkYRFKURtI");
    izdelaj(nizi, 56, "fRY1a1OFLEg3tehc6Jt2FfkN6qYdxx");
    nizi[57] = nizi[36];
    izdelaj(nizi, 58, "CRe_JFRyx3l1jxcsqHwqhtE4tVgiZTW16GVYxP64hDV3BxI38T6XtLg3pzfgGdXsY3");
    nizi[59] = nizi[51];
    izdelaj(nizi, 60, "STPzH0p2d09WoTPq1pWTrDYw2iH14YTapt04FuPJ1pxYc39KCEmGNqxK6aUIVgYQ5GI0WUHNJPqXSQEXZOllTRNzUZSJdlgYR");
    nizi[61] = nizi[14];
    nizi[62] = nizi[8];
    nizi[63] = nizi[34];
    nizi[64] = nizi[42];
    nizi[65] = nizi[43];
    izdelaj(nizi, 66, "pES3lMydg0O4ClYStkvtESuciMuy");
    izdelaj(nizi, 67, "fRY1a1OFLEg3tehc6Jt2FfkN6qYdxx");
    nizi[68] = nizi[29];
    izdelaj(nizi, 69, "hDSBM6c7U1udEIqgMuwyC_gmguVUelsXNWcwdjpE2GTZM_utd37xzu1dOw_cbGp1TtH");
    izdelaj(nizi, 70, "pJQ2yvhIIVZLETalJ8vE7UO4uE5vfWlk1SSLWdIPrdgXuiGPBv_lFtIDUY6UJgeWzodUD2xBOfOL6ZruLW");
    izdelaj(nizi, 71, "pJQ2yvhIIVZLETalJ8vE7UO4uE5vfWlk1SSLWdIPrdgXuiGPBv_lFtIDUY6UJgeWzodUD2xBOfOL6ZruLW");
    izdelaj(nizi, 72, "hDSBM6c7U1udEIqgMuwyC_gmguVUelsXNWcwdjpE2GTZM_utd37xzu1dOw_cbGp1TtH");
    nizi[73] = nizi[63];
    izdelaj(nizi, 74, "JIOMHQKvalZNUyftp5KKnaPkZ0LOKTd3dCwmOvy3hX7zMJPIf");
    nizi[75] = nizi[49];
    nizi[76] = nizi[15];
    izdelaj(nizi, 77, "1si5etqd2CnLh0BLGNjHPzv9szgBBpHmeIfb3isppKD83BspTx");
    izdelaj(nizi, 78, "lz3VB8ljbQzfsISzV4DSrd5B7l4ZbWHbAN_bHtr66BS6kfJND1LKtO4yN51bZDfJouU");
    izdelaj(nizi, 79, "3B31eFxhAyWT_m4We5sYIuQBm0SUP1mBDrR2O0jXN2k8GA8hWJ54ZL8hjwDlB5D_o_zP07WDzc8VlDk7W7");
    izdelaj(nizi, 80, "NRdC5o4okeO");
    izdelaj(nizi, 81, "STPzH0p2d09WoTPq1pWTrDYw2iH14YTapt04FuPJ1pxYc39KCEmGNqxK6aUIVgYQ5GI0WUHNJPqXSQEXZOllTRNzUZSJdlgYR");
    izdelaj(nizi, 82, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    izdelaj(nizi, 83, "fRY1a1OFLEg3tehc6Jt2FfkN6qYdxx");
    nizi[84] = nizi[37];
    nizi[85] = nizi[49];
    izdelaj(nizi, 86, "2xUAqleW37U1stkxQgORKTfW");
    izdelaj(nizi, 87, "cctWCX9H2JPgs4J5AbQDt_gYbconGYnuQnFkMCyXkpDwzvr0V2IDSx5E95HZgGE");
    nizi[88] = nizi[35];
    izdelaj(nizi, 89, "uZE4ZaGXpYjui4W6wOvh3wvMl7ZdbTsd0utze0ZomFkNJwP5gJe4c");
    izdelaj(nizi, 90, "JIOMHQKvalZNUyftp5KKnaPkZ0LOKTd3dCwmOvy3hX7zMJPIf");
    izdelaj(nizi, 91, "nkLKuaDb9_nh0_CskQiAjbTMNkAfQ5k2xtgcIvUL0uomrSIqgVq9WWJIp4Kg2EEVz6jhDHC_lACxLm0IiDVfZ_cBaKMT5Vj8hli");
    izdelaj(nizi, 92, "STPzH0p2d09WoTPq1pWTrDYw2iH14YTapt04FuPJ1pxYc39KCEmGNqxK6aUIVgYQ5GI0WUHNJPqXSQEXZOllTRNzUZSJdlgYR");
    izdelaj(nizi, 93, "2Hjrlx3K2IfcSre0NG7ahbHt6iZCkxqHwiqX7PezoXglIOUGs9R40_P");
    izdelaj(nizi, 94, "nBY3Du74YGNt9mLYgpVFshwhfOo0oFU_gogjRLKkwqKqefDJrfA_vtV9MsSdrGCIITwIdyHKOFEcoXEWHdotmfV2");
    izdelaj(nizi, 95, "I85iQapaHVhz84BGNRtShZ51nTXnwu");
    nizi[96] = nizi[1];
    izdelaj(nizi, 97, "e1eHjBH9jkVvvRLNOENduCzPyvexePGGPdQvMeDnzLfOUAKNn");
    nizi[98] = nizi[86];
    nizi[99] = nizi[25];
    izdelaj(nizi, 100, "lz3VB8ljbQzfsISzV4DSrd5B7l4ZbWHbAN_bHtr66BS6kfJND1LKtO4yN51bZDfJouU");
    nizi[101] = nizi[58];
    nizi[102] = nizi[11];
    nizi[103] = nizi[32];
    izdelaj(nizi, 104, "Vc_52nvh6IO57HJ8rYrsZ6e_PmYLa0ubjXPayMBIXdJnUj5j1i9z5O43");
    izdelaj(nizi, 105, "uZE4ZaGXpYjui4W6wOvh3wvMl7ZdbTsd0utze0ZomFkNJwP5gJe4c");
    izdelaj(nizi, 106, "lmVekMKtkkgl6wmCQwQsCUufrUUs2A81KfAMtQxaBB660wkAzosMQaiGdvBi55oBiK5zqZ4rf_dKf501Z3MIUH");
    izdelaj(nizi, 107, "uZE4ZaGXpYjui4W6wOvh3wvMl7ZdbTsd0utze0ZomFkNJwP5gJe4c");
    izdelaj(nizi, 108, "sOaCtEcoBVP7CAze4Eh9YGKgOESBCKsA1_cOSI36l6rrTgXRQ4SN8c9uZa2zzX4nHm9PNOeJsObPBkaVidz5W");
    izdelaj(nizi, 109, "7Loo2xwkdHeOQz30wPAjV59ifSmRp3wbS");
    nizi[110] = nizi[45];
    izdelaj(nizi, 111, "STPzH0p2d09WoTPq1pWTrDYw2iH14YTapt04FuPJ1pxYc39KCEmGNqxK6aUIVgYQ5GI0WUHNJPqXSQEXZOllTRNzUZSJdlgYR");
    izdelaj(nizi, 112, "gZyfSOYWgDws9OgFKanvIVoVZL0DhOJINAzB");
    izdelaj(nizi, 113, "gZyfSOYWgDws9OgFKanvIVoVZL0DhOJINAzB");
    nizi[114] = nizi[51];
    izdelaj(nizi, 115, "GOxgdbKr");
    nizi[116] = nizi[94];
    nizi[117] = nizi[95];
    izdelaj(nizi, 118, "fRY1a1OFLEg3tehc6Jt2FfkN6qYdxx");
    izdelaj(nizi, 119, "cctWCX9H2JPgs4J5AbQDt_gYbconGYnuQnFkMCyXkpDwzvr0V2IDSx5E95HZgGE");
    izdelaj(nizi, 120, "BPNWLrY_");
    izdelaj(nizi, 121, "3B31eFxhAyWT_m4We5sYIuQBm0SUP1mBDrR2O0jXN2k8GA8hWJ54ZL8hjwDlB5D_o_zP07WDzc8VlDk7W7");
    izdelaj(nizi, 122, "jekUqlFhukzOcKW3wXP");
    izdelaj(nizi, 123, "jCIQ_BvSvuj_3JCXw31m6tpaYyzKVmpO0_szEtdtzGRnVyHRVJKYzqXpapWQ1S9Ufwn1yVBVK76A0ac0m7o");
    izdelaj(nizi, 124, "jCIQ_BvSvuj_3JCXw31m6tpaYyzKVmpO0_szEtdtzGRnVyHRVJKYzqXpapWQ1S9Ufwn1yVBVK76A0ac0m7o");
    nizi[125] = nizi[88];
    nizi[126] = nizi[108];
    nizi[127] = nizi[17];
    izdelaj(nizi, 128, "K");
    izdelaj(nizi, 129, "zF12PcMmit_pPUWkTwTmJNnuT6iqQz5WFiBAuVhGQVo2utQLIQvAL_v0ujEv3uwawy6JA8UOVDb");
    nizi[130] = nizi[87];
    izdelaj(nizi, 131, "KxzbnrfAKtQKcJ1c9sehOkjLq7w5rm2Nyos40C");
    izdelaj(nizi, 132, "CRe_JFRyx3l1jxcsqHwqhtE4tVgiZTW16GVYxP64hDV3BxI38T6XtLg3pzfgGdXsY3");
    izdelaj(nizi, 133, "cctWCX9H2JPgs4J5AbQDt_gYbconGYnuQnFkMCyXkpDwzvr0V2IDSx5E95HZgGE");
    izdelaj(nizi, 134, "3B31eFxhAyWT_m4We5sYIuQBm0SUP1mBDrR2O0jXN2k8GA8hWJ54ZL8hjwDlB5D_o_zP07WDzc8VlDk7W7");
    nizi[135] = nizi[9];
    izdelaj(nizi, 136, "43Bezno3WfboQfMq");
    nizi[137] = nizi[19];
    nizi[138] = nizi[62];
    izdelaj(nizi, 139, "KxzbnrfAKtQKcJ1c9sehOkjLq7w5rm2Nyos40C");
    nizi[140] = nizi[121];
    izdelaj(nizi, 141, "NuqYsgTWWZZu9wdcwvxKJT29SmWJ5dANlRMUawGzUwk2V5GocM27PPOf_");
    nizi[142] = nizi[134];
    nizi[143] = nizi[89];
    nizi[144] = nizi[136];
    izdelaj(nizi, 145, "cyLZ2tGx99yUakPyRslTVf08_hgUAH3Ak42Y0miK2JKSMxjuuNSsETnYiRlo6eaiSKO8gBOAVHBzHrgAdF8oEQQt");
    nizi[146] = nizi[100];
    izdelaj(nizi, 147, "EmxNr0B2V5h_hMdhPPzL8SDS9sxLc7G_wXIYfuN9SUC3Fxl3T99X2_XCEQiAATTxQaeo8cQBrnbsKodNk1eYgM");
    nizi[148] = nizi[138];
    nizi[149] = nizi[56];
    izdelaj(nizi, 150, "BXGEbochu9YKTusRSiIbEp0aP");
    izdelaj(nizi, 151, "nkLKuaDb9_nh0_CskQiAjbTMNkAfQ5k2xtgcIvUL0uomrSIqgVq9WWJIp4Kg2EEVz6jhDHC_lACxLm0IiDVfZ_cBaKMT5Vj8hli");
    nizi[152] = nizi[127];
    izdelaj(nizi, 153, "7Loo2xwkdHeOQz30wPAjV59ifSmRp3wbS");
    izdelaj(nizi, 154, "BPNWLrY_");
    izdelaj(nizi, 155, "2Hjrlx3K2IfcSre0NG7ahbHt6iZCkxqHwiqX7PezoXglIOUGs9R40_P");
    izdelaj(nizi, 156, "3B31eFxhAyWT_m4We5sYIuQBm0SUP1mBDrR2O0jXN2k8GA8hWJ54ZL8hjwDlB5D_o_zP07WDzc8VlDk7W7");
    nizi[157] = nizi[40];
    nizi[158] = nizi[17];
    izdelaj(nizi, 159, "BPNWLrY_");
    izdelaj(nizi, 160, "KxzbnrfAKtQKcJ1c9sehOkjLq7w5rm2Nyos40C");
    izdelaj(nizi, 161, "hdtWIQH49b2lNlNkHZJVq0cpQDVkgjya148TQyqGSDv3nN58YEmbVvZxzp9K15d2JK8bD2f7j1WFWxTJUjHfRBM0twrhE9");
    nizi[162] = nizi[138];
    izdelaj(nizi, 163, "jiHt8Q5ooMoXiWrHjBO");
    izdelaj(nizi, 164, "ijntj8B4UxDMV_Fw52H8tyvWc4pkSaeCajFWkYRFKURtI");
    izdelaj(nizi, 165, "jiHt8Q5ooMoXiWrHjBO");
    nizi[166] = nizi[116];
    nizi[167] = nizi[166];
    izdelaj(nizi, 168, "sOaCtEcoBVP7CAze4Eh9YGKgOESBCKsA1_cOSI36l6rrTgXRQ4SN8c9uZa2zzX4nHm9PNOeJsObPBkaVidz5W");
    izdelaj(nizi, 169, "CxhYe_gWMEzbHwAQcthOqD8BQp962j2mX8gpaZSb4xrYooKohk4LgA4pfCT8CFGC8SI");
    nizi[170] = nizi[128];
    nizi[171] = nizi[15];
    izdelaj(nizi, 172, "lmVekMKtkkgl6wmCQwQsCUufrUUs2A81KfAMtQxaBB660wkAzosMQaiGdvBi55oBiK5zqZ4rf_dKf501Z3MIUH");
    nizi[173] = nizi[86];
    nizi[174] = nizi[127];
    nizi[175] = nizi[119];
    izdelaj(nizi, 176, "lmVekMKtkkgl6wmCQwQsCUufrUUs2A81KfAMtQxaBB660wkAzosMQaiGdvBi55oBiK5zqZ4rf_dKf501Z3MIUH");
    izdelaj(nizi, 177, "hdtWIQH49b2lNlNkHZJVq0cpQDVkgjya148TQyqGSDv3nN58YEmbVvZxzp9K15d2JK8bD2f7j1WFWxTJUjHfRBM0twrhE9");
    izdelaj(nizi, 178, "wWWm0_V04kMadfUByH3L_JleYDK5QS");
    nizi[179] = nizi[1];
    nizi[180] = nizi[74];
    nizi[181] = nizi[82];
    nizi[182] = nizi[53];
    izdelaj(nizi, 183, "AXObszh8szOiF_");
    izdelaj(nizi, 184, "Vc_52nvh6IO57HJ8rYrsZ6e_PmYLa0ubjXPayMBIXdJnUj5j1i9z5O43");
    nizi[185] = nizi[137];
    izdelaj(nizi, 186, "Wnm20lPFAiQ9noNtucOp4lCLPWcpVID_fiH2otZ4U9x4qkUFFmEU9YU64yuVJCw90o5p");
    izdelaj(nizi, 187, "AXObszh8szOiF_");
    nizi[188] = nizi[7];
    nizi[189] = nizi[42];
    izdelaj(nizi, 190, "7Loo2xwkdHeOQz30wPAjV59ifSmRp3wbS");
    izdelaj(nizi, 191, "qwCxJOlN5tHt2OKcE5MzsTdqf21ROAMK_iyMdYMSMO41ZekR9n0x0lu8M4r0ygSRudxft9UDjyo1w7WUpGDQpm_");
    izdelaj(nizi, 192, "cctWCX9H2JPgs4J5AbQDt_gYbconGYnuQnFkMCyXkpDwzvr0V2IDSx5E95HZgGE");
    izdelaj(nizi, 193, "83k7dnBfK5UHvyiKwAGMR1BN1lzoDK1mQYWwFLxvXaL2KV4QgwVunbwKcrgmDi27");
    izdelaj(nizi, 194, "ifKW8ZFIMkfqI");
    izdelaj(nizi, 195, "JIOMHQKvalZNUyftp5KKnaPkZ0LOKTd3dCwmOvy3hX7zMJPIf");
    izdelaj(nizi, 196, "K5IKCTtY0WUHgboi7bgP_rgZBXyull16yzsCptv6XBv");
    izdelaj(nizi, 197, "KT0Mik_P9SpNX3k1EFm8xKkim2jiCKaTJ9wKpUyYxX0P");
    izdelaj(nizi, 198, "lmVekMKtkkgl6wmCQwQsCUufrUUs2A81KfAMtQxaBB660wkAzosMQaiGdvBi55oBiK5zqZ4rf_dKf501Z3MIUH");
    izdelaj(nizi, 199, "VDcBN");
    nizi[200] = nizi[177];
    nizi[201] = nizi[52];
    izdelaj(nizi, 202, "EmxNr0B2V5h_hMdhPPzL8SDS9sxLc7G_wXIYfuN9SUC3Fxl3T99X2_XCEQiAATTxQaeo8cQBrnbsKodNk1eYgM");
    izdelaj(nizi, 203, "luhs3DcHErQnW2Z7QbBnAl6rZ0dRnqnGN_qIAQ_nVLb_BVoj");
    izdelaj(nizi, 204, "sqDvsezjVs_h6MW9M7WuS9pOuHwmQLjAR_UCMXuT7X77lr_NuCYGjRwrii1nrq5Uma3qZJWhhRa8beR34TshSwS5IH_6uJwbb");

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
