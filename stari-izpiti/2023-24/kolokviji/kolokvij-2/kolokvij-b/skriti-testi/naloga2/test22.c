#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001
int _P[] = {6816, 8357, 9535, 6438, 5754, 3588, 6678, 5957, 925, 5832, 7957, 6352, 5620, 9437, 6836, 1209, 4438, 7143, 4463, 3012, 2834, 5632, 4365, 5042, 5622, 1856, 6595, 7538, 9417, 5452, 2823, 4052, 9127, 7288, 1737, 691, 7661, 7298, 6787, 7365, 7988, 5502, 5108, 5223, 2767, 6979, 2239, 9587, 9255, 9282, 8044, 912, 7526, 7027, 6237, 588, 9013, 8124, 2313, 5339, 7698, 3963, 6186, 1736, 1108, 4922, 7710, 1240, 3493, 4959, 9105, 8158, 6863, 4395, 9949, 527, 4649, 9784, 7449, 6570, 1394, 6995, 511, 812, 4505, 423, 296, 9289, 1812, 2157, 3668, 6410, 6067, 5952, 8614, 7972, 2241, 2916, 7263, 8967, 1578, 8024, 9717, 9368, 254, 1104, 9168, 838, 4719, 9554, 8085, 9300, 9665, 6560, 7630, 5640, 7583, 603, 2383, 545, 952, 7409, 7975, 587, 9507, 4957, 6843, 7964, 5662, 1147, 833, 8754, 3693, 9033, 1219, 3441, 2496, 9160, 7555, 7508, 6329, 1016, 6145, 7446, 3358, 5427, 9612, 6372, 1837, 6341, 7635, 884, 4789, 3088, 7768, 767, 9478, 7384, 2243, 988, 8329, 5924, 786, 7731, 7180, 8264, 5699, 2636, 8789, 611, 4536, 3587, 5820, 5325, 4273, 1630, 5975, 2577, 6622, 8289, 5894, 6395, 4860, 552, 7094, 3504, 4378, 5087, 9060, 8064, 7707, 4466, 1619, 6905, 624, 7421, 808, 6143, 724, 6367, 1029, 1428, 7404, 9966, 4700, 8827, 7456, 7427, 8908, 312, 5199, 4755, 7137, 5480, 4232, 1998, 3562, 1227, 4765, 4702, 9046, 5238, 540, 4058, 5655, 6504, 5190, 14, 2177, 7247, 489, 8388, 5802, 7702, 4171, 6421, 6624, 5537, 1758, 5886, 8108, 6126, 4430, 4868, 6681, 6912, 8312, 8163, 8491, 2997, 1244, 5778, 5474, 4264, 251, 1850, 5382, 2116, 7337, 3126, 7821, 5503, 2750, 2422, 6879, 4219, 9216, 5132, 2901, 9409, 9972, 9110, 2427, 5977, 8610, 4342, 6209, 2365, 4075, 9957, 6431, 5144, 2936, 7765, 8849, 7210, 469, 492, 5131, 7156, 6120, 8953, 5102, 3952, 3113, 468, 720, 6974, 285, 8557, 2728, 4805, 5624, 9027, 7197, 484, 3915, 3094, 9961, 7804, 4125, 3988, 6638, 2654, 7120, 2945, 2020, 8670, 3540, 8009, 2681, 1456, 1888, 2361, 772, 7302, 2481, 3650, 4332, 7789, 9704, 2843, 6166, 4951, 8738, 565, 4040, 4026, 2311, 3040};
int _RAZREDI[] = {0, 0, 1, 2, 1, 3, 1, 4, 5, 4, 6, 6, 2, 7, 7, 8, 9, 10, 11, 12, 13, 14, 12, 15, 16, 12, 1, 17, 18, 19, 4, 20, 21, 22, 23, 12, 24, 25, 26, 19, 12, 27, 4, 28, 29, 8, 30, 26, 31, 32, 33, 34, 12, 35, 36, 37, 4, 38, 39, 40, 41, 42, 34, 43, 18, 4, 44, 10, 45, 46, 47, 20, 40, 48, 49, 34, 50, 1, 51, 52, 12, 53, 54, 55, 56, 57, 58, 59, 24, 60, 61, 62, 63, 54, 31, 21, 19, 64, 65, 66, 67, 61, 68, 69, 15, 70, 71, 5, 72, 73, 59, 74, 75, 76, 26, 77, 78, 79, 1, 40, 80, 81, 82, 22, 83, 84, 76, 85, 86, 61, 87, 88, 43, 21, 89, 37, 1, 58, 34, 90, 91, 92, 93, 12, 10, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 1, 104, 105, 106, 101, 107, 108, 109, 110, 111, 73, 112, 113, 114, 115, 116, 117, 118, 4, 119, 120, 121, 25, 122, 123, 108, 124, 117, 125, 126, 127, 128, 4, 90, 129, 130, 14, 131, 4, 24, 132, 20, 133, 134, 26, 135, 136, 137, 31, 126, 138, 139, 83, 119, 140, 141, 118, 142, 143, 144, 145, 144, 146, 147, 148, 149, 150, 151, 152, 153, 2, 101, 66, 154, 155, 156, 157, 141, 158, 12, 34, 77, 159, 20, 160, 80, 77, 161, 162, 139, 18, 34, 163, 164, 165, 166, 167, 59, 156, 168, 14, 64, 169, 64, 170, 171, 172, 173, 174, 21, 119, 175, 176, 177, 178, 179, 180, 181, 171, 182, 183, 184, 4, 77, 185, 62, 186, 187, 188, 189, 190, 191, 89, 192, 86, 148, 133, 193, 34, 194, 195, 196, 197, 198, 61, 12, 199, 200, 201, 202, 31, 203, 204, 144, 205, 206, 141, 207, 1, 208, 209, 210, 37, 211, 212, 118, 213, 21, 69, 119, 7, 214, 215, 77, 216, 217, 218, 219, 167, 220, 4, 221, 157, 222, 223};
int _ST_VOZLISC = sizeof(_RAZREDI) / sizeof(_RAZREDI[0]);
#define  _ST_RAZREDOV (sizeof(_P) / sizeof(_P[0]))
Vozlisce* _I2V[_ST_RAZREDOV];
bool _POBRISAN[_M];

Vozlisce* _ustvari() {
    Vozlisce* zacetek = NULL;
    Vozlisce* prej = NULL;
    int zadnjiRazred = -1;

    for (int i = 0; i < _ST_VOZLISC; i++) {
        Vozlisce* v = calloc(1, sizeof(Vozlisce));
        int r = _RAZREDI[i];
        if (r > zadnjiRazred) {
            zadnjiRazred = r;
            v->p = malloc(sizeof(int));
            *v->p = _P[r];
            _I2V[r] = v;
        } else {
            v->p = _I2V[r]->p;
        }
        if (i == 0) {
            zacetek = v;
        } else {
            prej->naslednje = v;
        }
        prej = v;
    }
    return zacetek;
}

void _izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        printf("%s%d", (w == v ? "" : ", "), *w->p);
        w = w->naslednje;
    }
    printf("]\n");
}

void _preveriIstovetnost(Vozlisce* v) {
    int i = 0;
    for (Vozlisce* w = v; w != NULL; w = w->naslednje) {
        printf("%d", w == _I2V[i]);
        i++;
    }
    printf("\n");
}

void _pocisti(Vozlisce* v) {
    if (v != NULL) {
        _pocisti(v->naslednje);
        int pp = *v->p;
        if (!_POBRISAN[pp]) {
            free(v->p);
            v->p = NULL;
            _POBRISAN[pp] = true;
        }
        free(v);
    }
}

int main() {
    Vozlisce* v = _ustvari();

    printf("Prej:\n");
    _izpisi(v);
    printf("\n");

    izlociDuplikate(v);

    printf("Potem:\n");
    _izpisi(v);
    printf("\n");

    printf("Istovetnost ohranjenih vozlisc:\n");
    _preveriIstovetnost(v);

    _pocisti(v);

    return 0;
}