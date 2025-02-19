
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
    int n = 107;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 1, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 2, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 3, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 4, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 5, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 6, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 7, "Qo3HOLbcIER");
    izdelaj(nizi, 8, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 9, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 10, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 11, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 12, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 13, "QLH9FhC1");
    izdelaj(nizi, 14, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 15, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 16, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 17, "Qo3HOLbcIER");
    izdelaj(nizi, 18, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 19, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 20, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 21, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 22, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 23, "97roLRCBqsbm3FOfqClZxXohQIZrWdOOI88E8rVpEIXIUhWr01FkdmEAvR13UzoR5");
    izdelaj(nizi, 24, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 25, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 26, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 27, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 28, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 29, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 30, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 31, "iuVWkCNPXKgDEbirKTtyF2JsxW6Jx3Gxe2upax6woPm5UFie8nqouNLMV6T3WT");
    izdelaj(nizi, 32, "vlHpYguKxNfdx1");
    izdelaj(nizi, 33, "ceqgf2I0YBnZucGx");
    izdelaj(nizi, 34, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 35, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 36, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 37, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 38, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 39, "ceqgf2I0YBnZucGx");
    izdelaj(nizi, 40, "iuVWkCNPXKgDEbirKTtyF2JsxW6Jx3Gxe2upax6woPm5UFie8nqouNLMV6T3WT");
    izdelaj(nizi, 41, "vlHpYguKxNfdx1");
    izdelaj(nizi, 42, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 43, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 44, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 45, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 46, "q");
    izdelaj(nizi, 47, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 48, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 49, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 50, "ceqgf2I0YBnZucGx");
    izdelaj(nizi, 51, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 52, "vlHpYguKxNfdx1");
    izdelaj(nizi, 53, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 54, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 55, "xVcHQ1iElhqsnUa3FCvTEYPhXLc7K3B5");
    izdelaj(nizi, 56, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 57, "vlHpYguKxNfdx1");
    izdelaj(nizi, 58, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 59, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 60, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 61, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 62, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 63, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 64, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 65, "Qo3HOLbcIER");
    izdelaj(nizi, 66, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 67, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 68, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 69, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 70, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 71, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 72, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 73, "vlHpYguKxNfdx1");
    izdelaj(nizi, 74, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 75, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 76, "ceqgf2I0YBnZucGx");
    izdelaj(nizi, 77, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 78, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 79, "Qo3HOLbcIER");
    izdelaj(nizi, 80, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 81, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 82, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 83, "Qo3HOLbcIER");
    izdelaj(nizi, 84, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 85, "q");
    izdelaj(nizi, 86, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 87, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 88, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 89, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 90, "iuVWkCNPXKgDEbirKTtyF2JsxW6Jx3Gxe2upax6woPm5UFie8nqouNLMV6T3WT");
    izdelaj(nizi, 91, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 92, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 93, "ceqgf2I0YBnZucGx");
    izdelaj(nizi, 94, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 95, "ceqgf2I0YBnZucGx");
    izdelaj(nizi, 96, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 97, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 98, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 99, "vlHpYguKxNfdx1");
    izdelaj(nizi, 100, "mXaSZbvebZJC1aGNVJ4g6mWpDxvCeSTFdwyiiyaBHg9Bnuk1Qt1TYiNrmJd_L5dOFZ1YBiONX8zmKYJfmMP0wzI51vqe1V");
    izdelaj(nizi, 101, "gDyh9peBOEbFpYvtjcQlc9tYEvfVJoSVx8F9CF61ZK9XHVYmt");
    izdelaj(nizi, 102, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 103, "vlHpYguKxNfdx1");
    izdelaj(nizi, 104, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");
    izdelaj(nizi, 105, "Qo3HOLbcIER");
    izdelaj(nizi, 106, "I8XtyAXPtmjA6znwi_HlIk0_ZSQdHPAXJud3kKEqP8vFvzUPUUAWgbmJa_lNhtA9zEDpN4PL1t2ZqSSpdWT83Zxxuw");

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
