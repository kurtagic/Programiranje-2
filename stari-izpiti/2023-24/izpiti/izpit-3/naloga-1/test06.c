
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {218, 251, 243, 62, 32, 244, 207, 204, 167, 300, 49, 221, 114, 253, 155, 257, 161, 149, 247, 157, 139, 320, 331, 293, 31, 294, 285, 228, 154, 343, 284, 274, 152, 229, 65, 220, 69, 33, 64, 337, 292, 82, 287, 151, 341, 248, 181, 38, 330, 159, 117, 214, 198, 301, 240, 127, 61, 130, 212, 96, 77, 11, 205, 273, 56, 318, 128, 118, 288, 20, 252, 14, 2, 45, 141, 41, 133, 307, 99, 191, 334, 265, 25, 23, 296, 129, 107, 235, 183, 211, 279, 258, 196, 264, 126, 275, 182, 37, 338, 119, 123, 47, 144, 106, 5, 40, 116, 260, 317, 67, 315, 327, 342, 324, 309, 121, 72, 326, 90, 109, 345, 74, 178, 52, 241, 210, 261, 6, 213, 311, 303, 215, 76, 17, 160, 51, 233, 179, 336, 39, 267, 175, 48, 237, 110, 125, 280, 328, 35, 225, 135, 188, 80, 291, 186, 16, 58, 94, 12, 172, 219, 42, 169, 148, 278, 239, 98, 202, 92, 134, 88, 308, 162, 192, 269, 124, 206, 193, 147, 143, 236, 305, 286, 302, 103, 346, 256, 323, 150, 71, 339, 7, 44, 84, 18, 19, 217, 164, 34, 26, 30, 158, 189, 177, 36, 266, 24, 187, 97, 53, 59, 66, 310, 332, 319, 208, 87, 298, 184, 153, 268, 165, 83, 156, 73, 28, 203, 136, 185, 335, 272, 104, 54, 8, 146, 140, 75, 91, 299, 142, 145, 304, 329, 314, 10, 289, 112, 95, 249, 176, 21, 216, 43, 200, 222, 55, 201, 245, 209, 163, 115, 57, 226, 194, 4, 122, 295, 85, 197, 101, 290, 70, 263, 297, 277, 224, 102, 282, 344, 321, 13, 1, 100, 166, 171, 322, 68, 270, 50, 46, 333, 325, 108, 250, 22, 242, 9, 231, 223, 29, 86, 60, 89, 262, 232, 0, 234, 255, 271, 78, 63, 93, 316, 170, 340, 174, 173, 132, 195, 180, 190, 111, 238, 347, 312, 199, 306, 168, 131, 138, 254, 137, 259, 276, 3, 281, 227, 283, 120, 27, 313, 230, 15, 81, 79, 113, 246};
const int NN[] = {184, 216, 314, 205, 152, 10, 187, 36, 202, 86, 159, 165, 309, 200, 16, 245, 42, 225, 95, 94, 39, 190, 137, 250, 274, 22, 322, 185, 186, 81, 171, 277, 80, 335, 318, 268, 20, 229, 56, 283, 108, 25, 270, 188, 230, 249, 305, 64, 254, 172, 326, 319, 34, 60, 145, 6, 11, 303, 310, 182, 307, 221, 266, 297, 61, 195, 213, 90, 50, 139, 43, 155, 243, 248, 175, 82, 17, 255, 119, 7, 3, 122, 294, 293, 9, 311, 260, 140, 302, 66, 321, 209, 217, 4, 261, 224, 286, 33, 120, 109, 52, 38, 110, 116, 244, 292, 72, 115, 132, 118, 174, 168, 15, 312, 78, 74, 2, 306, 279, 67, 113, 141, 147, 198, 304, 59, 57, 207, 332, 93, 262, 208, 133, 149, 219, 214, 8, 143, 227, 337, 85, 124, 330, 91, 315, 210, 13, 131, 220, 28, 51, 150, 334, 325, 256, 161, 212, 126, 114, 162, 153, 287, 134, 35, 344, 142, 338, 189, 196, 160, 183, 271, 169, 44, 101, 241, 24, 84, 328, 237, 75, 0, 68, 89, 106, 246, 201, 347, 135, 14, 27, 204, 341, 296, 247, 157, 298, 278, 65, 285, 284, 12, 71, 193, 69, 295, 31, 323, 37, 301, 96, 128, 63, 259, 180, 97, 235, 223, 103, 291, 197, 239, 23, 58, 45, 154, 177, 233, 346, 281, 263, 5, 240, 167, 280, 267, 41, 258, 29, 48, 125, 232, 138, 340, 49, 46, 342, 275, 176, 206, 320, 87, 151, 30, 83, 127, 158, 289, 53, 148, 121, 130, 203, 18, 32, 178, 242, 129, 164, 47, 333, 252, 194, 231, 282, 73, 144, 100, 79, 111, 253, 251, 123, 98, 308, 238, 288, 290, 117, 181, 276, 199, 317, 21, 331, 329, 300, 104, 156, 343, 107, 77, 211, 226, 54, 218, 146, 55, 70, 99, 273, 264, 173, 88, 313, 269, 192, 76, 19, 236, 339, 327, 299, 347, 316, 26, 234, 92, 215, 336, 222, 179, 163, 102, 62, 1, 136, 166, 345, 228, 170, 272, 257, 265, 191, 324, 112};
const int RANDOM[] = {229, 52, 244, 128, 18, 107, 37, 192, 229, 44, 267, 28, 247, 66, 246, 308, 286, 286, 238, 12, 313, 248, 151, 297, 112, 54, 72, 5, 6, 218, 32, 48, 64, 185, 328, 162, 299, 186, 326, 214, 340, 21, 324, 10, 334, 145, 315, 224, 241, 266, 20, 207, 190, 169, 101, 254, 319, 305, 103, 81, 36, 245, 234, 130, 133, 284, 152, 346, 102, 13, 340, 201, 200, 41, 145, 36, 26, 123, 218, 49, 73, 36, 324, 241, 317, 253, 226, 329, 337, 246, 257, 88, 264, 313, 82, 317, 202, 266, 154, 186, 209, 136, 259, 2, 49, 315, 7, 179, 225, 237, 330, 90, 306, 332, 257, 339, 293, 42, 91, 257, 304, 118, 277, 209, 337, 108, 283, 143, 217, 325, 214, 92, 177, 297, 334, 276, 32, 225, 40, 314, 218, 287, 296, 244, 236, 86, 60, 191, 137, 130, 270, 154, 107, 292, 310, 210, 255, 51, 108, 347, 35, 293, 235, 76, 26, 61, 2, 252, 166, 174, 6, 286, 33, 203, 214, 267, 71, 94, 164, 273, 118, 290, 257, 182, 10, 246, 217, 210, 171, 93, 326, 167, 53, 323, 326, 119, 268, 103, 223, 24, 35, 212, 255, 296, 20, 144, 272, 176, 253, 266, 226, 254, 203, 285, 67, 73, 169, 144, 180, 82, 289, 170, 257, 316, 328, 232, 1, 251, 310, 141, 108, 81, 302, 18, 167, 66, 15, 100, 73, 345, 275, 330, 68, 276, 24, 20, 4, 147, 44, 2, 177, 277, 227, 334, 279, 340, 74, 151, 220, 154, 143, 78, 319, 301, 66, 212, 27, 194, 72, 15, 304, 338, 80, 181, 316, 289, 193, 195, 23, 231, 267, 158, 75, 293, 209, 256, 199, 66, 280, 333, 312, 74, 160, 36, 49, 199, 80, 339, 271, 241, 85, 66, 184, 89, 76, 247, 302, 284, 241, 254, 78, 19, 0, 324, 17, 294, 54, 200, 291, 333, 197, 337, 247, 82, 165, 281, 10, 110, 210, 5, 109, 235, 152, 94, 58, 332, 243, 45, 135, 106, 314, 205, 1, 178, 139, 341, 5};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 105;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->nn = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->nn == v[NN[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}