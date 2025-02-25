
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {72, 0, 0, 0, 0, 0, 8},
    (int[]) {6, 0, 50, 44, 0, 72, 0},
    (int[]) {0, 0, 0, 85, 0, 0, 0},
    (int[]) {0, 16, 0, 0, 0, 0, 3},
    (int[]) {55, 0, 26, 0, 63, 0, 17},
    (int[]) {55, 0, 62, 0, 0, 17, 0},
    (int[]) {24, 98, 0, 0, 0, 0, 88},
    (int[]) {21, 22, 0, 0, 0, 0, 13},
    (int[]) {77, 0, 0, 31, 0, 10, 0},
    (int[]) {72, 0, 0, 0, 0, 0, 0},
    (int[]) {0, 60, 0, 69, 0, 31, 61},
    (int[]) {0, 9, 0, 0, 0, 0, 4},
    (int[]) {0, 61, 84, 0, 32, 50, 0},
    (int[]) {38, 0, 0, 0, 0, 0, 0},
    (int[]) {32, 27, 78, 6, 0, 61, 84},
    (int[]) {2, 40, 20, 0, 0, 0, 47},
    (int[]) {25, 44, 0, 0, 0, 61, 0},
    (int[]) {0, 0, 14, 0, 4, 29, 80},
    (int[]) {0, 0, 7, 70, 77, 40, 78},
    (int[]) {0, 0, 15, 0, 0, 86, 0},
    (int[]) {0, 0, 0, 0, 22, 77, 0},
    (int[]) {11, 45, 0, 0, 87, 86, 0},
    (int[]) {0, 28, 0, 0, 72, 62, 0},
    (int[]) {0, 0, 12, 0, 67, 96, 40},
    (int[]) {6, 0, 73, 0, 74, 0, 25},
    (int[]) {0, 63, 0, 0, 0, 24, 0},
    (int[]) {55, 51, 0, 61, 88, 0, 0},
    (int[]) {0, 54, 0, 29, 12, 0, 0},
    (int[]) {22, 0, 23, 0, 5, 0, 84},
    (int[]) {42, 17, 0, 0, 78, 0, 0},
    (int[]) {5, 25, 10, 0, 0, 0, 0},
    (int[]) {0, 0, 80, 40, 39, 0, 0},
    (int[]) {80, 67, 67, 85, 0, 0, 0},
    (int[]) {0, 0, 100, 0, 0, 16, 0},
    (int[]) {0, 89, 21, 0, 0, 61, 0},
    (int[]) {0, 81, 0, 31, 47, 0, 0},
    (int[]) {50, 59, 11, 96, 0, 99, 0},
    (int[]) {0, 8, 0, 0, 0, 0, 0},
    (int[]) {40, 21, 21, 0, 0, 100, 71},
    (int[]) {0, 0, 0, 0, 0, 0, 0},
    (int[]) {34, 0, 8, 52, 0, 0, 0},
    (int[]) {48, 96, 0, 0, 75, 0, 0},
    (int[]) {73, 0, 48, 101, 0, 55, 0},
    (int[]) {13, 0, 0, 0, 0, 0, 57},
    (int[]) {0, 0, 73, 85, 88, 0, 44},
    (int[]) {52, 0, 0, 63, 49, 59, 0},
    (int[]) {0, 51, 52, 0, 35, 0, 0},
    (int[]) {67, 50, 0, 64, 40, 0, 0},
    (int[]) {104, 0, 74, 59, 93, 0, 41},
    (int[]) {0, 58, 0, 0, 82, 0, 93},
    (int[]) {104, 0, 0, 4, 0, 4, 0},
    (int[]) {90, 32, 0, 0, 61, 104, 0},
    (int[]) {0, 0, 78, 27, 0, 8, 0},
    (int[]) {22, 29, 33, 0, 30, 101, 0},
    (int[]) {65, 92, 0, 118, 36, 53, 21},
    (int[]) {81, 27, 0, 65, 47, 81, 65},
    (int[]) {0, 111, 47, 65, 99, 0, 130},
    (int[]) {73, 76, 0, 105, 18, 43, 73},
    (int[]) {23, 21, 33, 107, 0, 154, 22},
    (int[]) {164, 159, 67, 155, 116, 99, 107},
    (int[]) {142, 54, 4, 21, 3, 172, 97},
    (int[]) {27, 176, 10, 28, 153, 27, 137},
    (int[]) {70, 48, 80, 143, 185, 174, 116},
    (int[]) {218, 181, 139, 194, 224, 102, 228},
    (int[]) {63, 68, 91, 252, 178, 183, 192},
    (int[]) {257, 194, 135, 277, 249, 284, 264},
    (int[]) {212, 309, 289, 309, 317, 302, 320},
    (int[]) {324, 254, 155, 212, 216, 335, 167},
    (int[]) {334, 246, 185, 340, 210, 276, 209},
    (int[]) {270, 252, 270, 294, 355, 429, 377},
    (int[]) {308, 448, 374, 365, 350, 300, 288},
    (int[]) {305, 472, 513, 449, 527, 514, 422},
    (int[]) {523, 467, 395, 555, 407, 465, 563},
    (int[]) {576, 440, 584, 581, 602, 605, 603},
    (int[]) {490, 584, 637, 652, 693, 602, 548},
    (int[]) {518, 637, 710, 738, 739, 751, 670},
    (int[]) {755, 702, 707, 725, 798, 659, 694},
    (int[]) {778, 827, 856, 832, 866, 750, 811},
    (int[]) {906, 841, 929, 769, 953, 850, 795},
    (int[]) {955, 835, 884, 886, 964, 896, 947},
    (int[]) {958, 915, 974, 1110, 1031, 1070, 981},
    (int[]) {969, 969, 1066, 1179, 1178, 1096, 1190},
    (int[]) {1064, 1057, 1148, 1185, 1253, 1127, 1215},
    (int[]) {1145, 1284, 1219, 1273, 1202, 1242, 1282},
    (int[]) {1233, 1328, 1397, 1385, 1281, 1448, 1337},
    (int[]) {1431, 1465, 1342, 1491, 1470, 1457, 1403},
    (int[]) {1344, 1394, 1458, 1529, 1602, 1450, 1548},
    (int[]) {1454, 1433, 1530, 1478, 1583, 1616, 1515},
    (int[]) {1571, 1523, 1646, 1604, 1717, 1686, 1698},
    (int[]) {1669, 1727, 1617, 1740, 1724, 1769, 1810},
    (int[]) {1653, 1703, 1779, 1697, 1695, 1752, 1851},
    (int[]) {1770, 1850, 1867, 1824, 1915, 1884, 1881},
    (int[]) {1807, 1812, 1784, 1959, 1804, 1984, 1910},
    (int[]) {1879, 1863, 1953, 1938, 1889, 1939, 1861},
    (int[]) {1858, 1941, 1826, 1995, 1883, 1920, 1937},
    (int[]) {1756, 1927, 1980, 1933, 1887, 1911, 1912},
    (int[]) {1789, 1873, 1956, 2023, 2023, 2023, 1966},
    (int[]) {1770, 1868, 2023, 2013, 1978, 1931, 1962},
    (int[]) {1904, 1920, 1920, 1909, 1909, 1953, 1951},
    (int[]) {1787, 1801, 1948, 2023, 2023, 1960, 2023},
    (int[]) {1876, 1959, 1933, 1919, 2014, 2023, 1900},
    (int[]) {1894, 1895, 1784, 1959, 1912, 1979, 1959},
    (int[]) {1697, 1786, 1792, 1884, 1934, 1918, 1899},
    (int[]) {1632, 1844, 1765, 1871, 1818, 1928, 1813},
    (int[]) {1627, 1721, 1826, 1770, 1838, 1711, 1763},
    (int[]) {1644, 1573, 1721, 1724, 1801, 1672, 1782},
    (int[]) {1640, 1568, 1675, 1608, 1571, 1600, 1740},
    (int[]) {1388, 1474, 1516, 1646, 1583, 1547, 1520},
    (int[]) {1363, 1543, 1476, 1551, 1603, 1556, 1626},
    (int[]) {1281, 1406, 1474, 1388, 1490, 1433, 1407},
    (int[]) {1260, 1257, 1319, 1265, 1442, 1317, 1319},
    (int[]) {1191, 1284, 1236, 1169, 1280, 1323, 1243},
    (int[]) {1137, 1133, 1137, 1157, 1297, 1185, 1270},
    (int[]) {963, 969, 1112, 1102, 1017, 1041, 1030},
};

int N = 114;
int M = 7;
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
