
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
    int n = 290;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 1, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 2, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 3, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 4, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 5, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 6, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 7, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 8, "RJ9zi");
    izdelaj(nizi, 9, "lw9hwNTKC_1KkZmKOEaVDnA3gugwRfrsmlDwUaPb2XyD98tQ59uECh3kkwyA3KY5GYjTgMa206sXmljeNLlJERYM");
    izdelaj(nizi, 10, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 11, "RJ9zi");
    izdelaj(nizi, 12, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 13, "kbGmEIy");
    izdelaj(nizi, 14, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 15, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 16, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 17, "kbGmEIy");
    izdelaj(nizi, 18, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 19, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 20, "VFhmGmuvvACPr4ou7yWks8WWncya9uuL07M6DhWz_rGS");
    izdelaj(nizi, 21, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 22, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 23, "s4xuRkgHLpFmTz1b1NNSXmNM5kY4P3eApgWKnF1b45WkLsXq6MCQOz2JwTNPac7PUfcKpTGM8dP6iq51yXiM6");
    izdelaj(nizi, 24, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 25, "kbGmEIy");
    izdelaj(nizi, 26, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 27, "rdCM2tliWWKgfZMI3eOwxDcKh72xFoDh8IpBwDTx");
    izdelaj(nizi, 28, "EbT6WaxLPAvzj05l30YdlvGdeDWp4xoWfrnKsWYeAFSTtYhn_xn07jB7t06Iw2LMARnB_JWgJGiAETw7");
    izdelaj(nizi, 29, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 30, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 31, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 32, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 33, "lClXNYM6IsOcf_");
    izdelaj(nizi, 34, "1ouKoHj7HejlO1w1Sclhu2qVvgPBmAzwTpjZ9hWNwqM7HhRXguBnDexi9Btp7Om8SXLSCkbbe");
    izdelaj(nizi, 35, "s4xuRkgHLpFmTz1b1NNSXmNM5kY4P3eApgWKnF1b45WkLsXq6MCQOz2JwTNPac7PUfcKpTGM8dP6iq51yXiM6");
    izdelaj(nizi, 36, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 37, "lw9hwNTKC_1KkZmKOEaVDnA3gugwRfrsmlDwUaPb2XyD98tQ59uECh3kkwyA3KY5GYjTgMa206sXmljeNLlJERYM");
    izdelaj(nizi, 38, "rdCM2tliWWKgfZMI3eOwxDcKh72xFoDh8IpBwDTx");
    izdelaj(nizi, 39, "lClXNYM6IsOcf_");
    izdelaj(nizi, 40, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 41, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 42, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 43, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 44, "YHXmY5S5fIQDes4g1emk1V3JkNietf0JtF9fVFJgFIjUiXLK6b1sFr1SZ4EJ791ztBmQ7Ud50BW0RU5yEP6qVONA");
    izdelaj(nizi, 45, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 46, "ytR70E6NgIKeZ0yYMhaW37NbfSGKYT6bTYl8UD5GVgtAiGStcC");
    izdelaj(nizi, 47, "kbGmEIy");
    izdelaj(nizi, 48, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 49, "MwqovXyU49heMMzirkV71rzOncf7TF40du3y3bXgSjmsTOlptkHPQg8rK1GmDURsSNMW9Z5");
    izdelaj(nizi, 50, "kbGmEIy");
    izdelaj(nizi, 51, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 52, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 53, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 54, "sIdbFt7jQLLPAdu1fyQ_knqcn4VkBDujmMtLJqT");
    izdelaj(nizi, 55, "MwqovXyU49heMMzirkV71rzOncf7TF40du3y3bXgSjmsTOlptkHPQg8rK1GmDURsSNMW9Z5");
    izdelaj(nizi, 56, "kbGmEIy");
    izdelaj(nizi, 57, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 58, "MqdFmX5z");
    izdelaj(nizi, 59, "0SkIVHdZ");
    izdelaj(nizi, 60, "RJ9zi");
    izdelaj(nizi, 61, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 62, "RJ9zi");
    izdelaj(nizi, 63, "r5Kn_hHBwL14Brlw_Ur2Dq1sxWRNqmpvu1g30hj55dYe4zQ7gO");
    izdelaj(nizi, 64, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 65, "RJ9zi");
    izdelaj(nizi, 66, "c97iYdrdbZxu2Hi2yYLcM3AIPn1W9QCtxUJ9G2kKIGt4hdJTSxUW7x7T7ki5lvddi011M");
    izdelaj(nizi, 67, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 68, "kbGmEIy");
    izdelaj(nizi, 69, "kbGmEIy");
    izdelaj(nizi, 70, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 71, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 72, "_7lrlAXgYm9O0VWtepFscV6rruVp6zrYAQHxm3GAffVkXAg_jv7mTl39Kz");
    izdelaj(nizi, 73, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 74, "_5aOe4");
    izdelaj(nizi, 75, "MwqovXyU49heMMzirkV71rzOncf7TF40du3y3bXgSjmsTOlptkHPQg8rK1GmDURsSNMW9Z5");
    izdelaj(nizi, 76, "kbGmEIy");
    izdelaj(nizi, 77, "RJ9zi");
    izdelaj(nizi, 78, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 79, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 80, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 81, "dejmZcDKJz212EAsm7aYtM5DTFVjyp_cXbRh6cO9D0G_KjQriJizlvmwEMK6Uu1NJuRKFoNTEg");
    izdelaj(nizi, 82, "zBIDXzoqplwlYs7jYrTORQSuuVwf28fG9Auxg3DRwqMfaEvBePabjSR0hDxalx");
    izdelaj(nizi, 83, "lClXNYM6IsOcf_");
    izdelaj(nizi, 84, "RJ9zi");
    izdelaj(nizi, 85, "RJ9zi");
    izdelaj(nizi, 86, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 87, "RJ9zi");
    izdelaj(nizi, 88, "c97iYdrdbZxu2Hi2yYLcM3AIPn1W9QCtxUJ9G2kKIGt4hdJTSxUW7x7T7ki5lvddi011M");
    izdelaj(nizi, 89, "Oyi0cLlta1POfwr5UECbsBGWj4TRIE0GSJv_jg2nB3CMVmZRhkP_ftF2wvfkqmZ76xghXVAnF0bteWdOMK");
    izdelaj(nizi, 90, "FQx");
    izdelaj(nizi, 91, "fXUqmGl5RSZCIZMlU30MyiiFMQ6E_t1Ne8sTiy12E8TiqAyLmv1j5ZuXMM7s4tv6tX0Y9BJYQatwJkwRL4W0Xmy0OVRA");
    izdelaj(nizi, 92, "ytR70E6NgIKeZ0yYMhaW37NbfSGKYT6bTYl8UD5GVgtAiGStcC");
    izdelaj(nizi, 93, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 94, "EbT6WaxLPAvzj05l30YdlvGdeDWp4xoWfrnKsWYeAFSTtYhn_xn07jB7t06Iw2LMARnB_JWgJGiAETw7");
    izdelaj(nizi, 95, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 96, "1NWdTojO4S4vVP1SOfefsb0SCOB1ksp");
    izdelaj(nizi, 97, "dejmZcDKJz212EAsm7aYtM5DTFVjyp_cXbRh6cO9D0G_KjQriJizlvmwEMK6Uu1NJuRKFoNTEg");
    izdelaj(nizi, 98, "lw9hwNTKC_1KkZmKOEaVDnA3gugwRfrsmlDwUaPb2XyD98tQ59uECh3kkwyA3KY5GYjTgMa206sXmljeNLlJERYM");
    izdelaj(nizi, 99, "kbGmEIy");
    izdelaj(nizi, 100, "lClXNYM6IsOcf_");
    izdelaj(nizi, 101, "S0PXcLaLPmzSaaTeF596bfir5N4cnf8PBcGSdnHgXxKrI1b23olgOGAd88VVnJJmw98EMZ2t9ZQe647EjlUb_p3");
    izdelaj(nizi, 102, "hCHKD8mnI_");
    izdelaj(nizi, 103, "6jKiv8l1s6jOe64P3fNPmQ9REW");
    izdelaj(nizi, 104, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 105, "RJ9zi");
    izdelaj(nizi, 106, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 107, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 108, "RJ9zi");
    izdelaj(nizi, 109, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 110, "kbGmEIy");
    izdelaj(nizi, 111, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 112, "RJ9zi");
    izdelaj(nizi, 113, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 114, "6jKiv8l1s6jOe64P3fNPmQ9REW");
    izdelaj(nizi, 115, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 116, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 117, "kbGmEIy");
    izdelaj(nizi, 118, "c97iYdrdbZxu2Hi2yYLcM3AIPn1W9QCtxUJ9G2kKIGt4hdJTSxUW7x7T7ki5lvddi011M");
    izdelaj(nizi, 119, "sIdbFt7jQLLPAdu1fyQ_knqcn4VkBDujmMtLJqT");
    izdelaj(nizi, 120, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 121, "lClXNYM6IsOcf_");
    izdelaj(nizi, 122, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 123, "1NWdTojO4S4vVP1SOfefsb0SCOB1ksp");
    izdelaj(nizi, 124, "RJ9zi");
    izdelaj(nizi, 125, "dejmZcDKJz212EAsm7aYtM5DTFVjyp_cXbRh6cO9D0G_KjQriJizlvmwEMK6Uu1NJuRKFoNTEg");
    izdelaj(nizi, 126, "1ouKoHj7HejlO1w1Sclhu2qVvgPBmAzwTpjZ9hWNwqM7HhRXguBnDexi9Btp7Om8SXLSCkbbe");
    izdelaj(nizi, 127, "OuE42kBg00Mkd5hZq2XaS_PE98x3v6QYS8oO2eJjSqPaKvZvg91dbRVT1");
    izdelaj(nizi, 128, "RJ9zi");
    izdelaj(nizi, 129, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 130, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 131, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 132, "fNqdlTIHu8EIqSNH9yayDBmfoxG9XA0VW6m1fhrLBX1TajuWL4UYNPx6XLIXIRuPqmteAl9khb0bH9_EWAXsZMgJGHcbrGl8Up7M");
    izdelaj(nizi, 133, "lClXNYM6IsOcf_");
    izdelaj(nizi, 134, "Rz8tuZSEYuPmOWWxZaa9BHPYfq8cp2ldXHiYZg8mlS7Dd7KdljgyMc19inAwqTqEJmMrjh9yMGg2x8y");
    izdelaj(nizi, 135, "MwqovXyU49heMMzirkV71rzOncf7TF40du3y3bXgSjmsTOlptkHPQg8rK1GmDURsSNMW9Z5");
    izdelaj(nizi, 136, "S3GVGiZmY3V_wcizZ0DrP8XdETwNSFmz3jdrQXVg5ftbYabi7Dh5O10Qr_frWpNezFUHpLnaF");
    izdelaj(nizi, 137, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 138, "ELCfTVTuW1ON_sMbtq2SbJhNt_YB6_OyJ9iIlTLa");
    izdelaj(nizi, 139, "MwqovXyU49heMMzirkV71rzOncf7TF40du3y3bXgSjmsTOlptkHPQg8rK1GmDURsSNMW9Z5");
    izdelaj(nizi, 140, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 141, "RJ9zi");
    izdelaj(nizi, 142, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 143, "dejmZcDKJz212EAsm7aYtM5DTFVjyp_cXbRh6cO9D0G_KjQriJizlvmwEMK6Uu1NJuRKFoNTEg");
    izdelaj(nizi, 144, "kbGmEIy");
    izdelaj(nizi, 145, "jB");
    izdelaj(nizi, 146, "dejmZcDKJz212EAsm7aYtM5DTFVjyp_cXbRh6cO9D0G_KjQriJizlvmwEMK6Uu1NJuRKFoNTEg");
    izdelaj(nizi, 147, "RJ9zi");
    izdelaj(nizi, 148, "Fj1u4vCtfiUjsBZ");
    izdelaj(nizi, 149, "FQx");
    izdelaj(nizi, 150, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 151, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 152, "sIdbFt7jQLLPAdu1fyQ_knqcn4VkBDujmMtLJqT");
    izdelaj(nizi, 153, "lClXNYM6IsOcf_");
    izdelaj(nizi, 154, "MwqovXyU49heMMzirkV71rzOncf7TF40du3y3bXgSjmsTOlptkHPQg8rK1GmDURsSNMW9Z5");
    izdelaj(nizi, 155, "RJ9zi");
    izdelaj(nizi, 156, "ngz3priRm2wW3xkeqS0mVBv44fE8YDL23KyOmRwfH2jmBJK6Lb9hpkVX_VVi2A_JwCisesSLzPIcXnNZbn");
    izdelaj(nizi, 157, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 158, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 159, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 160, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 161, "FuR3VRtkdfprK4Cjsu");
    izdelaj(nizi, 162, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 163, "1NWdTojO4S4vVP1SOfefsb0SCOB1ksp");
    izdelaj(nizi, 164, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 165, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 166, "eBSv0vydQa");
    izdelaj(nizi, 167, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 168, "ytR70E6NgIKeZ0yYMhaW37NbfSGKYT6bTYl8UD5GVgtAiGStcC");
    izdelaj(nizi, 169, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 170, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 171, "EbT6WaxLPAvzj05l30YdlvGdeDWp4xoWfrnKsWYeAFSTtYhn_xn07jB7t06Iw2LMARnB_JWgJGiAETw7");
    izdelaj(nizi, 172, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 173, "YHXmY5S5fIQDes4g1emk1V3JkNietf0JtF9fVFJgFIjUiXLK6b1sFr1SZ4EJ791ztBmQ7Ud50BW0RU5yEP6qVONA");
    izdelaj(nizi, 174, "RJ9zi");
    izdelaj(nizi, 175, "RJ9zi");
    izdelaj(nizi, 176, "lClXNYM6IsOcf_");
    izdelaj(nizi, 177, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 178, "6jKiv8l1s6jOe64P3fNPmQ9REW");
    izdelaj(nizi, 179, "6jKiv8l1s6jOe64P3fNPmQ9REW");
    izdelaj(nizi, 180, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 181, "eBSv0vydQa");
    izdelaj(nizi, 182, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 183, "kbGmEIy");
    izdelaj(nizi, 184, "1NWdTojO4S4vVP1SOfefsb0SCOB1ksp");
    izdelaj(nizi, 185, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 186, "tQ3Wd1mtOcoV88CbFM1rkXSrJVBq_DJLXub7w9JDDeGuZH_stm_ELoOmkhyQtk1aGMawt7Jn8Snq2_j5WSv76");
    izdelaj(nizi, 187, "YHXmY5S5fIQDes4g1emk1V3JkNietf0JtF9fVFJgFIjUiXLK6b1sFr1SZ4EJ791ztBmQ7Ud50BW0RU5yEP6qVONA");
    izdelaj(nizi, 188, "12Uz1aOnekjYYgazC_K6Xk8X6LojYip0GMDwhpxRHppp5TzbBM3aREb2uX6fJtxxYrgC7nq744wZvGjsFt1VEuiDliumK6JvPw");
    izdelaj(nizi, 189, "kbGmEIy");
    izdelaj(nizi, 190, "FuR3VRtkdfprK4Cjsu");
    izdelaj(nizi, 191, "RJ9zi");
    izdelaj(nizi, 192, "YHXmY5S5fIQDes4g1emk1V3JkNietf0JtF9fVFJgFIjUiXLK6b1sFr1SZ4EJ791ztBmQ7Ud50BW0RU5yEP6qVONA");
    izdelaj(nizi, 193, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 194, "Ijv9yMAl");
    izdelaj(nizi, 195, "rgIAgTlaHnO0Prydrsiuw1gMyoikhkxkiPwyepPKkERyNDIotrVzxaiHjnvacdeNxcPgvUziHo_");
    izdelaj(nizi, 196, "GEiK6LnUwPyYOYMbZ8hlgTHb1uNG8FJa3tROhrPoPPWDLfjtofjsLyEp0yplzaGsSBTnLtQQDkFBO");
    izdelaj(nizi, 197, "0SkIVHdZ");
    izdelaj(nizi, 198, "ytR70E6NgIKeZ0yYMhaW37NbfSGKYT6bTYl8UD5GVgtAiGStcC");
    izdelaj(nizi, 199, "s4xuRkgHLpFmTz1b1NNSXmNM5kY4P3eApgWKnF1b45WkLsXq6MCQOz2JwTNPac7PUfcKpTGM8dP6iq51yXiM6");
    izdelaj(nizi, 200, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 201, "RJ9zi");
    izdelaj(nizi, 202, "EbT6WaxLPAvzj05l30YdlvGdeDWp4xoWfrnKsWYeAFSTtYhn_xn07jB7t06Iw2LMARnB_JWgJGiAETw7");
    izdelaj(nizi, 203, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 204, "RJ9zi");
    izdelaj(nizi, 205, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 206, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 207, "AHT_9QRjQaNW4HXQXhqCI18N2M2ajpRem");
    izdelaj(nizi, 208, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 209, "1NWdTojO4S4vVP1SOfefsb0SCOB1ksp");
    izdelaj(nizi, 210, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 211, "jB");
    izdelaj(nizi, 212, "jnKFBFZIc");
    izdelaj(nizi, 213, "ytR70E6NgIKeZ0yYMhaW37NbfSGKYT6bTYl8UD5GVgtAiGStcC");
    izdelaj(nizi, 214, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 215, "T");
    izdelaj(nizi, 216, "qHx4bMD");
    izdelaj(nizi, 217, "6EhBquxODPDhavJBic1C_yEplXCEDxWSE48A1Gfjw5BgyifAiPz1fkYpj1APbc9C7paG0v0U");
    izdelaj(nizi, 218, "sIdbFt7jQLLPAdu1fyQ_knqcn4VkBDujmMtLJqT");
    izdelaj(nizi, 219, "hJARg7nn");
    izdelaj(nizi, 220, "xAhqWx2bTEMenwVFjyMnovmeQ3vd_BV6d4cz6tf7M7TBAPuRL6sIHqiJc8HTFz1");
    izdelaj(nizi, 221, "sG9ArBclVxANvZg6VOM734Wn_SX");
    izdelaj(nizi, 222, "dcSGdZwH7A3z1DIeNXN7dKBdoT");
    izdelaj(nizi, 223, "bflALpbTt_XXFs5so7xBRnM4XvGuys_BJqJnfnGbTC3MBJiPhNa0Lesurz0LJ");
    izdelaj(nizi, 224, "gdUVvC0Mpkahp1NMWMFHLmeLL3Cj169EKIbovECGaFAVMwPJCAGDFtO3B");
    izdelaj(nizi, 225, "mwhc9k71QpHJYrk");
    izdelaj(nizi, 226, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 227, "kbGmEIy");
    izdelaj(nizi, 228, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 229, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 230, "lClXNYM6IsOcf_");
    izdelaj(nizi, 231, "Rz8tuZSEYuPmOWWxZaa9BHPYfq8cp2ldXHiYZg8mlS7Dd7KdljgyMc19inAwqTqEJmMrjh9yMGg2x8y");
    izdelaj(nizi, 232, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 233, "XOMUiLxQ_ORmwnKXV1pr");
    izdelaj(nizi, 234, "3IcEkzvMV7mbHQf8qtJnwicpna__TfgJ4ll21wS0zJg_XtKRRzXv7o8mLGptZSM12wJB0qNG2Dsme8NL");
    izdelaj(nizi, 235, "RJ9zi");
    izdelaj(nizi, 236, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 237, "RJ9zi");
    izdelaj(nizi, 238, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 239, "sgcGDgknyGxkDZ60P5potkNwu_iRVsTQ");
    izdelaj(nizi, 240, "s4xuRkgHLpFmTz1b1NNSXmNM5kY4P3eApgWKnF1b45WkLsXq6MCQOz2JwTNPac7PUfcKpTGM8dP6iq51yXiM6");
    izdelaj(nizi, 241, "iooW1SreSRCZkLXm3MMPYJlz4");
    izdelaj(nizi, 242, "HxjgSXtEsRnzfZ8ikfQM9364WkF5vExFizHe_FrvL_KuN95nQII7bxKleRSnjig9ct");
    izdelaj(nizi, 243, "j_yDk48");
    izdelaj(nizi, 244, "rrs6pcpxErQ_YJyydKu8tfOuFvTv0IzbLYsztT5YoO8PE");
    izdelaj(nizi, 245, "ngz3priRm2wW3xkeqS0mVBv44fE8YDL23KyOmRwfH2jmBJK6Lb9hpkVX_VVi2A_JwCisesSLzPIcXnNZbn");
    izdelaj(nizi, 246, "_5aOe4");
    izdelaj(nizi, 247, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 248, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 249, "EdywZr8Ol_xzyWLx4kZ");
    izdelaj(nizi, 250, "kbGmEIy");
    izdelaj(nizi, 251, "lClXNYM6IsOcf_");
    izdelaj(nizi, 252, "J34mxjgNfELIHGIGt0WsoUdZxKYDYUjlYCLl5bUV5fPtYSVBP5HqQ8XASsgshOb5G_8aEs2BkE");
    izdelaj(nizi, 253, "RJ9zi");
    izdelaj(nizi, 254, "RJ9zi");
    izdelaj(nizi, 255, "YHXmY5S5fIQDes4g1emk1V3JkNietf0JtF9fVFJgFIjUiXLK6b1sFr1SZ4EJ791ztBmQ7Ud50BW0RU5yEP6qVONA");
    izdelaj(nizi, 256, "c97iYdrdbZxu2Hi2yYLcM3AIPn1W9QCtxUJ9G2kKIGt4hdJTSxUW7x7T7ki5lvddi011M");
    izdelaj(nizi, 257, "S0PXcLaLPmzSaaTeF596bfir5N4cnf8PBcGSdnHgXxKrI1b23olgOGAd88VVnJJmw98EMZ2t9ZQe647EjlUb_p3");
    izdelaj(nizi, 258, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 259, "y9slypszih8eCvcKtOqfBPmypS");
    izdelaj(nizi, 260, "6jKiv8l1s6jOe64P3fNPmQ9REW");
    izdelaj(nizi, 261, "_4Iu_u91kaKbO");
    izdelaj(nizi, 262, "lClXNYM6IsOcf_");
    izdelaj(nizi, 263, "648IAUe21ofSWKT8jFkj3NZHLr0IhShKeo6ZXaW1iE1IsomayKhsNPrtIh6_hUqWTYO9ndsRxYzrfih02FN3eg");
    izdelaj(nizi, 264, "ytR70E6NgIKeZ0yYMhaW37NbfSGKYT6bTYl8UD5GVgtAiGStcC");
    izdelaj(nizi, 265, "lClXNYM6IsOcf_");
    izdelaj(nizi, 266, "2elfdk1yOos5RVA47gY2gbps10uwGPGL6qq26eWJFeKq8XY0bTOyLBWw_qZKwgZaYg0PoMfpwaO9ey34_RRekhSr");
    izdelaj(nizi, 267, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 268, "MXjNr1doezvUZZp5304r");
    izdelaj(nizi, 269, "48K6_Gd7xv_uzb_oMyFJ5BosVw_7Kk9Ic1gzqSHOVes");
    izdelaj(nizi, 270, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 271, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 272, "kbGmEIy");
    izdelaj(nizi, 273, "ZwsLxfXVX5SjZQweJQVKEb5E47os2");
    izdelaj(nizi, 274, "Rz8tuZSEYuPmOWWxZaa9BHPYfq8cp2ldXHiYZg8mlS7Dd7KdljgyMc19inAwqTqEJmMrjh9yMGg2x8y");
    izdelaj(nizi, 275, "501rA7zSO9CMRHG5VsEAUBEM_8ZaiwsHueXGaFM51oqAZ3PvnSDId8AnCNfQoinXI8Wyj3vy8246qtI3EqpG8kiAojOu2TRxF4");
    izdelaj(nizi, 276, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 277, "7OSSTmKwUiMQXt1IoH0Q_aO2hGg2GGUdYB");
    izdelaj(nizi, 278, "EbT6WaxLPAvzj05l30YdlvGdeDWp4xoWfrnKsWYeAFSTtYhn_xn07jB7t06Iw2LMARnB_JWgJGiAETw7");
    izdelaj(nizi, 279, "_7lrlAXgYm9O0VWtepFscV6rruVp6zrYAQHxm3GAffVkXAg_jv7mTl39Kz");
    izdelaj(nizi, 280, "r_0z6UiKZVa6qj3TPbjyVqsr5_ciLidVvu2_XHu_tNi79LbTFJYT_kOPuZEusp");
    izdelaj(nizi, 281, "tuzZQxo");
    izdelaj(nizi, 282, "NwD58zh3gtLhqOCZA2h9uvEYMGDFf5FSw26EKKLWpUc");
    izdelaj(nizi, 283, "KqRXzaJeqR7bopVfu8qYk9mdT29rqO6rYJ6MEmWuafxZzJPRH");
    izdelaj(nizi, 284, "hJARg7nn");
    izdelaj(nizi, 285, "gvHZS6MV8PDt3EdhuYRkAFPclwZMp50AssbNDuouS0voyknIopgoSpDhciAytsf2i_hVLD");
    izdelaj(nizi, 286, "rdCM2tliWWKgfZMI3eOwxDcKh72xFoDh8IpBwDTx");
    izdelaj(nizi, 287, "RJ9zi");
    izdelaj(nizi, 288, "YHXmY5S5fIQDes4g1emk1V3JkNietf0JtF9fVFJgFIjUiXLK6b1sFr1SZ4EJ791ztBmQ7Ud50BW0RU5yEP6qVONA");
    izdelaj(nizi, 289, "7qr4lOIvXPCKAjmt_gkappejNL_qijO5BgVKm");

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
