#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001

int _A[] = {3854, 6952, 6269, 8154, 7882, 4475, 516, 2129, 5426, 2555, 9075, 205, 3979, 1186, 6595, 3055, 8565, 6736, 9325, 4883, 8, 8563, 6331, 2204, 3003, 1198, 1551, 5146, 9937, 6556, 344, 667, 1283, 5082, 4491, 8170, 1978, 2044, 2980, 4428, 6557, 331, 7688, 4294, 7469, 9142, 7619, 9651, 4309, 3518, 8415, 1550, 6891, 8573, 2790, 8421, 7080, 1676, 7629, 1171, 3812, 1337, 8521, 2238, 1262, 8472, 1989, 8380, 7375, 6422, 4191, 8285, 3670, 3904, 9868, 4197, 1652, 3234, 3755, 1519, 9919, 4497, 8499, 7442, 8998, 3159, 7778, 2040, 4759, 2271, 1608, 4199, 1738, 5302, 5434, 851, 7311, 5083, 4170, 2962, 9422, 1281, 9746, 2644, 5298, 7526, 5192, 1112, 5401, 4718, 7403, 3530, 9807, 7131, 1771, 589, 3598, 7864, 7341, 1248, 3919, 7117, 2680, 2070, 2983, 4702, 2128, 8032, 9775, 2117, 4828, 7378, 9151, 8185, 4856, 84, 9499, 2589, 1889, 1491, 7668, 8070, 4282, 2012, 7569, 3705, 1731, 3284, 3562, 1509, 5334, 9609, 1827, 4043, 8943, 1563, 9714, 1517, 7837, 4133, 7879, 505, 3599, 2559, 7072, 539, 155, 9546, 990, 6020, 6199, 1347, 540, 5894, 2445, 2201, 4746, 8669, 7814, 3559, 1660, 5420, 4518, 2312, 2919, 7719, 1127, 764, 3558, 8199, 6478, 9406, 9707, 4803, 7642, 7238, 7116, 418, 7026, 9334, 6250, 8209, 7281, 5963, 9996, 8408, 8562, 3950, 9414, 2761, 8842, 7816, 4917, 7142, 4868, 5047, 2600, 8758, 4743, 2018, 4071, 318, 8892, 4745, 6194, 9127, 8607, 422, 7579, 8586, 6864, 7801, 3532, 3671, 2519, 1891, 9595, 117, 7992, 7507, 8953, 1947, 7966, 1403, 9504, 3714, 1812, 5781, 6933, 4957, 266, 7823, 7711, 4613, 865, 4652, 2303, 5941, 5767, 2655, 8253, 9550, 8104, 2987, 1996, 9740, 2873, 1015, 7940, 911, 4704, 5540, 4019, 5898, 5228, 7127, 7360, 8656, 7109, 8073, 3141, 7513, 104, 2241, 3124, 9166, 4173, 9446, 6327, 1361, 6263, 8371, 7423, 7188, 4673, 3910, 4665, 8162, 8535, 8417, 6626, 5884, 848, 7803, 5408, 4152, 2439, 6924, 4793, 6068, 3582, 5246, 5410, 8286, 8500, 4695, 3606, 7030, 2751, 8910, 6052, 7951, 9593, 3088, 3992, 2466, 9337, 445, 1297, 8048, 4859, 2599, 6223, 5818, 2032, 1936, 2142, 3505, 7227, 468, 8393, 7000, 1077, 9764, 8613, 7776, 4257, 1654, 8227, 4312, 7571, 5576, 6228, 7468, 475, 8005, 1651, 4038, 6682, 9529, 6653, 6871, 1672, 2787, 232, 2132, 1405, 1282, 5608, 5312, 4790, 3944, 8587, 3580, 2543, 7977, 9967, 179, 2573, 3706, 1082, 1611, 7981, 4982, 8674, 8743, 7365, 6955, 6464, 4797, 4288, 7079, 9700, 3977, 8919, 7972, 8727, 9331, 4916, 7432, 9033, 6273, 7869, 3451, 1162, 8423, 8056, 9625, 145, 1217, 9309, 5178, 910, 7086, 8828, 8896, 312, 6642, 3040, 1742, 5071, 8801, 7552, 9269, 9283, 3437, 7138, 2234, 934, 9324, 8601, 6729, 3859, 1016, 2828, 3810, 7071, 8977, 1589, 5424, 4361, 4585, 5927, 5480, 925, 4899, 1253, 3490, 9111, 1534, 2711, 1649, 3958, 2396, 8554, 773, 9253, 4566, 8614, 2348, 2249, 6545, 5156, 5926, 1148, 1464, 5563, 2660, 6809, 4680, 9335, 7180, 3702, 70, 7846, 3279, 5184, 9305, 8299, 2395, 3920, 8313, 4124, 3989, 9533, 9918, 2602, 6208, 993, 3148, 9670, 2378, 2560, 8752, 8740, 4005, 5989, 2457, 9584, 3070, 9377, 819, 7264, 2023, 8815, 1046, 3005, 4036, 9520, 1846, 6364, 3515, 6670, 8698, 9514, 5614, 6439, 9241, 7974, 9786, 5044, 2948, 8566, 5423, 756, 3974, 5918, 4185, 5602, 5034, 7006, 3594, 2691, 5231, 5343, 2522, 7902, 7467, 881, 1994, 4737, 6754, 1074, 2871, 5143, 2897, 4107, 5329, 1366, 430, 5459, 7328, 4710, 6854, 1111, 797, 2556, 8712, 2114, 8477, 9477, 3209, 1785, 5429, 2713, 4771, 2876, 8872, 9382, 7953, 1070, 699, 4556, 9031, 2960, 1802, 5834, 3668, 157, 3091, 3775, 7209, 5731, 4987, 9027, 9476, 917, 5135, 8052, 9886, 1941, 277, 4002, 9547, 2435, 4885, 7276, 8645, 9447, 7398, 7662, 1793, 7970, 1963, 4452, 4537, 3483, 5756, 8975, 2431, 4617, 1316, 5064, 8448, 8179, 1091, 8869, 3046, 9574, 5119, 1279, 2664, 7411, 3041, 9742, 8633, 1, 9363, 4822, 6480, 408, 6730, 437, 5051, 3226, 9988, 8918, 1579, 3697, 9480, 4853, 5924, 9425, 1277, 6843, 900, 4030, 7220, 4926, 1088, 7355, 4950, 725, 9128, 5551, 7472, 501, 3850, 6067, 7794, 6167, 3840, 8388, 2902, 875, 945, 594, 7640, 5921, 7493, 4415, 2954, 6463, 7107, 5191, 5746, 5850, 5428, 9396, 7936, 6259, 2530, 8841, 2447, 4432, 3436, 8106, 4203, 9267, 5296, 27, 1833, 757, 1959, 8798, 498, 8306, 5558, 3555, 40, 5080, 2767, 5164, 5032, 3449, 1308, 4765, 1533, 6127, 9435, 9859, 8379, 1094, 1136, 9761, 2643, 2008, 2764, 839, 5458, 9158, 7361, 3299, 3548, 4970, 5847, 3009, 7260, 4707, 5403, 2161, 7267, 8203, 2900, 8347, 3455, 7927, 134, 3389, 1599, 1305, 7005, 9842, 4441, 3127, 6358, 1617, 1428, 6350, 6043, 5680, 3132, 1395, 1175, 4714, 1708, 7198, 1980, 4181, 9483, 7963, 5581, 544, 2065, 4179, 2581, 4499, 3071, 6597, 8196, 8002, 6013, 6568, 5882, 9094, 5054, 3417, 6122, 8460, 1764, 146, 4078, 6076, 5078, 1284, 7926, 9910, 3799, 8308, 5299, 6896, 8441, 4143, 8963, 7494, 7278, 7913, 4564, 1421, 5665, 2326, 5208, 6613, 5383, 5238, 7551, 2688, 5088, 1239, 1326, 1896, 4881, 3454, 1145, 5582, 7022, 2106, 7584, 91, 7491, 5369, 8390, 1614, 1415, 8197, 5098, 9017, 8069, 1245, 2181, 2749, 7930, 2157, 6738, 5676, 1925, 3292, 5737, 1862, 2957, 5969, 5110, 6818, 4411, 2698, 3412, 3693, 634, 4641, 1546, 9393, 5699, 585, 4844, 1342, 5249, 3673, 5640, 5854, 9750, 1757, 1832, 7658, 8051, 9067, 7785, 6248, 1068, 623, 8110, 2165, 4253, 1119, 3337, 398, 5996, 254, 485, 2055, 275, 3476, 2838, 4958, 1504, 514, 5043, 5353, 9478, 2712, 229, 3110, 6630, 9697, 305, 2634, 7694, 8455, 8272, 4660, 2947, 3758, 4290, 433, 5843, 5541, 2486, 6612, 3153, 3259, 8232, 9631, 2091, 8658, 1598, 4980, 9060, 3143, 7228, 9372, 1387, 4527, 8282, 7096, 6268, 9857, 2721, 9359, 9758, 1302, 6409, 69, 4935, 8994, 3935, 1191, 8158, 5929, 4741, 1414, 1158, 897, 28, 129, 5407, 3500, 6255, 8079, 4227, 7406, 5490, 1008, 9676, 1498, 6995, 3975};
int _B[] = {7556, 2589, 5411, 3436, 1316, 1881, 5489, 3992, 9166, 1012, 7071, 9593, 945, 8709, 6581, 596, 2070, 6759, 4738, 4408, 9489, 7311, 9651, 6441, 9621, 7579, 1088, 2117, 7079, 5403, 6670, 8943, 4881, 106, 1145, 7044, 6653, 3455, 573, 7417, 1809, 5924, 9910, 8178, 1016, 7469, 8056, 6464, 1198, 3259, 2828, 5054, 3347, 8655, 2573, 6068, 9151, 5665, 6730, 2324, 7662, 2466, 2238, 6409, 7328, 3877, 4737, 3598, 9514, 6702, 7015, 3044, 911, 9266, 9051, 8674, 7679, 3770, 7303, 5582, 5558, 7127, 6818, 7846, 9918, 2348, 8379, 7855, 7072, 4844, 9546, 5969, 155, 8712, 5091, 9787, 1262, 5656, 6578, 6822, 1233, 5541, 3110, 6595, 7921, 1778, 2478, 202, 5941, 1530, 819, 8554, 1405, 6074, 5843, 4733, 7897, 2680, 3697, 5083, 2448, 6923, 9477, 4260, 9271, 9697, 9414, 2555, 2558, 2204, 7866, 8460, 934, 2384, 5781, 7977, 8111, 4022, 1509, 2824, 2900, 1414, 9595, 2698, 4532, 3124};
Vozlisce* _I2A[_M];
Vozlisce* _I2B[_M];

Vozlisce* _izTabele(int* t, int n, Vozlisce** i2v) {
    if (n == 0) {
        return NULL;
    }
    Vozlisce* v = malloc(sizeof(Vozlisce));
    v->podatek = *t;
    i2v[*t] = v;
    v->naslednje = _izTabele(t + 1, n - 1, i2v);
    return v;
}

void _izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        printf("%s%d", (w == v ? "" : ", "), w->podatek);
        w = w->naslednje;
    }
    printf("]\n");
}

void _istovetnost(Vozlisce* v, Vozlisce** i2v) {
    for (Vozlisce* w = v; w != NULL; w = w->naslednje) {
        printf("%d", w == i2v[w->podatek]);
    }
    printf("\n");
}

void _pocisti(Vozlisce* v) {
    if (v != NULL) {
        _pocisti(v->naslednje);
        free(v);
    }
}

int main() {
    Vozlisce* a = _izTabele(_A, sizeof(_A) / sizeof(int), _I2A);
    Vozlisce* b = _izTabele(_B, sizeof(_B) / sizeof(int), _I2B);

    printf("Prej:\n");
    _izpisi(a);
    _izpisi(b);
    printf("\n");

    Vozlisce* na = NULL;
    Vozlisce* nb = NULL;
    izlociSkupne(a, b, &na, &nb);

    printf("Potem:\n");
    _izpisi(na);
    _izpisi(nb);
    printf("\n");

    printf("Istovetnost ohranjenih vozlisc:\n");
    _istovetnost(na, _I2A);
    _istovetnost(nb, _I2B);

    _pocisti(na);
    _pocisti(nb);

    return 0;
}