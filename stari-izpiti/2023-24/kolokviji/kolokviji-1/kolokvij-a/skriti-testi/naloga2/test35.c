
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
    int n = 484;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 1, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 2, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 3, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 4, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 5, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 6, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 7, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 8, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 9, "pKhdHWsN6Xi3GgFa40EPGz833RTtj2WJ0WbqkkQ1NqjgEq98E5OXQ4UfMBvaDgey_BpdIbR_oe4aB6Xj6WubN3nbXwKPc4OvxOQ");
    izdelaj(nizi, 10, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 11, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 12, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 13, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 14, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 15, "01X7l3yTy");
    izdelaj(nizi, 16, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 17, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 18, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 19, "fJINyGIoSg");
    izdelaj(nizi, 20, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 21, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 22, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 23, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 24, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 25, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 26, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 27, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 28, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 29, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 30, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 31, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 32, "01X7l3yTy");
    izdelaj(nizi, 33, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 34, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 35, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 36, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 37, "fJINyGIoSg");
    izdelaj(nizi, 38, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 39, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 40, "1hM5HXWSCqjEdhAELi2jErjy_WivuiR0rsWWPfpzo5r9B4g_y2zEjkjUzpo");
    izdelaj(nizi, 41, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 42, "01X7l3yTy");
    izdelaj(nizi, 43, "01X7l3yTy");
    izdelaj(nizi, 44, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 45, "01X7l3yTy");
    izdelaj(nizi, 46, "s8ENzNazu1jNCfq8C1DmGaqBf46RKoJgbXzKKCnXvsL_5PZQSPLHVJac5iXod");
    izdelaj(nizi, 47, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 48, "fJINyGIoSg");
    izdelaj(nizi, 49, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 50, "01X7l3yTy");
    izdelaj(nizi, 51, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 52, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 53, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 54, "33t_yaVntgOGhXOYaOc98duxB_KXTV7BmJ_xsAJxDXw5k6SQFqhnE");
    izdelaj(nizi, 55, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 56, "01X7l3yTy");
    izdelaj(nizi, 57, "01X7l3yTy");
    izdelaj(nizi, 58, "7UX0qOs60ybEPc1AZvM7AfVUs5P8dYEe1Xi_vZ3gLz_nXC9vKm4NBs13JyYqaZVuHOfuY3m_yga0R2hYjq1Qg55YSP");
    izdelaj(nizi, 59, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 60, "fJINyGIoSg");
    izdelaj(nizi, 61, "0_7EVXV");
    izdelaj(nizi, 62, "01X7l3yTy");
    izdelaj(nizi, 63, "kpQlJdv2BRLlmXXw0Hgkj6kVYFvMZ5yJtBjeW7xZLHD5hZNMWz");
    izdelaj(nizi, 64, "f8ELXfPMy3mjASOObinmrkdAjgeogCw8qisMb8Ysln2pKTa_teHj0ReRFNSRXOFG_uZRcxFIUI62q0L");
    izdelaj(nizi, 65, "QwPgGfU8ShZkd");
    izdelaj(nizi, 66, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 67, "TIROdBugInufaUK_1IWIkUI57JAsP");
    izdelaj(nizi, 68, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 69, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 70, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 71, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 72, "QwPgGfU8ShZkd");
    izdelaj(nizi, 73, "QwPgGfU8ShZkd");
    izdelaj(nizi, 74, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 75, "fJINyGIoSg");
    izdelaj(nizi, 76, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 77, "2uVxSCAC9shtZj7cWFyQGIh0ZXQ2Dyi6aIEzjZulUSsEDKU7A4fCLq6joC8DbDIAayeRaGMnRrrvpITqA59G_hRIfI3Dxn");
    izdelaj(nizi, 78, "QwPgGfU8ShZkd");
    izdelaj(nizi, 79, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 80, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 81, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 82, "fJINyGIoSg");
    izdelaj(nizi, 83, "01X7l3yTy");
    izdelaj(nizi, 84, "9SuWmPzGsBLe");
    izdelaj(nizi, 85, "ALPYyejmU76Sg7c4C1c94tIknDGnMHe8VAAj2biGE0O9Ngi1RyfQQkpMrXigO4HQVuTTJYoABREkjMEgJo5R1lXSfckZe_");
    izdelaj(nizi, 86, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 87, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 88, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 89, "01X7l3yTy");
    izdelaj(nizi, 90, "sbNmtcoRAE11i5Gz6UAi");
    izdelaj(nizi, 91, "m0F1sB4_h2S");
    izdelaj(nizi, 92, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 93, "NspEiguccjjPanO8Yeyybp2uo");
    izdelaj(nizi, 94, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 95, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 96, "01X7l3yTy");
    izdelaj(nizi, 97, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 98, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 99, "n");
    izdelaj(nizi, 100, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 101, "hCtNb5VNwoCeBCsNNZRNcf6uSuZeHRJ30Cf1RQCcKssfVES");
    izdelaj(nizi, 102, "hyWlZT97m25ng4o56gSjX1");
    izdelaj(nizi, 103, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 104, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 105, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 106, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 107, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 108, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 109, "7b2dtq_cTEIG6");
    izdelaj(nizi, 110, "pKhdHWsN6Xi3GgFa40EPGz833RTtj2WJ0WbqkkQ1NqjgEq98E5OXQ4UfMBvaDgey_BpdIbR_oe4aB6Xj6WubN3nbXwKPc4OvxOQ");
    izdelaj(nizi, 111, "0_7EVXV");
    izdelaj(nizi, 112, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 113, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 114, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 115, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 116, "LxRy7KSDgt9mtPEkcdcjrabxdDDPmr16KioWHSQm56jKsYkctOJjCLywz7ebTLhJPzm3lA");
    izdelaj(nizi, 117, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 118, "1hM5HXWSCqjEdhAELi2jErjy_WivuiR0rsWWPfpzo5r9B4g_y2zEjkjUzpo");
    izdelaj(nizi, 119, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 120, "USoVp9YptsZ33gQZM7_wv0rvFIinmXEY68GWPHhPv_XCTSeFDCwYrT8sBwkoIomQtvq3JWCDOcKNbIFqdFGf7pgxYQzT88mh");
    izdelaj(nizi, 121, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 122, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 123, "ALPYyejmU76Sg7c4C1c94tIknDGnMHe8VAAj2biGE0O9Ngi1RyfQQkpMrXigO4HQVuTTJYoABREkjMEgJo5R1lXSfckZe_");
    izdelaj(nizi, 124, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 125, "01X7l3yTy");
    izdelaj(nizi, 126, "bccESkyMAf7XEgDtr3jwj72jC2K_P4N7b0EGqPni0PtW1hAnpn");
    izdelaj(nizi, 127, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 128, "fJINyGIoSg");
    izdelaj(nizi, 129, "vuORqYz9eJua3SdVpe2XeaGq0SHE52S1lABDx7ZEBZXzQVW6ReHO9kW2Xk4IS8xnrCP9wCL4rLzsXfGbP");
    izdelaj(nizi, 130, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 131, "OuaORyrjDFgt7nOql_3SJy_XfF_STgV04IykzGKe8HH7_jx2nt2oIsTUSFA0tjEBW0umVRCzrjgnc3fKPrPW");
    izdelaj(nizi, 132, "Q1ESd8ycgWPodmI2bcyTdzXJXHMZOVpDqPj4sEqN2DXUaNuBPPlbU5Sp3AFFwPdfMb60LaaBCzaP3eQ");
    izdelaj(nizi, 133, "01X7l3yTy");
    izdelaj(nizi, 134, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 135, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 136, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 137, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 138, "vuORqYz9eJua3SdVpe2XeaGq0SHE52S1lABDx7ZEBZXzQVW6ReHO9kW2Xk4IS8xnrCP9wCL4rLzsXfGbP");
    izdelaj(nizi, 139, "HE7_VQzIkEPMFkuIPq2onjzzoFV0DEVt_4ErXII_Vl3JzOYggS7NphPdZGaFifyP7zZOGCiWQ");
    izdelaj(nizi, 140, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 141, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 142, "ALPYyejmU76Sg7c4C1c94tIknDGnMHe8VAAj2biGE0O9Ngi1RyfQQkpMrXigO4HQVuTTJYoABREkjMEgJo5R1lXSfckZe_");
    izdelaj(nizi, 143, "7UX0qOs60ybEPc1AZvM7AfVUs5P8dYEe1Xi_vZ3gLz_nXC9vKm4NBs13JyYqaZVuHOfuY3m_yga0R2hYjq1Qg55YSP");
    izdelaj(nizi, 144, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 145, "hyWlZT97m25ng4o56gSjX1");
    izdelaj(nizi, 146, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 147, "NspEiguccjjPanO8Yeyybp2uo");
    izdelaj(nizi, 148, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 149, "USoVp9YptsZ33gQZM7_wv0rvFIinmXEY68GWPHhPv_XCTSeFDCwYrT8sBwkoIomQtvq3JWCDOcKNbIFqdFGf7pgxYQzT88mh");
    izdelaj(nizi, 150, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 151, "QwPgGfU8ShZkd");
    izdelaj(nizi, 152, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 153, "HhCW2Xv7PX3qLG8cLArBeZKeoyCDpB9m7");
    izdelaj(nizi, 154, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 155, "01X7l3yTy");
    izdelaj(nizi, 156, "fJINyGIoSg");
    izdelaj(nizi, 157, "gnPWNuTeGuTmU9RXn6tmmZ8vdZxly8QuRGoYYxCDWKA78GtNvcU4UhSIioIn3O");
    izdelaj(nizi, 158, "n");
    izdelaj(nizi, 159, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 160, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 161, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 162, "ksIwQ4O4bCa6Ol77siLkfYcPFItL8i7mX_DlZb7hO7jnxeUqkiLbSD8aWCKaWYEAVxcK65isN9s1VQXRyo");
    izdelaj(nizi, 163, "QwPgGfU8ShZkd");
    izdelaj(nizi, 164, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 165, "1tENXCX1MBd2XJyaC74JfnhYuNKq9m3WwAvg3h0P4F1hjI0mVSdQxsVKe68n_vNol4zC694Hv");
    izdelaj(nizi, 166, "d_aTx7MrsDitZyM5pH8jzSZldNY9CAgJdiyh5Lef02LHwtrwIN7u29RnL");
    izdelaj(nizi, 167, "g6eypJOMUjUtQBFWX3HuY0rST4ZbfW_ULnfJ0w8uZDm_naTCRb5qp5ffRcRj5fN9Wl39Qt0uDtGYElQAETSkhZGnrInOcdKMn");
    izdelaj(nizi, 168, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 169, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 170, "n");
    izdelaj(nizi, 171, "92_pw5CbeGtELTr8Y1CVPME9l3gebtqNK5eBLEkwWDHX0Mh2M68Moh0SHNQxqv7");
    izdelaj(nizi, 172, "NVecnNzHeCSXDaKyh6cBgLBazHHJ1naxPNk7CDaXbV3HE9Yoq09ANaXbcNzMBM3XvmJBbDabQBy");
    izdelaj(nizi, 173, "g6eypJOMUjUtQBFWX3HuY0rST4ZbfW_ULnfJ0w8uZDm_naTCRb5qp5ffRcRj5fN9Wl39Qt0uDtGYElQAETSkhZGnrInOcdKMn");
    izdelaj(nizi, 174, "C3RrmgCAbzhDkNEJSwN8QRl");
    izdelaj(nizi, 175, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 176, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 177, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 178, "01X7l3yTy");
    izdelaj(nizi, 179, "7b2dtq_cTEIG6");
    izdelaj(nizi, 180, "s8ENzNazu1jNCfq8C1DmGaqBf46RKoJgbXzKKCnXvsL_5PZQSPLHVJac5iXod");
    izdelaj(nizi, 181, "0_7EVXV");
    izdelaj(nizi, 182, "v2Anq5FsYtlrVmM4wvnyMhg7wXUMr421p8KFepTFIq6xE5y6GVHl0");
    izdelaj(nizi, 183, "2uVxSCAC9shtZj7cWFyQGIh0ZXQ2Dyi6aIEzjZulUSsEDKU7A4fCLq6joC8DbDIAayeRaGMnRrrvpITqA59G_hRIfI3Dxn");
    izdelaj(nizi, 184, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 185, "USoVp9YptsZ33gQZM7_wv0rvFIinmXEY68GWPHhPv_XCTSeFDCwYrT8sBwkoIomQtvq3JWCDOcKNbIFqdFGf7pgxYQzT88mh");
    izdelaj(nizi, 186, "XDkFJFIRUDCQ9G1oEMIeCzcsKVHaZBgm3Zcd664");
    izdelaj(nizi, 187, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 188, "0_7EVXV");
    izdelaj(nizi, 189, "USoVp9YptsZ33gQZM7_wv0rvFIinmXEY68GWPHhPv_XCTSeFDCwYrT8sBwkoIomQtvq3JWCDOcKNbIFqdFGf7pgxYQzT88mh");
    izdelaj(nizi, 190, "zfP87YGG4bdoL4hcSRTKeo9EgdCb1msabM2M6f2KmrbvMlx");
    izdelaj(nizi, 191, "01X7l3yTy");
    izdelaj(nizi, 192, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 193, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 194, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 195, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 196, "cAl1ic8Trxv_Lg6nijP83tlZKJ2Mj8bhXSlMrQtFf9");
    izdelaj(nizi, 197, "OuaORyrjDFgt7nOql_3SJy_XfF_STgV04IykzGKe8HH7_jx2nt2oIsTUSFA0tjEBW0umVRCzrjgnc3fKPrPW");
    izdelaj(nizi, 198, "pWG7MPhkTRsgpKeeFP8LEkPnAFzvmAE5dzGQQM62jySIRauz7DS0vFlr9mEei1a1htL10JO3_ejVD");
    izdelaj(nizi, 199, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 200, "XDkFJFIRUDCQ9G1oEMIeCzcsKVHaZBgm3Zcd664");
    izdelaj(nizi, 201, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 202, "n");
    izdelaj(nizi, 203, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 204, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 205, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 206, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 207, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 208, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 209, "01X7l3yTy");
    izdelaj(nizi, 210, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 211, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 212, "8x9LwP5U5hjwGdO5hxGJ5TooavbesAMKg3N2dikLdnVT7GXQzrwJ7Cd");
    izdelaj(nizi, 213, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 214, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 215, "92_pw5CbeGtELTr8Y1CVPME9l3gebtqNK5eBLEkwWDHX0Mh2M68Moh0SHNQxqv7");
    izdelaj(nizi, 216, "fJINyGIoSg");
    izdelaj(nizi, 217, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 218, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 219, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 220, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 221, "zfP87YGG4bdoL4hcSRTKeo9EgdCb1msabM2M6f2KmrbvMlx");
    izdelaj(nizi, 222, "yg_ljLqR_vV1wzE4fDQm_LL4RMl2");
    izdelaj(nizi, 223, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 224, "QwPgGfU8ShZkd");
    izdelaj(nizi, 225, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 226, "fJINyGIoSg");
    izdelaj(nizi, 227, "ALPYyejmU76Sg7c4C1c94tIknDGnMHe8VAAj2biGE0O9Ngi1RyfQQkpMrXigO4HQVuTTJYoABREkjMEgJo5R1lXSfckZe_");
    izdelaj(nizi, 228, "ALPYyejmU76Sg7c4C1c94tIknDGnMHe8VAAj2biGE0O9Ngi1RyfQQkpMrXigO4HQVuTTJYoABREkjMEgJo5R1lXSfckZe_");
    izdelaj(nizi, 229, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 230, "gbSCv9ytgAeYvh");
    izdelaj(nizi, 231, "fJINyGIoSg");
    izdelaj(nizi, 232, "01X7l3yTy");
    izdelaj(nizi, 233, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 234, "UAn8r_SZPn_nl7NoHXi0X8wK8KwaaSVgCxpehUfR3GhDVvAxg9KPmfRP");
    izdelaj(nizi, 235, "v2Anq5FsYtlrVmM4wvnyMhg7wXUMr421p8KFepTFIq6xE5y6GVHl0");
    izdelaj(nizi, 236, "92_pw5CbeGtELTr8Y1CVPME9l3gebtqNK5eBLEkwWDHX0Mh2M68Moh0SHNQxqv7");
    izdelaj(nizi, 237, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 238, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 239, "v2Anq5FsYtlrVmM4wvnyMhg7wXUMr421p8KFepTFIq6xE5y6GVHl0");
    izdelaj(nizi, 240, "0_7EVXV");
    izdelaj(nizi, 241, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 242, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 243, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 244, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 245, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 246, "9hfnvwzRAspJgCxHg6ys5_HKyw");
    izdelaj(nizi, 247, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 248, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 249, "XDkFJFIRUDCQ9G1oEMIeCzcsKVHaZBgm3Zcd664");
    izdelaj(nizi, 250, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 251, "0Y7y4QQg0WudnQu1ESbNqvc48BmTosaok06LLVDdGMbTibLMnOfbQTZ8RYX2ndvGIoV24n06a4Z5O4WetAzbpb6");
    izdelaj(nizi, 252, "01X7l3yTy");
    izdelaj(nizi, 253, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 254, "01X7l3yTy");
    izdelaj(nizi, 255, "2hxBPW8s7lgVpYlesHzis0jhNbRebOI0XaQQLMQC2GlnJ8");
    izdelaj(nizi, 256, "9SuWmPzGsBLe");
    izdelaj(nizi, 257, "01X7l3yTy");
    izdelaj(nizi, 258, "01X7l3yTy");
    izdelaj(nizi, 259, "0_7EVXV");
    izdelaj(nizi, 260, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 261, "4PbguVroh_ShG_V874GDCx2XL4SWrqLt41xzJBOfPkrw58LuEwMB_ypcYPRDz2Pm8rSD4");
    izdelaj(nizi, 262, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 263, "jE6y1KAC_");
    izdelaj(nizi, 264, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 265, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 266, "fJINyGIoSg");
    izdelaj(nizi, 267, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 268, "n");
    izdelaj(nizi, 269, "2BMIsLTM");
    izdelaj(nizi, 270, "fJINyGIoSg");
    izdelaj(nizi, 271, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 272, "hyWlZT97m25ng4o56gSjX1");
    izdelaj(nizi, 273, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 274, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 275, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 276, "pKhdHWsN6Xi3GgFa40EPGz833RTtj2WJ0WbqkkQ1NqjgEq98E5OXQ4UfMBvaDgey_BpdIbR_oe4aB6Xj6WubN3nbXwKPc4OvxOQ");
    izdelaj(nizi, 277, "QwPgGfU8ShZkd");
    izdelaj(nizi, 278, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 279, "01X7l3yTy");
    izdelaj(nizi, 280, "7b2dtq_cTEIG6");
    izdelaj(nizi, 281, "LMBTzSjry8XbqlB3oostbXoVCAnXIhHKC4ivUeST8FfrJ1lVaAeFRy6OYTIuFDEjqVlvVghRWea82iQVxMgrYcRe_pEPVSdvtc");
    izdelaj(nizi, 282, "TIROdBugInufaUK_1IWIkUI57JAsP");
    izdelaj(nizi, 283, "M_l_GpxeNnHDnLtoRm4hmggrPM6R1Yet");
    izdelaj(nizi, 284, "2uVxSCAC9shtZj7cWFyQGIh0ZXQ2Dyi6aIEzjZulUSsEDKU7A4fCLq6joC8DbDIAayeRaGMnRrrvpITqA59G_hRIfI3Dxn");
    izdelaj(nizi, 285, "HE7_VQzIkEPMFkuIPq2onjzzoFV0DEVt_4ErXII_Vl3JzOYggS7NphPdZGaFifyP7zZOGCiWQ");
    izdelaj(nizi, 286, "7fiNRSv5N1JbQO_077oPNU0rCRDrVtibUnykT");
    izdelaj(nizi, 287, "sbNmtcoRAE11i5Gz6UAi");
    izdelaj(nizi, 288, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 289, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 290, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 291, "LxRy7KSDgt9mtPEkcdcjrabxdDDPmr16KioWHSQm56jKsYkctOJjCLywz7ebTLhJPzm3lA");
    izdelaj(nizi, 292, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 293, "fJINyGIoSg");
    izdelaj(nizi, 294, "0LUL21lVZcEt6mV8n1WdGt_W8Q2Ol4KyY7TyiePqFaK6ajPuNwsEdrJSW8ZJkIhy");
    izdelaj(nizi, 295, "n");
    izdelaj(nizi, 296, "fJINyGIoSg");
    izdelaj(nizi, 297, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 298, "IXOSlQMTghroPuYMHEsZR");
    izdelaj(nizi, 299, "sbNmtcoRAE11i5Gz6UAi");
    izdelaj(nizi, 300, "h6DXHjLJLrqkkjyzAZZxcABTBg_frlVcdOL3vpP3y8g06K8_mQpc");
    izdelaj(nizi, 301, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 302, "0_7EVXV");
    izdelaj(nizi, 303, "kf6nMIpPp2WoSrljfpd33rKGprv_i6cNEJXDJoqiuUwC4AwSEjqGaTySKxHiJdbU7e6TDEVFsxjgauTUOx36q7UPjZR19XWSJRTc");
    izdelaj(nizi, 304, "vV1FbIVvZoFDefFg7Ow8M1GIMZPIRteEj5hXXm_cOSLzjK9a_dBNVbK2");
    izdelaj(nizi, 305, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 306, "fGyCLbPDLWoSGIecfZ6L6VV8Wec5Wnmg8_2HzzNf9C1Ks2pU5QOoAhhnP");
    izdelaj(nizi, 307, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 308, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 309, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 310, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 311, "01X7l3yTy");
    izdelaj(nizi, 312, "7UX0qOs60ybEPc1AZvM7AfVUs5P8dYEe1Xi_vZ3gLz_nXC9vKm4NBs13JyYqaZVuHOfuY3m_yga0R2hYjq1Qg55YSP");
    izdelaj(nizi, 313, "01X7l3yTy");
    izdelaj(nizi, 314, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 315, "HE7_VQzIkEPMFkuIPq2onjzzoFV0DEVt_4ErXII_Vl3JzOYggS7NphPdZGaFifyP7zZOGCiWQ");
    izdelaj(nizi, 316, "W124qfEpvdgdAfNnJr2L4J_Rj1hXHRpFziCrJpeQnM0fsIMHDpWZ0aiE0PWNpc01fPWa");
    izdelaj(nizi, 317, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 318, "n");
    izdelaj(nizi, 319, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 320, "vuORqYz9eJua3SdVpe2XeaGq0SHE52S1lABDx7ZEBZXzQVW6ReHO9kW2Xk4IS8xnrCP9wCL4rLzsXfGbP");
    izdelaj(nizi, 321, "LMBTzSjry8XbqlB3oostbXoVCAnXIhHKC4ivUeST8FfrJ1lVaAeFRy6OYTIuFDEjqVlvVghRWea82iQVxMgrYcRe_pEPVSdvtc");
    izdelaj(nizi, 322, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 323, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 324, "gF_V4bbCHp0WbQbIc8VVS96xQl8rAYuOgYENW8rwJMM0HmM6N9um_KV5o22imzVslVnuz71a6hOs5nYBC4");
    izdelaj(nizi, 325, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 326, "01X7l3yTy");
    izdelaj(nizi, 327, "01X7l3yTy");
    izdelaj(nizi, 328, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 329, "01X7l3yTy");
    izdelaj(nizi, 330, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 331, "UAn8r_SZPn_nl7NoHXi0X8wK8KwaaSVgCxpehUfR3GhDVvAxg9KPmfRP");
    izdelaj(nizi, 332, "g6eypJOMUjUtQBFWX3HuY0rST4ZbfW_ULnfJ0w8uZDm_naTCRb5qp5ffRcRj5fN9Wl39Qt0uDtGYElQAETSkhZGnrInOcdKMn");
    izdelaj(nizi, 333, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 334, "E1LcZHaMr8f96czYeTybRA0Qz5IvE09zPY73h5BYKnBRB0UbvqERBc3plZwd8YiE3DqHJfygi6Di");
    izdelaj(nizi, 335, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 336, "hrrmw4e2oQywuXlS4s3VnSRjp17HH4WjnZfFwj2ivyEcOOPpI_iRsEymj71sov");
    izdelaj(nizi, 337, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 338, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 339, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 340, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 341, "UAn8r_SZPn_nl7NoHXi0X8wK8KwaaSVgCxpehUfR3GhDVvAxg9KPmfRP");
    izdelaj(nizi, 342, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 343, "hCtNb5VNwoCeBCsNNZRNcf6uSuZeHRJ30Cf1RQCcKssfVES");
    izdelaj(nizi, 344, "QwPgGfU8ShZkd");
    izdelaj(nizi, 345, "vV1FbIVvZoFDefFg7Ow8M1GIMZPIRteEj5hXXm_cOSLzjK9a_dBNVbK2");
    izdelaj(nizi, 346, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 347, "xFyGB5v7QEeON_NPZpjYZGUobBprXL1MP0VWM");
    izdelaj(nizi, 348, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 349, "hyWlZT97m25ng4o56gSjX1");
    izdelaj(nizi, 350, "f8ELXfPMy3mjASOObinmrkdAjgeogCw8qisMb8Ysln2pKTa_teHj0ReRFNSRXOFG_uZRcxFIUI62q0L");
    izdelaj(nizi, 351, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 352, "wdb67noomhzjcEsItf6k4mgCs_sFOokzLCoLkJwoIZExJiOwe0cMeF");
    izdelaj(nizi, 353, "cUXMVwsiALaHTdDUxI1ZNV0IZPEcboGamZ3kw1bqRKCSywfcTTpJ86SBqT");
    izdelaj(nizi, 354, "O8HLZyUDjsEmBxjKM1");
    izdelaj(nizi, 355, "0_7EVXV");
    izdelaj(nizi, 356, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 357, "2hruuciKjDkiDNLmRHfVmNksWSy7NuwJBGoaSw");
    izdelaj(nizi, 358, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 359, "JCBlNLvBWqkL3j3FaYddz");
    izdelaj(nizi, 360, "zfP87YGG4bdoL4hcSRTKeo9EgdCb1msabM2M6f2KmrbvMlx");
    izdelaj(nizi, 361, "USoVp9YptsZ33gQZM7_wv0rvFIinmXEY68GWPHhPv_XCTSeFDCwYrT8sBwkoIomQtvq3JWCDOcKNbIFqdFGf7pgxYQzT88mh");
    izdelaj(nizi, 362, "gbSCv9ytgAeYvh");
    izdelaj(nizi, 363, "ETppgajqYQtBmW1n2L_hfiCHiYlmF6SH");
    izdelaj(nizi, 364, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 365, "7b2dtq_cTEIG6");
    izdelaj(nizi, 366, "f8ELXfPMy3mjASOObinmrkdAjgeogCw8qisMb8Ysln2pKTa_teHj0ReRFNSRXOFG_uZRcxFIUI62q0L");
    izdelaj(nizi, 367, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 368, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 369, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 370, "gbSCv9ytgAeYvh");
    izdelaj(nizi, 371, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 372, "fJINyGIoSg");
    izdelaj(nizi, 373, "4rPErvy6xOw5epa25syEGSEXYb");
    izdelaj(nizi, 374, "d_aTx7MrsDitZyM5pH8jzSZldNY9CAgJdiyh5Lef02LHwtrwIN7u29RnL");
    izdelaj(nizi, 375, "BwzpCrchL5BKjFSqZ1vjdPJikYGShAv3z9ul3JakxmdJAAUUwBoVDz");
    izdelaj(nizi, 376, "twUuKETmSHq5_7nXUAVL8n5kYPGn2AtG5yVPpLQuFAFhMJTNoMOXy5ZvxzZ9");
    izdelaj(nizi, 377, "fJINyGIoSg");
    izdelaj(nizi, 378, "9hfnvwzRAspJgCxHg6ys5_HKyw");
    izdelaj(nizi, 379, "9O634lDc0ZmRMcI1UKktUWWme6uoA_8hYntv7MXidU37_zLp");
    izdelaj(nizi, 380, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 381, "9O634lDc0ZmRMcI1UKktUWWme6uoA_8hYntv7MXidU37_zLp");
    izdelaj(nizi, 382, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 383, "2hruuciKjDkiDNLmRHfVmNksWSy7NuwJBGoaSw");
    izdelaj(nizi, 384, "MdiaMkS7mtvEBCYP7jig4algzUeIQxFcG5cffRJYvQIvxBMklpw9uBYGC1CTvSLmhQrU2wd3u26Br9QaGnvClCYepz_5ECnIo8OO");
    izdelaj(nizi, 385, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 386, "kpQlJdv2BRLlmXXw0Hgkj6kVYFvMZ5yJtBjeW7xZLHD5hZNMWz");
    izdelaj(nizi, 387, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 388, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 389, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 390, "USoVp9YptsZ33gQZM7_wv0rvFIinmXEY68GWPHhPv_XCTSeFDCwYrT8sBwkoIomQtvq3JWCDOcKNbIFqdFGf7pgxYQzT88mh");
    izdelaj(nizi, 391, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 392, "O4wQm_tCR39fAG_917kYFyD7q5DFzTtkVvhnyPX_gIWRIY79dcat8xm01J97zqMQj49MRZ");
    izdelaj(nizi, 393, "W124qfEpvdgdAfNnJr2L4J_Rj1hXHRpFziCrJpeQnM0fsIMHDpWZ0aiE0PWNpc01fPWa");
    izdelaj(nizi, 394, "0Y7y4QQg0WudnQu1ESbNqvc48BmTosaok06LLVDdGMbTibLMnOfbQTZ8RYX2ndvGIoV24n06a4Z5O4WetAzbpb6");
    izdelaj(nizi, 395, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 396, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 397, "wdb67noomhzjcEsItf6k4mgCs_sFOokzLCoLkJwoIZExJiOwe0cMeF");
    izdelaj(nizi, 398, "01X7l3yTy");
    izdelaj(nizi, 399, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 400, "HhCW2Xv7PX3qLG8cLArBeZKeoyCDpB9m7");
    izdelaj(nizi, 401, "9O634lDc0ZmRMcI1UKktUWWme6uoA_8hYntv7MXidU37_zLp");
    izdelaj(nizi, 402, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 403, "IXOSlQMTghroPuYMHEsZR");
    izdelaj(nizi, 404, "ALPYyejmU76Sg7c4C1c94tIknDGnMHe8VAAj2biGE0O9Ngi1RyfQQkpMrXigO4HQVuTTJYoABREkjMEgJo5R1lXSfckZe_");
    izdelaj(nizi, 405, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 406, "fJINyGIoSg");
    izdelaj(nizi, 407, "n");
    izdelaj(nizi, 408, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 409, "kAFFxnjwkNHW9vW_0QL4e706ArkTfSpd8r3tmvPjG1o0d");
    izdelaj(nizi, 410, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 411, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 412, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 413, "g6eypJOMUjUtQBFWX3HuY0rST4ZbfW_ULnfJ0w8uZDm_naTCRb5qp5ffRcRj5fN9Wl39Qt0uDtGYElQAETSkhZGnrInOcdKMn");
    izdelaj(nizi, 414, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 415, "hrrmw4e2oQywuXlS4s3VnSRjp17HH4WjnZfFwj2ivyEcOOPpI_iRsEymj71sov");
    izdelaj(nizi, 416, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 417, "QwPgGfU8ShZkd");
    izdelaj(nizi, 418, "fKVKo31SKpsEvvp42HEEk3qvFYMhVewA_BsUNuvlPj0G75FGXenj07hdBIie9kWJ29N22ijC3p3");
    izdelaj(nizi, 419, "0_7EVXV");
    izdelaj(nizi, 420, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 421, "7UX0qOs60ybEPc1AZvM7AfVUs5P8dYEe1Xi_vZ3gLz_nXC9vKm4NBs13JyYqaZVuHOfuY3m_yga0R2hYjq1Qg55YSP");
    izdelaj(nizi, 422, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 423, "hPg7HY9imZWhb1WrQKJVCOLPU9WnQdh0T6MLPQmoMoX60fXYyzL1");
    izdelaj(nizi, 424, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 425, "2uVxSCAC9shtZj7cWFyQGIh0ZXQ2Dyi6aIEzjZulUSsEDKU7A4fCLq6joC8DbDIAayeRaGMnRrrvpITqA59G_hRIfI3Dxn");
    izdelaj(nizi, 426, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 427, "eqr4DDzCfNxO6");
    izdelaj(nizi, 428, "F");
    izdelaj(nizi, 429, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 430, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 431, "UAn8r_SZPn_nl7NoHXi0X8wK8KwaaSVgCxpehUfR3GhDVvAxg9KPmfRP");
    izdelaj(nizi, 432, "bL25AGTnCeZSaF8qQTY9JJGxhvzNny5iWpxoziotUiGSoCjQ0_sC9XkTnDGkVRab4tXtdfxC7O6hLtMm7A929OW");
    izdelaj(nizi, 433, "BwzpCrchL5BKjFSqZ1vjdPJikYGShAv3z9ul3JakxmdJAAUUwBoVDz");
    izdelaj(nizi, 434, "92_pw5CbeGtELTr8Y1CVPME9l3gebtqNK5eBLEkwWDHX0Mh2M68Moh0SHNQxqv7");
    izdelaj(nizi, 435, "2uVxSCAC9shtZj7cWFyQGIh0ZXQ2Dyi6aIEzjZulUSsEDKU7A4fCLq6joC8DbDIAayeRaGMnRrrvpITqA59G_hRIfI3Dxn");
    izdelaj(nizi, 436, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 437, "LMBTzSjry8XbqlB3oostbXoVCAnXIhHKC4ivUeST8FfrJ1lVaAeFRy6OYTIuFDEjqVlvVghRWea82iQVxMgrYcRe_pEPVSdvtc");
    izdelaj(nizi, 438, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 439, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 440, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 441, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 442, "IH0P_DVVDozrdW12h5RxlU6nOmceZZOIXzdT3AmuIs4X5FMkIRGOorqUr8HvVAhRTjcNSop1xsGIJobja_cv47aVh4fAAhksjD6");
    izdelaj(nizi, 443, "pKhdHWsN6Xi3GgFa40EPGz833RTtj2WJ0WbqkkQ1NqjgEq98E5OXQ4UfMBvaDgey_BpdIbR_oe4aB6Xj6WubN3nbXwKPc4OvxOQ");
    izdelaj(nizi, 444, "fKVKo31SKpsEvvp42HEEk3qvFYMhVewA_BsUNuvlPj0G75FGXenj07hdBIie9kWJ29N22ijC3p3");
    izdelaj(nizi, 445, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 446, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 447, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 448, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 449, "n");
    izdelaj(nizi, 450, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 451, "8AUj_4LOcY3AsKyfbR9_PmIQS_ZYZDqWInpfgogsgO_Vx9w2DFT5E6aiSdn2zfIJT8bPOie_vXAJ2s3OyeSL3");
    izdelaj(nizi, 452, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 453, "GVQy4mznWtbPuxKCZzfjnrarqtlslkocs3b9932ADbpejd0Io");
    izdelaj(nizi, 454, "pWG7MPhkTRsgpKeeFP8LEkPnAFzvmAE5dzGQQM62jySIRauz7DS0vFlr9mEei1a1htL10JO3_ejVD");
    izdelaj(nizi, 455, "djrr8p0oAgV_27R830fS__jqIk9Xt0r5J8G8ShX5hPhpS3MpEjTiP4ww_S2e24tD9c5QmQK_nQ9b00s");
    izdelaj(nizi, 456, "01X7l3yTy");
    izdelaj(nizi, 457, "mLcErcMzFIeTBZH2_jkqIGOULf6O7EjNoezkkOdIJ3mOvT_inrbvIyjDXkDfvz95OfPOr5dFFao2Q09");
    izdelaj(nizi, 458, "yw1rE2UOFohZ6BPvRFJHViUarZeRtCiHEbLck_8KQoLKYlyPjkCERarS2L7E5Zk47KBVwjUcMhKoAHu");
    izdelaj(nizi, 459, "seiva7yPMNbTlr_VxmRqN8AIVfS7SKutiCilqkczjBx5pohOY78Op3E7mEwrrqSvw0ZQ8YVw");
    izdelaj(nizi, 460, "gjmIaOfudB6To8AngNQrL1Keq");
    izdelaj(nizi, 461, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 462, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 463, "Yiog4NV1b2azlSajxd4zAZ2uvq3w1F5OQDlHc8c");
    izdelaj(nizi, 464, "B28JUiBbmrgvaKkqSgCBsUkIQ_7D1XdmkvdGud9YIqhV0AlPSXRhFZ3wFC2jM2pVnmOpmzEIgpCmyDjiFzviO");
    izdelaj(nizi, 465, "Yiog4NV1b2azlSajxd4zAZ2uvq3w1F5OQDlHc8c");
    izdelaj(nizi, 466, "BwzpCrchL5BKjFSqZ1vjdPJikYGShAv3z9ul3JakxmdJAAUUwBoVDz");
    izdelaj(nizi, 467, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 468, "v2Anq5FsYtlrVmM4wvnyMhg7wXUMr421p8KFepTFIq6xE5y6GVHl0");
    izdelaj(nizi, 469, "1hM5HXWSCqjEdhAELi2jErjy_WivuiR0rsWWPfpzo5r9B4g_y2zEjkjUzpo");
    izdelaj(nizi, 470, "_NKIedjfZz95qD3p7IxB2i");
    izdelaj(nizi, 471, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 472, "9EjSgGe2Pn6s5TJSEBJcbJKdFMg_7gHGyrnXPkejkLz");
    izdelaj(nizi, 473, "MF1bXGlbwQERpN1WrwcgBT57dZ0U_Os0AnLqleINAHpGoFGJhy");
    izdelaj(nizi, 474, "lUQalbbEfJB0FRk2aS6nxWvZCoqH913EJzTaFh6sqsTVqPjq3A4");
    izdelaj(nizi, 475, "W7QxmrpE2W");
    izdelaj(nizi, 476, "0C7QRgxmhEZJq1AsdqPkqz_TKcaEOWGPyHSWSSkhqTbF5Frk0jkPjULqNszpiyMyis1BhrQS6VXmpC");
    izdelaj(nizi, 477, "HhCW2Xv7PX3qLG8cLArBeZKeoyCDpB9m7");
    izdelaj(nizi, 478, "0Y7y4QQg0WudnQu1ESbNqvc48BmTosaok06LLVDdGMbTibLMnOfbQTZ8RYX2ndvGIoV24n06a4Z5O4WetAzbpb6");
    izdelaj(nizi, 479, "HE7_VQzIkEPMFkuIPq2onjzzoFV0DEVt_4ErXII_Vl3JzOYggS7NphPdZGaFifyP7zZOGCiWQ");
    izdelaj(nizi, 480, "9hfnvwzRAspJgCxHg6ys5_HKyw");
    izdelaj(nizi, 481, "_6_dGVH_kxH8Vrj3g2_6wdhr1LRr765Ku5tQsbanbAQU4noNVfnC7dyhQ1gVcyb5Q5WVrv4ZtlW3pBcc1AWRkqYW");
    izdelaj(nizi, 482, "2StjjJuCwQzuEs");
    izdelaj(nizi, 483, "_NKIedjfZz95qD3p7IxB2i");

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