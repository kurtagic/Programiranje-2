
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga1.h"

Vozlisce* ustvari(int* t, int n) {
    if (n <= 0) {
        return NULL;
    }
    Vozlisce* v = malloc(sizeof(Vozlisce));
    v->podatek = *t;
    v->naslednje = ustvari(t + 1, n - 1);
    return v;
}

Vozlisce** shrani(int* tabela, Vozlisce* seznam, int n, int k, int* dolzina) {
    *dolzina = n / k;
    Vozlisce** shramba = malloc(*dolzina * sizeof(Vozlisce*));
    Vozlisce* v = seznam;
    Vozlisce** p = shramba;
    int i = 1;
    while (v != NULL) {
        if (i % k == 0) {
            *p++ = v;
        }
        v = v->naslednje;
        i++;
    }
    return shramba;
}

void izpisi(Vozlisce* v) {
    bool prvic = true;
    printf("[");
    while (v != NULL) {
        if (!prvic) {
            printf(", ");
        }
        prvic = false;
        printf("%d", v->podatek);
        v = v->naslednje;
    }
    printf("]\n");
}

void preveri(Vozlisce** tabela, Vozlisce* seznam, int dolzina) {
    int i = 0;
    Vozlisce* v = seznam;
    Vozlisce** t = tabela;
    while (v != NULL && i < dolzina) {
        printf("%d", v == *t);
        v = v->naslednje;
        t++;
        i++;
    }
    printf("\n");
}

void pocisti(Vozlisce* v) {
    if (v != NULL) {
        pocisti(v->naslednje);
        free(v);
    }
}

int main() {
    int tabela[] = {-90, 805, 101, -766, -540, -507, -628, 111, -49, 516, 924, 884, -326, 790, 345, -431, -689, 463, -432, 107, 735, -393, -869, -919, -758, -455, 637, 559, -667, 826, 259, 824, -632, 380, 870, -133, 249, -808, 465, 724, 886, 321, 443, -755, -714, -710, -444, -101, -669, -551, -134, -452, -499, -76};
    int n = sizeof(tabela) / sizeof(int);
    int k = 9;

    Vozlisce* zacetek = ustvari(tabela, n);
    int dolzina = 0;
    Vozlisce** shramba = shrani(tabela, zacetek, n, k, &dolzina);

    zacetek = zdesetkaj(zacetek, k);
    izpisi(zacetek);
    preveri(shramba, zacetek, dolzina);
    pocisti(zacetek);
    free(shramba);

    return 0;
}
