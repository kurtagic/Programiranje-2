
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {0, 0, 30, 0, 0, 0, 0, 0, 15, 0, 54, 0, 0, 0, 78, 0, 73, 29, 48, 0, 24, 0, 0, 1, 91, 0, 0, 0, 0, 0, 94, 32, 0, 76, 32, 89, 8, 0, 0, 63, 63, 0, 112, 135, 53, 82, 110, 22, 103, 136, 104, 154, 132, 105, 123, 225, 284, 367, 352, 423, 416, 573, 574, 495, 603, 787, 772, 915, 803, 860, 1079, 1086, 1254, 1285, 1268, 1424, 1453, 1611, 1493, 1632, 1757, 1843, 1768, 1908, 1919, 1918, 1946, 2011, 1892, 1947, 2001, 1966, 1910, 1890, 1827, 1933, 1859, 1844, 1698, 1665, 1561, 1565, 1481, 1398, 1373, 1166, 1097, 1060, 1070, 857, 983, 735, 788, 663, 611, 552, 460, 394, 442, 486, 378, 403, 277, 225, 274, 132, 107, 209, 137, 26, 2, 50, 25, 59, 0, 55, 0, 0, 3, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 48, 43, 83, 20, 43, 43, 97, 0, 0, 0, 18, 0, 91, 71, 11, 45, 0, 11, 95, 0, 50, 0},
    (int[]) {26, 0, 0, 0, 74, 44, 8, 0, 21, 0, 0, 0, 94, 0, 0, 0, 0, 68, 24, 0, 96, 98, 0, 12, 0, 99, 84, 72, 0, 0, 0, 0, 0, 63, 62, 8, 42, 3, 0, 28, 0, 22, 19, 120, 13, 61, 0, 113, 143, 12, 136, 93, 126, 110, 314, 151, 223, 227, 387, 310, 436, 486, 598, 572, 572, 800, 731, 777, 879, 1031, 1095, 1169, 1224, 1159, 1396, 1305, 1503, 1466, 1518, 1747, 1664, 1685, 1778, 1866, 2002, 1894, 1941, 1950, 1894, 2023, 1937, 1885, 1888, 2023, 1802, 1844, 1858, 1818, 1664, 1571, 1549, 1542, 1381, 1363, 1285, 1348, 1265, 1080, 1109, 948, 964, 813, 771, 632, 647, 682, 591, 423, 427, 364, 309, 235, 201, 200, 284, 92, 155, 211, 75, 73, 189, 162, 62, 157, 43, 39, 108, 0, 26, 94, 19, 0, 43, 4, 3, 0, 0, 29, 28, 0, 91, 0, 48, 95, 0, 0, 23, 47, 0, 20, 52, 59, 0, 0, 64, 20, 0, 0, 0, 0, 0},
    (int[]) {0, 0, 0, 25, 0, 99, 0, 55, 55, 0, 0, 87, 87, 0, 0, 0, 0, 0, 54, 0, 85, 0, 0, 0, 70, 93, 0, 82, 96, 51, 72, 96, 38, 22, 42, 68, 22, 0, 40, 3, 44, 53, 41, 35, 0, 114, 54, 145, 193, 56, 85, 172, 91, 176, 274, 235, 252, 386, 318, 384, 504, 584, 563, 512, 596, 782, 787, 740, 817, 876, 998, 1185, 1277, 1348, 1344, 1458, 1441, 1499, 1525, 1610, 1658, 1802, 1893, 1933, 1960, 1902, 2016, 1898, 1938, 2023, 1975, 2023, 1985, 1965, 1866, 1938, 1895, 1795, 1772, 1742, 1521, 1584, 1450, 1316, 1364, 1203, 1238, 1215, 975, 914, 828, 918, 779, 755, 733, 679, 560, 400, 424, 319, 446, 413, 246, 188, 167, 112, 246, 116, 133, 202, 122, 137, 0, 15, 90, 0, 30, 116, 59, 0, 0, 0, 0, 0, 0, 0, 28, 0, 91, 35, 0, 56, 45, 56, 91, 6, 0, 34, 0, 0, 53, 0, 0, 0, 52, 97, 18, 30, 61, 32, 57},
    (int[]) {0, 0, 69, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 85, 0, 0, 0, 63, 86, 91, 0, 0, 0, 57, 76, 54, 10, 43, 0, 0, 103, 106, 67, 0, 0, 0, 9, 52, 90, 0, 87, 133, 154, 140, 85, 75, 86, 203, 259, 159, 260, 309, 305, 282, 311, 359, 513, 606, 649, 638, 621, 700, 828, 893, 884, 1111, 1198, 1242, 1235, 1428, 1445, 1531, 1565, 1622, 1698, 1798, 1875, 1819, 1896, 1849, 2023, 2023, 2023, 2023, 2023, 1960, 1962, 2023, 1968, 1854, 1920, 1855, 1827, 1650, 1622, 1704, 1575, 1441, 1339, 1298, 1306, 1232, 1100, 992, 1036, 954, 904, 848, 670, 651, 673, 470, 432, 374, 356, 326, 274, 336, 207, 142, 290, 202, 54, 178, 29, 138, 178, 118, 23, 90, 53, 130, 40, 0, 0, 11, 0, 0, 18, 101, 0, 0, 0, 0, 0, 60, 0, 6, 0, 0, 88, 68, 0, 24, 45, 43, 0, 0, 0, 0, 25, 0, 0, 72, 0, 0},
    (int[]) {4, 34, 10, 49, 1, 0, 58, 0, 18, 32, 87, 0, 0, 0, 77, 0, 0, 0, 60, 0, 0, 0, 60, 23, 17, 0, 0, 45, 50, 63, 0, 0, 20, 0, 36, 80, 0, 0, 0, 0, 0, 35, 7, 140, 101, 143, 169, 96, 158, 55, 100, 222, 208, 235, 161, 212, 311, 403, 336, 386, 356, 458, 543, 611, 674, 713, 731, 755, 833, 888, 1019, 1117, 1143, 1326, 1367, 1455, 1498, 1602, 1647, 1664, 1814, 1873, 1790, 1929, 1927, 2023, 2023, 2004, 1964, 1984, 2023, 1938, 2023, 1907, 1916, 1944, 1755, 1844, 1821, 1783, 1678, 1562, 1534, 1489, 1312, 1233, 1288, 1148, 1021, 955, 857, 870, 824, 805, 615, 680, 477, 425, 428, 410, 330, 330, 318, 219, 216, 158, 103, 205, 212, 202, 16, 67, 129, 88, 0, 130, 36, 87, 0, 86, 111, 41, 31, 9, 78, 0, 0, 40, 0, 37, 0, 0, 90, 92, 77, 45, 89, 52, 0, 20, 0, 5, 0, 35, 0, 98, 34, 67, 0, 0, 90},
};

int N = 5;
int M = 171;
int D = 2;

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