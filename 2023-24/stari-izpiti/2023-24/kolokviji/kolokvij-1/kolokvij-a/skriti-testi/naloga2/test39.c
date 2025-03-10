
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
    int n = 404;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 1, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 2, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 3, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 4, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 5, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 6, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 7, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 8, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 9, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 10, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 11, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 12, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 13, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 14, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 15, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 16, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 17, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 18, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 19, "JkwUiWqjYy5JzPpEv6ptcxT_lJ4OSsdrAS");
    izdelaj(nizi, 20, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 21, "9jOo1JM1PeMpxuVU8_0DqmRxokJ_j9FFr");
    izdelaj(nizi, 22, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 23, "qVQEmKqNO0Wl_KihXO1Ix8R2mQIM0kv5GtA7GbHE_GLYiXw7ocMzEBwS");
    izdelaj(nizi, 24, "AkBSvwHTjL2yiqzOBdH18CvTAn8DQF20F5YRdc43Dcyw6LfOmqNjrtltswriaMXp9_lWHfQXai4ulF8aAwPBIHY0ruTvio");
    izdelaj(nizi, 25, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 26, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 27, "yLU26y_QQsfb18L3C7CiyupZkUBNmN9wMtpiaCh5_K1WQgOBKo6u8kt5l50PFEcIksit2xWg8N2NdC69N8R0s");
    izdelaj(nizi, 28, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 29, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 30, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 31, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 32, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 33, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 34, "uIJyDghA_g4N");
    izdelaj(nizi, 35, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 36, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 37, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 38, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 39, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 40, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 41, "W124qfEpvdgdAfNnJr2L4J_Rj1hXHRpFziCrJpeQnM0fsIMHDpWZ0aiE0PWNpc01fPWa");
    izdelaj(nizi, 42, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 43, "uIJyDghA_g4N");
    izdelaj(nizi, 44, "9jOo1JM1PeMpxuVU8_0DqmRxokJ_j9FFr");
    izdelaj(nizi, 45, "XdhSjLblD5S4KJFtCeqxfXaZps1TPitbMvfYrxg1DtmgYJiAQSHBI5N2ixhS4FMkzwL2LzuhSlDjRYp");
    izdelaj(nizi, 46, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 47, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 48, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 49, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 50, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 51, "CFSKtZUnsrzErY1T1Fjd0T");
    izdelaj(nizi, 52, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 53, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 54, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 55, "yLU26y_QQsfb18L3C7CiyupZkUBNmN9wMtpiaCh5_K1WQgOBKo6u8kt5l50PFEcIksit2xWg8N2NdC69N8R0s");
    izdelaj(nizi, 56, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 57, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 58, "znt8acltd8YQ6IvR9iUXLXKsK68nKWyBHLKqXr8vUi93FeqEH9kGKdvaOniRxwsgGLuUCB5oMQKAO3MqJD");
    izdelaj(nizi, 59, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 60, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 61, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 62, "uIJyDghA_g4N");
    izdelaj(nizi, 63, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 64, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 65, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 66, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 67, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 68, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 69, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 70, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 71, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 72, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 73, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 74, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 75, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 76, "YWDxKi4xRBvu3O95eMhsPoDF_CNYbpZvkxfgY5kY99ikaELb_EZvtiiew2J4C2OG01LUeaWf6JCiOydnGLUy7tlwumrXPV");
    izdelaj(nizi, 77, "71FyZ3e6ix7qX67vqImmi7zZp6NFeX3QJctwb2YiNwFzamfdVurlKz6lP9HJs1EeNclsQEaye8HoerJHQACA");
    izdelaj(nizi, 78, "XdhSjLblD5S4KJFtCeqxfXaZps1TPitbMvfYrxg1DtmgYJiAQSHBI5N2ixhS4FMkzwL2LzuhSlDjRYp");
    izdelaj(nizi, 79, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 80, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 81, "znt8acltd8YQ6IvR9iUXLXKsK68nKWyBHLKqXr8vUi93FeqEH9kGKdvaOniRxwsgGLuUCB5oMQKAO3MqJD");
    izdelaj(nizi, 82, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 83, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 84, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 85, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 86, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 87, "vvNbsH1BcPuauWPeP5VFjKJ5OUKM4KkvAq_DNMDzlmyIfTl8Kunda1SWnmgTWqD");
    izdelaj(nizi, 88, "jDdaFrHIXuuigrBhc88F7iOwy0z2NUcWsdcxzYmyL4u1PbuZH3ATYwOTDnOAZyRV1S_e8q4C");
    izdelaj(nizi, 89, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 90, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 91, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 92, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 93, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 94, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 95, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 96, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 97, "GEcXgArh1yHXRg");
    izdelaj(nizi, 98, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 99, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 100, "58p09chv0w6EVsJdp6qmRdp7khwnmu7zmaJpGT0C1FFDH_54liL8wTyi");
    izdelaj(nizi, 101, "JKBnZrcxpPwcj1YX3p_A7ISHfTrrdxPEeCSRCP2iP3tGC7ybXgN0oQnvHJs9Xhs4nkmFTv7APCRHsyDFzNRYArj_Ued5E_e8");
    izdelaj(nizi, 102, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 103, "Pn3aubovzI8oNvke9JNpqDfHzK42k6rPzj9CQTRh5fVBDjQ72m");
    izdelaj(nizi, 104, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 105, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 106, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 107, "XdhSjLblD5S4KJFtCeqxfXaZps1TPitbMvfYrxg1DtmgYJiAQSHBI5N2ixhS4FMkzwL2LzuhSlDjRYp");
    izdelaj(nizi, 108, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 109, "hKC7YySmaWw6j09uWSBbLi1NbC3evNOPnX2wonCF2RhpfNmxcK");
    izdelaj(nizi, 110, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 111, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 112, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 113, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 114, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 115, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 116, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 117, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 118, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 119, "xFp3a5MrsMLmTXvJiMOUbkymiVwdn6j6A_rLmaPqSPgqO2");
    izdelaj(nizi, 120, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 121, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 122, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 123, "3hX_P6Pa2w2fgBz6PAly_O0hS55YjQMZv2exDelQBbo_zQuipnCMr9JsGk8PvsnWtNm3F6l7Q_p4XtSQ2TdzCugB2CkRiE74");
    izdelaj(nizi, 124, "eSLOI2slYoxQbQjutnHNsqjw1ON0CBRDDUzUTEOV3RTnnrWwyPiDWddy3E6Sjlxg4vOLIiWTcJIKk07L");
    izdelaj(nizi, 125, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 126, "vvNbsH1BcPuauWPeP5VFjKJ5OUKM4KkvAq_DNMDzlmyIfTl8Kunda1SWnmgTWqD");
    izdelaj(nizi, 127, "dcdO8SJQRUWqzR415dCa25q8UnGQnGbMu");
    izdelaj(nizi, 128, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 129, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 130, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 131, "9jOo1JM1PeMpxuVU8_0DqmRxokJ_j9FFr");
    izdelaj(nizi, 132, "P");
    izdelaj(nizi, 133, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 134, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 135, "fEhPq8p2M9x1Np9Fns2Y3qChJ5PYvFrAI0_mtYMbuQqXYSTzQRDOcWb94MIxXEyKDZsup0EadrhvwoNsfi0PtTFC4LcZk");
    izdelaj(nizi, 136, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 137, "Am");
    izdelaj(nizi, 138, "9jOo1JM1PeMpxuVU8_0DqmRxokJ_j9FFr");
    izdelaj(nizi, 139, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 140, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 141, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 142, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 143, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 144, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 145, "xFp3a5MrsMLmTXvJiMOUbkymiVwdn6j6A_rLmaPqSPgqO2");
    izdelaj(nizi, 146, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 147, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 148, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 149, "O3KUNaGYWHPjOKkvBa_GIY047gQ");
    izdelaj(nizi, 150, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 151, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 152, "3MhZGXHWev8ayhyg4J5NhOYP4eKMp4D4EHEzQQ61r30Wc04G8mNNVwNPtY5A1ma5L_qpu");
    izdelaj(nizi, 153, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 154, "nEfQLyT");
    izdelaj(nizi, 155, "58p09chv0w6EVsJdp6qmRdp7khwnmu7zmaJpGT0C1FFDH_54liL8wTyi");
    izdelaj(nizi, 156, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 157, "7mwZOsbDAPmrJsYhqm0Z8O0C9IEWW5JsyZW6bbbIQGtcD1K9zUhmYuGhBNkffAYj");
    izdelaj(nizi, 158, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 159, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 160, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 161, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 162, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 163, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 164, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 165, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 166, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 167, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 168, "dtz0CES7KvLR");
    izdelaj(nizi, 169, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 170, "dtz0CES7KvLR");
    izdelaj(nizi, 171, "XdhSjLblD5S4KJFtCeqxfXaZps1TPitbMvfYrxg1DtmgYJiAQSHBI5N2ixhS4FMkzwL2LzuhSlDjRYp");
    izdelaj(nizi, 172, "9TL");
    izdelaj(nizi, 173, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 174, "Am");
    izdelaj(nizi, 175, "fEhPq8p2M9x1Np9Fns2Y3qChJ5PYvFrAI0_mtYMbuQqXYSTzQRDOcWb94MIxXEyKDZsup0EadrhvwoNsfi0PtTFC4LcZk");
    izdelaj(nizi, 176, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 177, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 178, "qVQEmKqNO0Wl_KihXO1Ix8R2mQIM0kv5GtA7GbHE_GLYiXw7ocMzEBwS");
    izdelaj(nizi, 179, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 180, "W4dzOnpv");
    izdelaj(nizi, 181, "vUkzA9THcQZJH9MJ9d5x7Fw5EF");
    izdelaj(nizi, 182, "O3KUNaGYWHPjOKkvBa_GIY047gQ");
    izdelaj(nizi, 183, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 184, "xFp3a5MrsMLmTXvJiMOUbkymiVwdn6j6A_rLmaPqSPgqO2");
    izdelaj(nizi, 185, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 186, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 187, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 188, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 189, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 190, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 191, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 192, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 193, "REqyWn1l17eV7t0jKwlq7TPplm4k5N_EwN5pgbe0Mg9PCca9MJPvyS1XY0WXwFod");
    izdelaj(nizi, 194, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 195, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 196, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 197, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 198, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 199, "3Q6ZKnfotCZN5I");
    izdelaj(nizi, 200, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 201, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 202, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 203, "3MhZGXHWev8ayhyg4J5NhOYP4eKMp4D4EHEzQQ61r30Wc04G8mNNVwNPtY5A1ma5L_qpu");
    izdelaj(nizi, 204, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 205, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 206, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 207, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 208, "8vqoB_jLq2dPJATnXOrXqr9Dze3_PqFhm7qdADEklmgOQedUhuE09lQbezZsFtBXR_xqt52ITfPTf");
    izdelaj(nizi, 209, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 210, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 211, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 212, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 213, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 214, "uIJyDghA_g4N");
    izdelaj(nizi, 215, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 216, "_f9vFFmcdOZC233DuitqHv0oqY8bPZZLQIuWx8PTF");
    izdelaj(nizi, 217, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 218, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 219, "znt8acltd8YQ6IvR9iUXLXKsK68nKWyBHLKqXr8vUi93FeqEH9kGKdvaOniRxwsgGLuUCB5oMQKAO3MqJD");
    izdelaj(nizi, 220, "9JNqtAXThVVszDb6bQ23P_fbsOvB52qrN4nYXI8sub54Cc3QoZYR2CQN0_lbxKuayyFNqH4X");
    izdelaj(nizi, 221, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 222, "JkwUiWqjYy5JzPpEv6ptcxT_lJ4OSsdrAS");
    izdelaj(nizi, 223, "rDT5CLhmE4oEVmcRHLj3kyDReUe_zr5Adx5qNqaaC9F1gBxj9HmIMiQxsHR3Dgzpd81Cd7WP8sgWzl");
    izdelaj(nizi, 224, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 225, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 226, "NdeOcYpIRhHDfBdKe9t9LuuJIm94OXC2tDK");
    izdelaj(nizi, 227, "O3KUNaGYWHPjOKkvBa_GIY047gQ");
    izdelaj(nizi, 228, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 229, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 230, "PPvWY6UKGgaD3YSeKcDWYnYg4zKAHZALhaBuU1UrGd2Zrqm6qfYcUQV");
    izdelaj(nizi, 231, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 232, "JKBnZrcxpPwcj1YX3p_A7ISHfTrrdxPEeCSRCP2iP3tGC7ybXgN0oQnvHJs9Xhs4nkmFTv7APCRHsyDFzNRYArj_Ued5E_e8");
    izdelaj(nizi, 233, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 234, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 235, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 236, "PcK1XikKNSubIWAzxysAbdoLolZ4nLA4RyyYY9E1JRAe67sl2SofttAUwOBsYUytkjpn9ofAg9SworSBePQLSx31GlL");
    izdelaj(nizi, 237, "PSIzUp1w02yyH1Kscf49nK7Meq111kM5R_TZhVaO3PXes9EjgT0zDeDtsrcrlMDVcmZ0VIFcAUmiH0eKf");
    izdelaj(nizi, 238, "Pn3aubovzI8oNvke9JNpqDfHzK42k6rPzj9CQTRh5fVBDjQ72m");
    izdelaj(nizi, 239, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 240, "JKBnZrcxpPwcj1YX3p_A7ISHfTrrdxPEeCSRCP2iP3tGC7ybXgN0oQnvHJs9Xhs4nkmFTv7APCRHsyDFzNRYArj_Ued5E_e8");
    izdelaj(nizi, 241, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 242, "uIJyDghA_g4N");
    izdelaj(nizi, 243, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 244, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 245, "nEfQLyT");
    izdelaj(nizi, 246, "_C7cy375cv_G2ZTglpYZDQdlCMWgYWkfI0jlJQT_qBhCFW2HZ8TpiUleruXdbTVMYfgFsxpqFWSYWfmBUKZU");
    izdelaj(nizi, 247, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 248, "mHkE5Rn9TM26O5ihqmfhR4KzjCZt9JNCy0_QevVKozEr");
    izdelaj(nizi, 249, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 250, "jMxfO31QZ8EHp2uAWmVa7UyVayVEw8wpij76mKAJeOJ36d");
    izdelaj(nizi, 251, "zRF955WN4j2Y8GY_hvruMZrTEsRwaRQDJpZUZykEa2pkK8Ue_B8wFnFmZct7NYsCMW9z3bD");
    izdelaj(nizi, 252, "znt8acltd8YQ6IvR9iUXLXKsK68nKWyBHLKqXr8vUi93FeqEH9kGKdvaOniRxwsgGLuUCB5oMQKAO3MqJD");
    izdelaj(nizi, 253, "dtz0CES7KvLR");
    izdelaj(nizi, 254, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 255, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 256, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 257, "imNoLRdWnlhoYllMM_xdfG0BDruTNFayoR8Eewx_9DDuznfwjsMXBzpbsIYO7Mz4wDVUUak1Udi0qgqqgURdLitqr1WhNUK6");
    izdelaj(nizi, 258, "ljx1EgvnvGifSPdFZY_4sNwxur_boM_LcbChwaF1tygfYpKY64W39ipnyaV0f_UHtinK7ClF7bpri");
    izdelaj(nizi, 259, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 260, "9jOo1JM1PeMpxuVU8_0DqmRxokJ_j9FFr");
    izdelaj(nizi, 261, "TlXMYVQ1EhHhxIMWlXzsXxCHzFOs0dxfojELaCcLgT_BHHhvKfJwDzMq2SK5LoNrb8Y");
    izdelaj(nizi, 262, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 263, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 264, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 265, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 266, "RFXAWRhZxqaAPGXtDmSwRwFNBHVE51xQmHnmVOlxgLE_x9svz_o1MeXC8yHsoq8oUca");
    izdelaj(nizi, 267, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 268, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 269, "XdhSjLblD5S4KJFtCeqxfXaZps1TPitbMvfYrxg1DtmgYJiAQSHBI5N2ixhS4FMkzwL2LzuhSlDjRYp");
    izdelaj(nizi, 270, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 271, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 272, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 273, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 274, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 275, "GEcXgArh1yHXRg");
    izdelaj(nizi, 276, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 277, "7mwZOsbDAPmrJsYhqm0Z8O0C9IEWW5JsyZW6bbbIQGtcD1K9zUhmYuGhBNkffAYj");
    izdelaj(nizi, 278, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 279, "C8EfLjcCq4H6n3a5ynM3Me1FeDy5qBC9Z2B58Y4w1hbHk7RgOulw2Ux2wCriwawTjhRUAL0_l");
    izdelaj(nizi, 280, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 281, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 282, "9TL");
    izdelaj(nizi, 283, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 284, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 285, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 286, "cyjyXlunCALKYJ5Bku2poFBDJzPFjTaSAtvyW0D9N1JKEcCmVFusqRlMw1UwMSzB2s32FVes_3Z2");
    izdelaj(nizi, 287, "zrnDoylukEph4VYEbXGAE7u2fPHDiJ9n_4HaU");
    izdelaj(nizi, 288, "0Xv0zJCit2OZVvHX1EXRWik4slonvJZI471nqc3fK");
    izdelaj(nizi, 289, "LVr9uI1wpFl5MYE6PxAj6HsNwrtTh5pfuN3KLFjJd5JN14Ir");
    izdelaj(nizi, 290, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 291, "dtz0CES7KvLR");
    izdelaj(nizi, 292, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 293, "gj2teOXK7eQ8sxycMHCCstM78tnGNatEQ4Uivjo_RlNu7MmD0AIs50mMmRQniXuE7z7c_Y6qs4afbrbqHsq7_HDYr");
    izdelaj(nizi, 294, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 295, "Vq8jXH6TSTxuo");
    izdelaj(nizi, 296, "onhwDwXRz3HYcjVVVpTnUZ3oLJj1lRWLeWxfvw0mfAePoWVO_n_vz5f2UovmrFNO");
    izdelaj(nizi, 297, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 298, "xZimp18asEuVDeBobPYxjSPbK9QMQwZN26sKPRO0jNP10jJRCjbtb");
    izdelaj(nizi, 299, "t0f4XKLk_xR9qtqctINPABdpOviRCUa9Kx_3gbkrljCN7pRrrzDZZtShCNdr4rl0kek2_e9lMJCqzP9SNmfk214qrpce");
    izdelaj(nizi, 300, "UVznxXuDTpAMLfJzp6o7owZN59krzMNFTvJmg5A0FuotkSlLpnsYcBjL0rlatmhGnCKgL7T");
    izdelaj(nizi, 301, "dUaRvlqbK5zW6SaYahwt8nyvq2rntSWBCV3V2IrVSsyfBPyvYtZWhkMYwe58Anot90ShB3L5l");
    izdelaj(nizi, 302, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 303, "eyu9c1_l_4DRYBeyWrWZwdErNWZ0b4pZHtEqdp6yMTAsAHlOzC6GdVjBWf8PyJmkylqNz5_05hgNQ9myUv6x9");
    izdelaj(nizi, 304, "w7kbeWVGV4HSCD6xcDl");
    izdelaj(nizi, 305, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 306, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 307, "F2YolYziqy8UvhXKTjVjS1M6tn7UzWiPZcByREfnxvyXygPYkYtidb4LOZ4yim0brLnDgkpI3dOF8OpM");
    izdelaj(nizi, 308, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 309, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 310, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 311, "vvNbsH1BcPuauWPeP5VFjKJ5OUKM4KkvAq_DNMDzlmyIfTl8Kunda1SWnmgTWqD");
    izdelaj(nizi, 312, "lluV9zy6t3ig4WA1oSEOSnHFOJVUoUw4lxNvdwYTipcKGG6ERAxMH7tiyGXK");
    izdelaj(nizi, 313, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 314, "V5FIQMg1HQRwxmFJObr224vXLJ4vm5sDNy2Pg8pbfSYQf9j4N14j0");
    izdelaj(nizi, 315, "A4ZwMswBbmIpj4v26kX3A_");
    izdelaj(nizi, 316, "F2YolYziqy8UvhXKTjVjS1M6tn7UzWiPZcByREfnxvyXygPYkYtidb4LOZ4yim0brLnDgkpI3dOF8OpM");
    izdelaj(nizi, 317, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 318, "yLU26y_QQsfb18L3C7CiyupZkUBNmN9wMtpiaCh5_K1WQgOBKo6u8kt5l50PFEcIksit2xWg8N2NdC69N8R0s");
    izdelaj(nizi, 319, "wyQn9tACxVUKA3bxJAh1U0pFKbfbSxEZoGF9h8aTOOZUvm34nI2TDCiERYwlLVYoIguetziJvaSx8BvbVWBsJFB");
    izdelaj(nizi, 320, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 321, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 322, "XdhSjLblD5S4KJFtCeqxfXaZps1TPitbMvfYrxg1DtmgYJiAQSHBI5N2ixhS4FMkzwL2LzuhSlDjRYp");
    izdelaj(nizi, 323, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 324, "OdU9jHL4NWqd23SCSrgeYpo2HSRXDyYbpQHTOXQlRcNgqR50x9IZKZ7XwoYMRYeX0Bm_Pb8GG");
    izdelaj(nizi, 325, "0Z36TkscdIFz25ZWKpNtL");
    izdelaj(nizi, 326, "yLU26y_QQsfb18L3C7CiyupZkUBNmN9wMtpiaCh5_K1WQgOBKo6u8kt5l50PFEcIksit2xWg8N2NdC69N8R0s");
    izdelaj(nizi, 327, "IPRhIzigDcxRpM8nuHkYX");
    izdelaj(nizi, 328, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 329, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 330, "XQ58f9kVZamnYZP0KC");
    izdelaj(nizi, 331, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 332, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 333, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 334, "sz3fwmPH27O2O4jhFSvXzDyiZ7u3CYzYVlpjkYhKrIk5s7eNBohzogbQwmrhxRaRSV");
    izdelaj(nizi, 335, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 336, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 337, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 338, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 339, "qVQEmKqNO0Wl_KihXO1Ix8R2mQIM0kv5GtA7GbHE_GLYiXw7ocMzEBwS");
    izdelaj(nizi, 340, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 341, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 342, "Fgj9");
    izdelaj(nizi, 343, "EIOSyazOd4V9UBUFM5pELrg4nILFTfqPW3_7d2P641xbkLvY2L");
    izdelaj(nizi, 344, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 345, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 346, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 347, "JvYLdsodKfZ29FHtt3j0dETrEHwbfVYb5IdoazZW3UC4Do471AHzpNtLxK8_Tbdd2hepWUUsbrxaRKtnoPAQXtMOIwJ0Ysv4IQ");
    izdelaj(nizi, 348, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 349, "dcdO8SJQRUWqzR415dCa25q8UnGQnGbMu");
    izdelaj(nizi, 350, "vHzOMaEBKzjWNKCjADba7d1XC382EZPPs19WsT1LD8CC");
    izdelaj(nizi, 351, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 352, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 353, "3WhQO4wLpmScSwkFtNZNWWJRDRCz0ovJXjAuRpvT2U4BUmoBzZVT72xMTnEu");
    izdelaj(nizi, 354, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 355, "9jOo1JM1PeMpxuVU8_0DqmRxokJ_j9FFr");
    izdelaj(nizi, 356, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 357, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 358, "MhUXD1KIv__3Wdqver0MTUZ07F58skgV9NpVHH_UUBXfr9I3gB7G_A19fNRnhvl");
    izdelaj(nizi, 359, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 360, "WkUdQ7HsW267WhMpGGLLqt3l6kMGHyAFJo4NGNO_k4tG2xARt1HbHd1qyFq6GTmGXGxRlptYGwP0peLQ_7Dt");
    izdelaj(nizi, 361, "MZ8a_9UOGGP4POYGmW1y3v5x2ADgxFzvrkuTWYMZDlEdV8jA6L6gCNpKs88XS8x8E50Sf_zsJA4F9lnBQSl6");
    izdelaj(nizi, 362, "RFXAWRhZxqaAPGXtDmSwRwFNBHVE51xQmHnmVOlxgLE_x9svz_o1MeXC8yHsoq8oUca");
    izdelaj(nizi, 363, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 364, "zlAFr2Xfj7_4tnMqNepsfCSj1lYwF4kGjyC4hi6hDzJoj");
    izdelaj(nizi, 365, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 366, "puZ2XyvaYoSI");
    izdelaj(nizi, 367, "vvNbsH1BcPuauWPeP5VFjKJ5OUKM4KkvAq_DNMDzlmyIfTl8Kunda1SWnmgTWqD");
    izdelaj(nizi, 368, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 369, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 370, "0Mm7Wop7Rev3k7EgyI0Fd8_ychVXJIRnZU7rXMCwc");
    izdelaj(nizi, 371, "YWDxKi4xRBvu3O95eMhsPoDF_CNYbpZvkxfgY5kY99ikaELb_EZvtiiew2J4C2OG01LUeaWf6JCiOydnGLUy7tlwumrXPV");
    izdelaj(nizi, 372, "0gl9plHUp7f1l599mSE9aoDIJjjmri4RePZhOupZ6cy3qXOGfnIynURTR");
    izdelaj(nizi, 373, "DREbgJ1gRJW0A28tdmuh9uvfx6JGl2qJDMzeWDWhI");
    izdelaj(nizi, 374, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 375, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 376, "JhReCL3o");
    izdelaj(nizi, 377, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 378, "FxoaaxBINPAtlHvWwsq_1i1FN");
    izdelaj(nizi, 379, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 380, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 381, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 382, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 383, "yLU26y_QQsfb18L3C7CiyupZkUBNmN9wMtpiaCh5_K1WQgOBKo6u8kt5l50PFEcIksit2xWg8N2NdC69N8R0s");
    izdelaj(nizi, 384, "2YAitSRsdz1cnOrJVMN_");
    izdelaj(nizi, 385, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 386, "e7TpCE_c107s8KwmDv7JSjGizmmRIJJEuAVj58HfDW_ZyxpTAar4SwaHkdpozWRBji7zGCpdrz");
    izdelaj(nizi, 387, "NknGog6NR6AEVAqEclK_MMcOHxHtD4xA96jM943VLpUYu7MqTsqf_TcWJG6OEeKeTArqMgXBBw4wVe2U5MCMYqIt");
    izdelaj(nizi, 388, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 389, "jDdaFrHIXuuigrBhc88F7iOwy0z2NUcWsdcxzYmyL4u1PbuZH3ATYwOTDnOAZyRV1S_e8q4C");
    izdelaj(nizi, 390, "GiCoiZFAkmn4VmBo7SUlo7a3jeM1zEoDAG2oguRRr5hbVEJy3SlQVUESWnRu3ZL_Rk4");
    izdelaj(nizi, 391, "QZj37SGRhSgOB6nOi");
    izdelaj(nizi, 392, "hQyoGWSXaIrccTd3QG6HvoAPCXRGnro6LT5eXQb5");
    izdelaj(nizi, 393, "fIjudkzz5jVV06KA9U0qI3ezNvrvfgiDNjLlSbqMCtQ2OUGjNLHJmoVGi8G5XyI5BJ1s1OoLQRDtzD7S5xc5JqcsWgKPMz3zy");
    izdelaj(nizi, 394, "SClXj2R5vDGmWAfnSqU3hDnnM9r7aMAyzOvgKq_HeIuF1P5q1VpT39ehFSiSJuel4E5waQ3J6PTchv0bySOIOofrYs");
    izdelaj(nizi, 395, "4iniznjpoLU");
    izdelaj(nizi, 396, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 397, "fEhPq8p2M9x1Np9Fns2Y3qChJ5PYvFrAI0_mtYMbuQqXYSTzQRDOcWb94MIxXEyKDZsup0EadrhvwoNsfi0PtTFC4LcZk");
    izdelaj(nizi, 398, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 399, "fIjudkzz5jVV06KA9U0qI3ezNvrvfgiDNjLlSbqMCtQ2OUGjNLHJmoVGi8G5XyI5BJ1s1OoLQRDtzD7S5xc5JqcsWgKPMz3zy");
    izdelaj(nizi, 400, "uIJyDghA_g4N");
    izdelaj(nizi, 401, "buJKGYLm03xrbF8Mnp69aGFf1YwXHpRLFuMLCG4UWmx4fiKxDrRH");
    izdelaj(nizi, 402, "sWVG6Ug8x1hZ_AtvDJuKNS8a2niLtlkJuV6ok94f2312Gtkv36AydsjHY3RWn4YT_7r4N0bgr6dATX5c07THR0gP5h5L");
    izdelaj(nizi, 403, "58p09chv0w6EVsJdp6qmRdp7khwnmu7zmaJpGT0C1FFDH_54liL8wTyi");

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
