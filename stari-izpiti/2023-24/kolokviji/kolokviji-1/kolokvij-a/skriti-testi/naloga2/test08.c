
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
    int n = 147;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 1, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 2, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 3, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 4, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 5, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 6, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 7, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 8, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 9, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 10, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 11, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 12, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 13, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 14, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 15, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 16, "eteA2XMU8dzslfOc4skfzuz_EVppPFZBbr8HvP4u2kiTeAbPMh");
    izdelaj(nizi, 17, "5mX4dAE3JJDhMueaEe5v30CXPhCokeRgI0Wdg35avA6FRmEYsCR1hew9HryPJW8mo379V6YS6uu2VBQNC7eRUy6oTSS_RqTqU1vt");
    izdelaj(nizi, 18, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 19, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 20, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 21, "QlWIVCqbA9liPBBXLRn");
    izdelaj(nizi, 22, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 23, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 24, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 25, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 26, "5mX4dAE3JJDhMueaEe5v30CXPhCokeRgI0Wdg35avA6FRmEYsCR1hew9HryPJW8mo379V6YS6uu2VBQNC7eRUy6oTSS_RqTqU1vt");
    izdelaj(nizi, 27, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 28, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 29, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 30, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 31, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 32, "x58s7mybcI9eR_mZSDE9fywECnv1QGRLZXvRsO4bWnSbL2WAInFukl96qivzUB6");
    izdelaj(nizi, 33, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 34, "x58s7mybcI9eR_mZSDE9fywECnv1QGRLZXvRsO4bWnSbL2WAInFukl96qivzUB6");
    izdelaj(nizi, 35, "6jw5RCIP");
    izdelaj(nizi, 36, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 37, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 38, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 39, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 40, "LVr9uI1wpFl5MYE6PxAj6HsNwrtTh5pfuN3KLFjJd5JN14Ir");
    izdelaj(nizi, 41, "KPeTeBJ69jC8QxvVrm6ueSLjwQsZxLK30qAZjOWU96MZYbEY14_6L");
    izdelaj(nizi, 42, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 43, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 44, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 45, "Nsv07rDjN1Sl9FA88XgnmCsdGFl");
    izdelaj(nizi, 46, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 47, "QlWIVCqbA9liPBBXLRn");
    izdelaj(nizi, 48, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 49, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 50, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 51, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 52, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 53, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 54, "qqtE5U_IJafGg7cr2eUZ8yu3Tqf6CgdxKT");
    izdelaj(nizi, 55, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 56, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 57, "LVr9uI1wpFl5MYE6PxAj6HsNwrtTh5pfuN3KLFjJd5JN14Ir");
    izdelaj(nizi, 58, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 59, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 60, "QlWIVCqbA9liPBBXLRn");
    izdelaj(nizi, 61, "1xd6R5f1TjOdGhbNzPkrO5rn");
    izdelaj(nizi, 62, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 63, "1xd6R5f1TjOdGhbNzPkrO5rn");
    izdelaj(nizi, 64, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 65, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 66, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 67, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 68, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 69, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 70, "hbCvhY8qtr0aWy");
    izdelaj(nizi, 71, "eteA2XMU8dzslfOc4skfzuz_EVppPFZBbr8HvP4u2kiTeAbPMh");
    izdelaj(nizi, 72, "o8F9VTO0NtdMYh5csNIoNl4Na9jBKI4lFj5E8xbz7zBNJpCy_3vcntDan");
    izdelaj(nizi, 73, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 74, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 75, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 76, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 77, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 78, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 79, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 80, "GlDQsbF8TNZEjzU85efl9QivoqWxqpDt2DFFvcR7IEnR_HLL7NtuH8SixIlAnH1wjffMba6iMRddwZm4Eb07paPhZ3Q");
    izdelaj(nizi, 81, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 82, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 83, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 84, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 85, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 86, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 87, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 88, "3IM7TQc3MPU416IsDcp7UoMIWhLAqIeP4E8xobiu69wSTQZjOwb14JuH8qaa3RxoUGsU52HVUEU7YDXod");
    izdelaj(nizi, 89, "INnHvG0hIdEDibUgBH94l1g41MPUWNxX5GrIfA");
    izdelaj(nizi, 90, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 91, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 92, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 93, "KPeTeBJ69jC8QxvVrm6ueSLjwQsZxLK30qAZjOWU96MZYbEY14_6L");
    izdelaj(nizi, 94, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 95, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 96, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 97, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 98, "LVr9uI1wpFl5MYE6PxAj6HsNwrtTh5pfuN3KLFjJd5JN14Ir");
    izdelaj(nizi, 99, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 100, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 101, "_M");
    izdelaj(nizi, 102, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 103, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 104, "hbCvhY8qtr0aWy");
    izdelaj(nizi, 105, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 106, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 107, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 108, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 109, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 110, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 111, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 112, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 113, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 114, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 115, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 116, "o8F9VTO0NtdMYh5csNIoNl4Na9jBKI4lFj5E8xbz7zBNJpCy_3vcntDan");
    izdelaj(nizi, 117, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 118, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 119, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 120, "QlWIVCqbA9liPBBXLRn");
    izdelaj(nizi, 121, "KPeTeBJ69jC8QxvVrm6ueSLjwQsZxLK30qAZjOWU96MZYbEY14_6L");
    izdelaj(nizi, 122, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 123, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 124, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 125, "5mX4dAE3JJDhMueaEe5v30CXPhCokeRgI0Wdg35avA6FRmEYsCR1hew9HryPJW8mo379V6YS6uu2VBQNC7eRUy6oTSS_RqTqU1vt");
    izdelaj(nizi, 126, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 127, "5mX4dAE3JJDhMueaEe5v30CXPhCokeRgI0Wdg35avA6FRmEYsCR1hew9HryPJW8mo379V6YS6uu2VBQNC7eRUy6oTSS_RqTqU1vt");
    izdelaj(nizi, 128, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 129, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 130, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 131, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 132, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 133, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 134, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 135, "o8F9VTO0NtdMYh5csNIoNl4Na9jBKI4lFj5E8xbz7zBNJpCy_3vcntDan");
    izdelaj(nizi, 136, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 137, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 138, "YXaX");
    izdelaj(nizi, 139, "tOFixvvxyf732ki2e9nFZEy0lWRq8tr2LTFFbW4gudrWz65DYMP0UfxZZsp5KLVEj3wtDuM");
    izdelaj(nizi, 140, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 141, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 142, "qqtE5U_IJafGg7cr2eUZ8yu3Tqf6CgdxKT");
    izdelaj(nizi, 143, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 144, "hbCvhY8qtr0aWy");
    izdelaj(nizi, 145, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");
    izdelaj(nizi, 146, "KcLY38uzGZF4_ORCW9PeySWhpkUn_4GY_oA59");

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
