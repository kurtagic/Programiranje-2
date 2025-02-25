
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {207, 183, 285, 370, 471, 494, 664, 738, 845, 935, 1040, 1206, 1416, 1548, 1659, 1608, 1879, 1952, 1901, 2008, 1968, 1905, 1929, 1834, 1819, 1643, 1655, 1549, 1332, 1198, 1067, 862, 772, 695, 600, 498, 379, 356, 319, 157, 145, 38, 72, 84, 60, 0, 115, 42, 0, 0, 67, 87, 0, 0, 0, 43, 5, 0, 76, 0, 0, 0, 0, 36, 0, 42, 60, 0, 0, 94, 68, 99, 98, 0, 32, 1, 0, 0, 0, 0, 46, 0},
    (int[]) {180, 300, 354, 322, 383, 410, 660, 714, 753, 1027, 1144, 1125, 1323, 1492, 1546, 1802, 1784, 1853, 1934, 2023, 2023, 2023, 1938, 1863, 1817, 1810, 1553, 1524, 1322, 1178, 1076, 881, 755, 780, 589, 476, 319, 335, 343, 208, 218, 47, 51, 60, 42, 89, 0, 0, 0, 103, 17, 0, 0, 93, 86, 0, 26, 0, 24, 40, 85, 83, 0, 0, 0, 0, 0, 57, 92, 54, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0},
    (int[]) {204, 140, 270, 245, 447, 516, 554, 764, 797, 1020, 1084, 1299, 1441, 1487, 1547, 1790, 1783, 1986, 2014, 2023, 1980, 1927, 1885, 2003, 1802, 1820, 1713, 1582, 1437, 1257, 1177, 1043, 770, 711, 678, 576, 470, 290, 216, 219, 162, 229, 191, 136, 53, 123, 0, 0, 0, 0, 52, 24, 0, 76, 0, 42, 89, 74, 66, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 91, 32, 0, 67, 27, 0, 43, 63, 24},
};

int N = 3;
int M = 82;
int D = 1;

int main() {
    int** nova = zmehcaj(SLIKA, N, M, D);
    int noviN = N - 2 * D;
    int noviM = M - 2 * D;

    for (int i = 0; i < noviN; i++) {
        for (int j = 0; j < noviM; j++) {
            printf("%5d", nova[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < noviN; i++) {
        free(nova[i]);
    }
    free(nova);

    return 0;
}
