
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
    int n = 250;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "eGLf");
    izdelaj(nizi, 1, "GUCsodx1idrAHYQqVw7geS_6yEL9kMb0rRaFOtnM2_OvenQZozrFDehM42ubNz3SzFb5iD7txXQWtFCI7h92yeZcSSI");
    izdelaj(nizi, 2, "eGLf");
    izdelaj(nizi, 3, "Wc2dkffiPz_iUN8sFFul2DWKEb_zbTZGaLnLXL8Rl_A8_ZZW88ZCoTUBlcJ8qY8hZPHy0PMSGyZRDOT");
    izdelaj(nizi, 4, "eGLf");
    izdelaj(nizi, 5, "6OxAevhzzIGG4aQ8RYJASSV5B23w5cO1hQzDvxr5ZTPSyh7qK");
    izdelaj(nizi, 6, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 7, "eGLf");
    izdelaj(nizi, 8, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 9, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 10, "OcQTmm8zRdYCOcOZFftDkjKBt3Un");
    izdelaj(nizi, 11, "4G8IUoRDsJtAFF3cH5QuZbkxyzipGUEutPhgKW8");
    izdelaj(nizi, 12, "x1F0NHvxPPvzQTOQ4C1N15OLzJCSVucQmdhKS1yx4izrVKaAFppVfclVyk44l7Q8Kek86zHNJVn_kDm5HOl_o3oAu_Ro7ontUIX");
    izdelaj(nizi, 13, "6OxAevhzzIGG4aQ8RYJASSV5B23w5cO1hQzDvxr5ZTPSyh7qK");
    izdelaj(nizi, 14, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 15, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 16, "C9QjVNEXMEyqIb9Gt6lddOpcL3h_TlmMbZlRkP");
    izdelaj(nizi, 17, "fChiK0XVOfxh");
    izdelaj(nizi, 18, "Wc2dkffiPz_iUN8sFFul2DWKEb_zbTZGaLnLXL8Rl_A8_ZZW88ZCoTUBlcJ8qY8hZPHy0PMSGyZRDOT");
    izdelaj(nizi, 19, "4xk94L_tEsgChDYN1c4Qv7Ln5JkZsRZkIGKLblmJ");
    izdelaj(nizi, 20, "cwCChLTzBsTgWtjqtwvWHiwdM5f");
    izdelaj(nizi, 21, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 22, "UXn5E8Q");
    izdelaj(nizi, 23, "1ge7uiZygpWH0U2u8hHuLT9WqY6j6n2FMgAhDxz");
    izdelaj(nizi, 24, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 25, "g82KgjUXPsHcP1aw");
    izdelaj(nizi, 26, "u9YrLEjIFpruEm6Yc5gp2eTup4vx9kjMJiIiTSGoYyHDidbVlRPduQY3PfNAyk0T1AcKsMfKPRECvDHGHVu4MAK1C7yg5qTSU6f");
    izdelaj(nizi, 27, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 28, "4xk94L_tEsgChDYN1c4Qv7Ln5JkZsRZkIGKLblmJ");
    izdelaj(nizi, 29, "501rA7zSO9CMRHG5VsEAUBEM_8ZaiwsHueXGaFM51oqAZ3PvnSDId8AnCNfQoinXI8Wyj3vy8246qtI3EqpG8kiAojOu2TRxF4");
    izdelaj(nizi, 30, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 31, "4G8IUoRDsJtAFF3cH5QuZbkxyzipGUEutPhgKW8");
    izdelaj(nizi, 32, "znCGdkqZOByyhGF_oYc96CnXRhOn4uwBYdjQ6ygai_LZGPY");
    izdelaj(nizi, 33, "6OxAevhzzIGG4aQ8RYJASSV5B23w5cO1hQzDvxr5ZTPSyh7qK");
    izdelaj(nizi, 34, "6OxAevhzzIGG4aQ8RYJASSV5B23w5cO1hQzDvxr5ZTPSyh7qK");
    izdelaj(nizi, 35, "9aCWnV8YDivhXPknYhCVZ_lN78AnCj5Cykd2hgA0Fh8aWhRO3jKjOFAjOqQcMjBmmSgKvM8a");
    izdelaj(nizi, 36, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 37, "sE_iAt7XixBXFb7KNqTgsBkR9k6pMnbpbQeqtoXKnyMCBm_");
    izdelaj(nizi, 38, "IAXyQfMHZ3m5dyiYLb4_Itn9dFgzZMTvOuZb");
    izdelaj(nizi, 39, "cwCChLTzBsTgWtjqtwvWHiwdM5f");
    izdelaj(nizi, 40, "U14C6S8i69CJkuyYGUVYN_GGngkOJHfOS88HScIA3Adc7fMYm8bUgwQeHl");
    izdelaj(nizi, 41, "48K6_Gd7xv_uzb_oMyFJ5BosVw_7Kk9Ic1gzqSHOVes");
    izdelaj(nizi, 42, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 43, "VjvWl8d10JjD");
    izdelaj(nizi, 44, "gAB6mgoydq0n4Q2ffAPKmYbfwZX6KMbSKHwoahhmAWjAckB9b3yqYZLuVDnq8q1vj8pNSkEWU");
    izdelaj(nizi, 45, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 46, "U14C6S8i69CJkuyYGUVYN_GGngkOJHfOS88HScIA3Adc7fMYm8bUgwQeHl");
    izdelaj(nizi, 47, "VYEe4fbq6W6e3itMB8uzSlwuxZ32vKXeqnLw7WQhubvlGHsajt92K5");
    izdelaj(nizi, 48, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 49, "Y9iKu2e1G_8HL_AfSGAlacpsCZPuz8V9c4zukqZlP59PlVjvmEPOrUIx6tRIPuC3U7NMDxXDcgw6VS");
    izdelaj(nizi, 50, "8_X86F3wORDSD");
    izdelaj(nizi, 51, "16b9dFeBbUqQ2b");
    izdelaj(nizi, 52, "CwijM89O");
    izdelaj(nizi, 53, "VPU_U4MakuojczG");
    izdelaj(nizi, 54, "aggBeM7L5foX1DRq7fRaXrm078V_dp9nkBSpL7af7PsTeI68ectPyE8ti33FS6gJneKS9aKAIwzihqGj86Bn");
    izdelaj(nizi, 55, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 56, "Y0tJUHY2cllTRKIf7PxmQPJQGd1tfowoFA43KuIihnuCtukEcCkoCDqyjr3yFr6avq8NpnGA5nk9gdsfezAaTa4dU0");
    izdelaj(nizi, 57, "NPORjzLlUulk1x7OqHpJVXsW7bPnR3KflQscDJmp");
    izdelaj(nizi, 58, "YJbkw");
    izdelaj(nizi, 59, "En7cvKrGFmjpXD3ihx_n_Bzy3WPUoPyEs5QiM2ILuTT_CzmMTYr1xX8bArtGxfyLoP");
    izdelaj(nizi, 60, "aggBeM7L5foX1DRq7fRaXrm078V_dp9nkBSpL7af7PsTeI68ectPyE8ti33FS6gJneKS9aKAIwzihqGj86Bn");
    izdelaj(nizi, 61, "r8XfmFBZchTpsckWGUJh6BKiUTExQrc2qYiNXd3fQbptvqfmIJbf29CvkQQddS6mw39HWfVH0s");
    izdelaj(nizi, 62, "fVpV8rQUUY9r60L6L6oVji1ZOW_g5r2qiH4ZwUz2eT0HZ_1RzMgACaPbQ5Kk5JUdwtha_aLc0XsW7Mg0");
    izdelaj(nizi, 63, "kZi7XPzOGzSntvSxQ3");
    izdelaj(nizi, 64, "d1j9tIrkZC");
    izdelaj(nizi, 65, "qMs1Sx10Z3REUdye6_bkF8ARzuRD1gqG5C3actEOCkihm8X_hWA6dD7v9WmPoVCfny0wXwBJ0");
    izdelaj(nizi, 66, "QBGY");
    izdelaj(nizi, 67, "3ibWZmx4PP7n6oQuU8Me");
    izdelaj(nizi, 68, "16b9dFeBbUqQ2b");
    izdelaj(nizi, 69, "Wc2dkffiPz_iUN8sFFul2DWKEb_zbTZGaLnLXL8Rl_A8_ZZW88ZCoTUBlcJ8qY8hZPHy0PMSGyZRDOT");
    izdelaj(nizi, 70, "y9mE2an48fhKx5t6lx3vM5ew06NuAWi9_WIHkZLA4Cy0MZlXKWuqDX9NExDzsdtCdhKIAwhBCRlUWVGz9LfBf3z20z");
    izdelaj(nizi, 71, "SnT1sAZcNdDduYuTFa1gGB9Ad8nAtB4yq6P");
    izdelaj(nizi, 72, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 73, "vH3U9bnqjJA38u6Mzba7TN_PG17QsusMuujD2ET_fvLfUl0KZgvYiP5bIQfcgKFjdy1l5ZdIE792qq3ynGKCNkueBTaTUvNGT3l");
    izdelaj(nizi, 74, "QBGY");
    izdelaj(nizi, 75, "FGk");
    izdelaj(nizi, 76, "501rA7zSO9CMRHG5VsEAUBEM_8ZaiwsHueXGaFM51oqAZ3PvnSDId8AnCNfQoinXI8Wyj3vy8246qtI3EqpG8kiAojOu2TRxF4");
    izdelaj(nizi, 77, "vH3U9bnqjJA38u6Mzba7TN_PG17QsusMuujD2ET_fvLfUl0KZgvYiP5bIQfcgKFjdy1l5ZdIE792qq3ynGKCNkueBTaTUvNGT3l");
    izdelaj(nizi, 78, "H5MzN7C2f_JU7_9vUEGzFvcsRhCjK3LQskfz0yhLwCt3tOQISdRSaTz4d6tjU8Df2ARYMiaxUXXL5DZpSooTpu8auvdN7");
    izdelaj(nizi, 79, "Q2MmayT8EB1Sbh3nbLL2PwqqmTwNYn1sMvuY4g_FSqKOovhPv_keIlRGjTc_NBdH8qFNdla67bq7v5vonxO_COwbZJ3DjUKMboa8");
    izdelaj(nizi, 80, "L6vMBQBsmIvahL0gO7rWKb6hxi5A5WmAqxSa6A7n");
    izdelaj(nizi, 81, "eGLf");
    izdelaj(nizi, 82, "faYRA0tH444qBbRiGRRado298YN27uXe87kWlQe0GMifa0xGQ1SDaeiWUYjTQ8w2N5xYfffpkXLIWmJnhB9N23zNdveD229");
    izdelaj(nizi, 83, "faYRA0tH444qBbRiGRRado298YN27uXe87kWlQe0GMifa0xGQ1SDaeiWUYjTQ8w2N5xYfffpkXLIWmJnhB9N23zNdveD229");
    izdelaj(nizi, 84, "0r2YsPPGpflev06qZcKtRFscAGt4Z3r244dknQJLfHxrkSLzLUNOZG9");
    izdelaj(nizi, 85, "501rA7zSO9CMRHG5VsEAUBEM_8ZaiwsHueXGaFM51oqAZ3PvnSDId8AnCNfQoinXI8Wyj3vy8246qtI3EqpG8kiAojOu2TRxF4");
    izdelaj(nizi, 86, "r8XfmFBZchTpsckWGUJh6BKiUTExQrc2qYiNXd3fQbptvqfmIJbf29CvkQQddS6mw39HWfVH0s");
    izdelaj(nizi, 87, "d1j9tIrkZC");
    izdelaj(nizi, 88, "k9p2LwCt_vv0AUYMacROj3vRrm9pNHOltBfH1CeptD42swhq3M8IvTO9dCJVuanVWfyasy7o3i1cDBg1N");
    izdelaj(nizi, 89, "grrqyABgB");
    izdelaj(nizi, 90, "0GRcFPlbKJJHqGEXFR8VYVEHF5OMfBg1");
    izdelaj(nizi, 91, "yF9kQoEku1L8dyKUX7ao");
    izdelaj(nizi, 92, "lwbw6uEtr3EIrcriFHzsknuyNN9E");
    izdelaj(nizi, 93, "4xk94L_tEsgChDYN1c4Qv7Ln5JkZsRZkIGKLblmJ");
    izdelaj(nizi, 94, "Qa7xBMVYcPKN5eIxBjp1OVOsRaNSQygOSxCF6lmSqD7Rl0XwYZRM81crQLLmT4VJCtJs");
    izdelaj(nizi, 95, "eGLf");
    izdelaj(nizi, 96, "vH3U9bnqjJA38u6Mzba7TN_PG17QsusMuujD2ET_fvLfUl0KZgvYiP5bIQfcgKFjdy1l5ZdIE792qq3ynGKCNkueBTaTUvNGT3l");
    izdelaj(nizi, 97, "h8ZdxG2jH30SnPwdjA1bUyVN49S5KumwF9hQLwvWjoDe5NN5ej");
    izdelaj(nizi, 98, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 99, "QBGY");
    izdelaj(nizi, 100, "rfxa9GdSLpQkPNQlhuAYb");
    izdelaj(nizi, 101, "DwG88MzkFVs8zcYf0Q9gJ1OjSiX027ZfPis0emMp");
    izdelaj(nizi, 102, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 103, "eGLf");
    izdelaj(nizi, 104, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 105, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 106, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 107, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 108, "Y");
    izdelaj(nizi, 109, "vCr0sRhGTTFL8hfv6vium16yxwJ5yj3zeVDmvzYHZlg6x3Hj2UFY3KPGfX9JVI5pCitqnZZb0Wnf");
    izdelaj(nizi, 110, "N7dg6P9JKtadrmaEHLR4_HL8JnYF32JSD9EAHcWmwiuIONdSx7cRlPyDDTnIV6Jb3GJ15sbLUvb6bdK3ldPDxaItkkFbJ");
    izdelaj(nizi, 111, "fVpV8rQUUY9r60L6L6oVji1ZOW_g5r2qiH4ZwUz2eT0HZ_1RzMgACaPbQ5Kk5JUdwtha_aLc0XsW7Mg0");
    izdelaj(nizi, 112, "vs7GXhNz2UlV6w56AQ4fCk");
    izdelaj(nizi, 113, "af6ByIUcK944G9YjAzkTyOg59KORN");
    izdelaj(nizi, 114, "e5WhDKYBUT8L7HTPMFqVOfMGAKBaldpAQJcDSvnJxopGEnrW");
    izdelaj(nizi, 115, "HtTaT2P6VS4w53C2jd1teMLnYmch_SfeU5oJxp20pNBqsMtZ85bR3_YY9pzJJAhjGzTqXGMOIPDdCXsuAU6GSqU");
    izdelaj(nizi, 116, "7thapyUj918386WHfrPX");
    izdelaj(nizi, 117, "HtTaT2P6VS4w53C2jd1teMLnYmch_SfeU5oJxp20pNBqsMtZ85bR3_YY9pzJJAhjGzTqXGMOIPDdCXsuAU6GSqU");
    izdelaj(nizi, 118, "U");
    izdelaj(nizi, 119, "0CT8mTqm5rHZmyOlpdKt_939JSsZ6PKLOjB6rCTUxrgGCq3csFPhmUq3GPNBWV5KlS3x5bbuNxVHjeEafFgk5uzox");
    izdelaj(nizi, 120, "7oESyAGOzWE4SW8ma0Z1cOjMaA8V7MtnjtLkP");
    izdelaj(nizi, 121, "aggBeM7L5foX1DRq7fRaXrm078V_dp9nkBSpL7af7PsTeI68ectPyE8ti33FS6gJneKS9aKAIwzihqGj86Bn");
    izdelaj(nizi, 122, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 123, "FJp1Uij9tcvJYwgWhSn0EWKBcBHscGBzxiecDYlpwQMpM6WtyLenKnQO");
    izdelaj(nizi, 124, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 125, "FJp1Uij9tcvJYwgWhSn0EWKBcBHscGBzxiecDYlpwQMpM6WtyLenKnQO");
    izdelaj(nizi, 126, "5_esE4r5z");
    izdelaj(nizi, 127, "Ketj24WumaIOw5_bBSRfRr459OG5ja9QWXK007MpaA_vuRQsyTaB3xcGbSFEJFbIki_HvO05n");
    izdelaj(nizi, 128, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 129, "YujivaeB5R6NshTgrIJ2bRBwZntSLSYflZL3E");
    izdelaj(nizi, 130, "DSujOTQXsM1kc9QNmrV5hkeh_QpRsOaVvoCSA9etnmvUttrTZdrq7Um");
    izdelaj(nizi, 131, "pXjyTcWZLzROLt");
    izdelaj(nizi, 132, "Fqps");
    izdelaj(nizi, 133, "VjvWl8d10JjD");
    izdelaj(nizi, 134, "VjvWl8d10JjD");
    izdelaj(nizi, 135, "e5WhDKYBUT8L7HTPMFqVOfMGAKBaldpAQJcDSvnJxopGEnrW");
    izdelaj(nizi, 136, "Vzley5gsvVSkgoC_GcoDmbvSFtqwAObt1UbOd56rRQ4Svh8u8Cbi");
    izdelaj(nizi, 137, "QBGY");
    izdelaj(nizi, 138, "1FBiIAbiTVlhVxDgeILbNFTszVVSfO5Z42Wb1VhaxEICkWbZGFy1ltJmh");
    izdelaj(nizi, 139, "F8IBegvPLlHve7HRpvmkAu9YkXBTsusUV7eE6uCirshxVKM4AvJIJ1");
    izdelaj(nizi, 140, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 141, "6OxAevhzzIGG4aQ8RYJASSV5B23w5cO1hQzDvxr5ZTPSyh7qK");
    izdelaj(nizi, 142, "2GbItkNB4wFwFu0KiXGhqchEn_yCnnOkiqQecljVRQW1hjOxEKlgu5TtbtY2KgSb2lWhotmRFROCYyrxPZ55EkR1LvdzFSCJ");
    izdelaj(nizi, 143, "d2lKm2RoUO9W5GR1fPaRQWk7p0ymyTAL32TgM2rpvR97MhjhpbCbtx7UBA9iJlyVqQrSFXk0XVMNUvnr0hf9");
    izdelaj(nizi, 144, "Avt6ZT9XLnxU3UR9dAaUidQ");
    izdelaj(nizi, 145, "COzdLwqDfVMHn");
    izdelaj(nizi, 146, "d2lKm2RoUO9W5GR1fPaRQWk7p0ymyTAL32TgM2rpvR97MhjhpbCbtx7UBA9iJlyVqQrSFXk0XVMNUvnr0hf9");
    izdelaj(nizi, 147, "KQIiR86cyo_IaEw2BPf9MwsZ6uSjbfqJUlfVL846VUr93Qz1dOuh42iIJsVc5zme24W2G2bgKUCfgvCYJNh1hmEATD_JObK");
    izdelaj(nizi, 148, "1vj9AI1BuMkh35us8NJxTr2QOCPNRqS1WuOrh_36LLpiUCGerdrXnbF8ryFgAOrtifbXP3rh1OrjjDjfiMzJYSIZhyVG");
    izdelaj(nizi, 149, "VjvWl8d10JjD");
    izdelaj(nizi, 150, "r8XfmFBZchTpsckWGUJh6BKiUTExQrc2qYiNXd3fQbptvqfmIJbf29CvkQQddS6mw39HWfVH0s");
    izdelaj(nizi, 151, "QBGY");
    izdelaj(nizi, 152, "S8L6dfzPbT857dpAXZD2MVaFPINdgExNZ");
    izdelaj(nizi, 153, "Wc2dkffiPz_iUN8sFFul2DWKEb_zbTZGaLnLXL8Rl_A8_ZZW88ZCoTUBlcJ8qY8hZPHy0PMSGyZRDOT");
    izdelaj(nizi, 154, "kZi7XPzOGzSntvSxQ3");
    izdelaj(nizi, 155, "En7cvKrGFmjpXD3ihx_n_Bzy3WPUoPyEs5QiM2ILuTT_CzmMTYr1xX8bArtGxfyLoP");
    izdelaj(nizi, 156, "_INiRgZZ0_PTrm2367I8n9fEaxbrFwD__Z4l");
    izdelaj(nizi, 157, "En7cvKrGFmjpXD3ihx_n_Bzy3WPUoPyEs5QiM2ILuTT_CzmMTYr1xX8bArtGxfyLoP");
    izdelaj(nizi, 158, "faYRA0tH444qBbRiGRRado298YN27uXe87kWlQe0GMifa0xGQ1SDaeiWUYjTQ8w2N5xYfffpkXLIWmJnhB9N23zNdveD229");
    izdelaj(nizi, 159, "dA86AjNbP9kxw9QEaF4kgDbM48TBUZ");
    izdelaj(nizi, 160, "dSp01qdiTq");
    izdelaj(nizi, 161, "O9a2m59k8YLEDP881d60wrDRupSn1f32mAL0dHlnYRPEob5fg497sI7Ejyk_mn04vrdE12tUtnifWxpbTkWpnm1MQoG");
    izdelaj(nizi, 162, "d2lKm2RoUO9W5GR1fPaRQWk7p0ymyTAL32TgM2rpvR97MhjhpbCbtx7UBA9iJlyVqQrSFXk0XVMNUvnr0hf9");
    izdelaj(nizi, 163, "xJIEYXrvP54CoeHM7xBP3GSTGkUdozi2wvO3sjvkGgL6DIl");
    izdelaj(nizi, 164, "6s2ppJGFTLeJ3L_9r8qGqV5Akwkv3Ji0PHiXNQ3qDmDerv5tm_REGK5L5EeJsPSpvj7bSiI7wyM3lFqVdr2");
    izdelaj(nizi, 165, "VYEe4fbq6W6e3itMB8uzSlwuxZ32vKXeqnLw7WQhubvlGHsajt92K5");
    izdelaj(nizi, 166, "8CWj7ia4eu9HpYscn3VZ_OhbjLyQXu45C8BRl9aBKu78Kr8yGaieDlQzshwBQ5NHXHK");
    izdelaj(nizi, 167, "TZzxepS7YFN8nef4b5l1KVraRqp8WwBkLWTyF4lYm0mPYsz8m2IqFjRM7QJCFuumP1WgzZJaqmQ7O0nEd0N_");
    izdelaj(nizi, 168, "RgWdjzU0VQbp4VHuh9oCGye_bLwSIJdiWIYJxvDawpKcgEXa5f_ds1h3bwZhu0UVUVnUmkbnKpt0z");
    izdelaj(nizi, 169, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 170, "zmT4MBjr4T5DjHfk39kAJLMPbj4PPBH79elDRvBAW");
    izdelaj(nizi, 171, "U");
    izdelaj(nizi, 172, "JwnvTuK7");
    izdelaj(nizi, 173, "dA86AjNbP9kxw9QEaF4kgDbM48TBUZ");
    izdelaj(nizi, 174, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 175, "rSry16u9J8ppKsypA3Vl4q");
    izdelaj(nizi, 176, "oZjgWJdK");
    izdelaj(nizi, 177, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 178, "00PwO83sBnIZinFWoeSBvJJBoK45QbiWCQdBNBlajyh1rzbQs86LhIS5VwqpkObuPI3PPHAPBWyxF5Jb7LKjIprA1fSRPW2hd");
    izdelaj(nizi, 179, "tO1OYSw6trFsXqqrRI6EHS8mLgkQ5Tjn");
    izdelaj(nizi, 180, "49N0obKRxw4tqrDIxE");
    izdelaj(nizi, 181, "kZi7XPzOGzSntvSxQ3");
    izdelaj(nizi, 182, "eGLf");
    izdelaj(nizi, 183, "YujivaeB5R6NshTgrIJ2bRBwZntSLSYflZL3E");
    izdelaj(nizi, 184, "Wc2dkffiPz_iUN8sFFul2DWKEb_zbTZGaLnLXL8Rl_A8_ZZW88ZCoTUBlcJ8qY8hZPHy0PMSGyZRDOT");
    izdelaj(nizi, 185, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 186, "yaXfLvgOBGXkckNNM5hFENqNfA7tHFofzgGfrxW5ci2U0WyZbrsqk");
    izdelaj(nizi, 187, "Z7oGmwb_wlRu_Hs0Xel8juopR7p46LvvRhtB_MNGGwkL7JXcv2L95lFHdJkN0gMrbVqvrTnUWUlfp5D");
    izdelaj(nizi, 188, "APv7kzl6VNklILqKmCFhuxe");
    izdelaj(nizi, 189, "IiRXWV5DTD");
    izdelaj(nizi, 190, "Jc_0Mjm3n8l0wV9CcunfGnSrlhl8HLID6T5xOlc7NUZB_lVVa4E2GYEhD");
    izdelaj(nizi, 191, "5_xhAN2F8CTGfDPPo5hvBWJWvPF8Edgi8Q7gf0Nn4MPa0Jf3E6yXEwCeoj");
    izdelaj(nizi, 192, "5_esE4r5z");
    izdelaj(nizi, 193, "kQnKiNAxB9SmyoKFGIyT_bgxRO5RuhYgi3z1xbe6ZS4Q9zY0HNxBrLoLNbGg_NzgdhWKf3B5GkLq5INaU896Mkjh");
    izdelaj(nizi, 194, "uJETa30_zqz1EahTb5CfGYb04FUBbczCUW60CTWQQg3vDjp3DFmaxM74R1wDb");
    izdelaj(nizi, 195, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 196, "VYPUkY9iDMwF8ZpNMVgULCTVHjxtpu2YI87h7iq_5CABtEAmpPMQKN0rDXuEsF9Du");
    izdelaj(nizi, 197, "sgcGDgknyGxkDZ60P5potkNwu_iRVsTQ");
    izdelaj(nizi, 198, "00E9gvc7qce_yTtdM1uCFEB8VkBz7U3qd");
    izdelaj(nizi, 199, "R1lRYAeeyjA5UKByRkCdMHKs2hpva3bGR8r8Npuqt9yN7Uu0KayLazUSwQLJWzRj47saFbtC8srGPdJhNg69oMS33ttcGgF");
    izdelaj(nizi, 200, "qv29JFu8mwJga75iraL38I2BrbTkqTNlgnTQiir0BwGpAm2uU");
    izdelaj(nizi, 201, "2428_URhs2KYHSy1uLggi7quGs_CK3AVGHjRxta08Qntf9tKsxX8adoKXOjVkY");
    izdelaj(nizi, 202, "4_rRW6zOIaIzyCCTEcvPMjZWaZAiMrZ2VAEcOs3gC6dLHEy3");
    izdelaj(nizi, 203, "uJETa30_zqz1EahTb5CfGYb04FUBbczCUW60CTWQQg3vDjp3DFmaxM74R1wDb");
    izdelaj(nizi, 204, "aggBeM7L5foX1DRq7fRaXrm078V_dp9nkBSpL7af7PsTeI68ectPyE8ti33FS6gJneKS9aKAIwzihqGj86Bn");
    izdelaj(nizi, 205, "rSry16u9J8ppKsypA3Vl4q");
    izdelaj(nizi, 206, "5US1BGgcnL4aNPb4Xsm_YA");
    izdelaj(nizi, 207, "eGLf");
    izdelaj(nizi, 208, "2hruuciKjDkiDNLmRHfVmNksWSy7NuwJBGoaSw");
    izdelaj(nizi, 209, "I91Ucoq7sCpy8bxqU1b1aBMCqzILp50ZEYFK");
    izdelaj(nizi, 210, "ZehC2mHswH9uHxirnQZnchOnlbbRKnorPnia63_6Laf9aNVazqPodmhE1QseV6ALD1C5wcUJ4Qa");
    izdelaj(nizi, 211, "56FeOOtCwBvBkq9nNKCNTe1dRWP2I6Dt");
    izdelaj(nizi, 212, "Ptupkg74fNs1cj4dylglb2h0mphoLLolHy940uz7CfH6E2AmVlbiVOJTHxYT15WNjx8AtO90GagoA0fJ8F");
    izdelaj(nizi, 213, "yF9kQoEku1L8dyKUX7ao");
    izdelaj(nizi, 214, "qB1L2MRTHauaheOWGG5ehNmtWaMUgka50TgJJe0C37mA7dW5O0S3wQkKtNqxO");
    izdelaj(nizi, 215, "DOpdn6X7aHEDySzndznVNkCo1ouZoYWW088JBK6KgsBkbNgUdkrtB5ZvVITSuh75fZ8VDTsEa2ZmFegK9QeSw");
    izdelaj(nizi, 216, "APv7kzl6VNklILqKmCFhuxe");
    izdelaj(nizi, 217, "mz5m6Qvgk74xuuUJ8negYDUJHcDxmUoLQ0CHGtnrvtH7x1Km3rx4U64eMDwaN");
    izdelaj(nizi, 218, "2UJCBfDcPl2NBFdmgYi8Lxkbczz5JG2mgQ57oN");
    izdelaj(nizi, 219, "FaN31_ZpIeU1sEHuzwl5z6MPnW6kiPWzdXy5FAXRmSD9c2asgVKnf2VCRkQNhj2VA");
    izdelaj(nizi, 220, "1X9BGblHBX8C3RIwGigUhxnQvauIDQ");
    izdelaj(nizi, 221, "BhNfIG802D4Q8D2xh");
    izdelaj(nizi, 222, "aggBeM7L5foX1DRq7fRaXrm078V_dp9nkBSpL7af7PsTeI68ectPyE8ti33FS6gJneKS9aKAIwzihqGj86Bn");
    izdelaj(nizi, 223, "2HG_42NEZQ");
    izdelaj(nizi, 224, "CvRAc6Ukpt2XdwqOu5d");
    izdelaj(nizi, 225, "r8XfmFBZchTpsckWGUJh6BKiUTExQrc2qYiNXd3fQbptvqfmIJbf29CvkQQddS6mw39HWfVH0s");
    izdelaj(nizi, 226, "aggBeM7L5foX1DRq7fRaXrm078V_dp9nkBSpL7af7PsTeI68ectPyE8ti33FS6gJneKS9aKAIwzihqGj86Bn");
    izdelaj(nizi, 227, "3KBzfUYjNsKPtH1kCSqL9I95HT_ELDwBTdVkY4J68YZS8CqVUGwcNtA0BmtdXGptv5BtT");
    izdelaj(nizi, 228, "vH3U9bnqjJA38u6Mzba7TN_PG17QsusMuujD2ET_fvLfUl0KZgvYiP5bIQfcgKFjdy1l5ZdIE792qq3ynGKCNkueBTaTUvNGT3l");
    izdelaj(nizi, 229, "md6tYv7WBm2ZaYOmBybZp7DUgaocKd6RvCt_aTF6L0U29WyOSYCE040WXtZKK0sHEMUKktFpE");
    izdelaj(nizi, 230, "sJoTm3mw");
    izdelaj(nizi, 231, "znq5TmA1UyXWE8DB96OV4oS9MDI9mVbLQLllp1RY3tFYAidezHsy0xYRyKjvTe");
    izdelaj(nizi, 232, "FaN31_ZpIeU1sEHuzwl5z6MPnW6kiPWzdXy5FAXRmSD9c2asgVKnf2VCRkQNhj2VA");
    izdelaj(nizi, 233, "1burOhhnEusQg37FR5Qlm7gVUaeuM7rh");
    izdelaj(nizi, 234, "RpsdiRRj4Ju2heAnKkPBMT697SkJIULydQ41VrCC8dVtJEH9mBTVREyXgKMw38WL29xZ2RaU5_7U");
    izdelaj(nizi, 235, "gKs34IX");
    izdelaj(nizi, 236, "vrMz4lAzQvz2jQnM");
    izdelaj(nizi, 237, "8CWj7ia4eu9HpYscn3VZ_OhbjLyQXu45C8BRl9aBKu78Kr8yGaieDlQzshwBQ5NHXHK");
    izdelaj(nizi, 238, "LolPcsy3dwukbQoP03KhLPDPPDgiqSalk_7iw4Z8Du9x06Lw0miEG7NoV4qAAAxMwcOaZXYivuKGAhiLuStLIhn");
    izdelaj(nizi, 239, "Wc2dkffiPz_iUN8sFFul2DWKEb_zbTZGaLnLXL8Rl_A8_ZZW88ZCoTUBlcJ8qY8hZPHy0PMSGyZRDOT");
    izdelaj(nizi, 240, "S6X7QCN7IAX9cZTVbpbCVUcAf7iZmpVptCejfrfakbjuULh9cAcPSiwQbL2Ra42T3FopuQHhCtO1G");
    izdelaj(nizi, 241, "q8ph7n6cCEvtXNs5gebPly6l46C7arfxiLp9ck48g7Mt4USfIhCdD4pkTN6TNAJxhqhGg5EvL5jRJ0kj4_WMSogPlRK");
    izdelaj(nizi, 242, "NFsnMSMnhfZN4hotvcA0S");
    izdelaj(nizi, 243, "IVhkyWCop07JrBdOczYehq5llrQkuq3X6DUs2rlNyI4bwe5YIxuT2S6XUwHx5XAzUAMnLTTcb5V2Lnl");
    izdelaj(nizi, 244, "g82KgjUXPsHcP1aw");
    izdelaj(nizi, 245, "fadAsynZs_uJnI");
    izdelaj(nizi, 246, "trHX3zsyh1BZhfJiDEGGs64AhY8ZstSJv2Du");
    izdelaj(nizi, 247, "XgaZDq2qBfrT4");
    izdelaj(nizi, 248, "cpo1");
    izdelaj(nizi, 249, "DOPLDlcFe9JPdgsSJo8DRkRABQrNh8n8LImFmYpMrEhPI_2oZfoTr9WbCtpw5uRw8ctVUTwG");

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
