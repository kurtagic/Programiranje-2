
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {142, 79, 233, 80, 249, 260, 122, 220, 209, 104, 213, 3, 183, 146, 254, 214, 264, 32, 244, 65, 28, 112, 62, 67, 211, 174, 156, 68, 37, 130, 110, 54, 72, 145, 217, 163, 12, 69, 0, 177, 114, 245, 175, 234, 126, 237, 27, 195, 278, 225, 127, 202, 277, 21, 101, 77, 182, 169, 176, 75, 167, 119, 23, 144, 140, 125, 41, 59, 123, 180, 257, 87, 48, 236, 280, 44, 171, 64, 63, 129, 4, 250, 49, 78, 51, 133, 53, 216, 45, 222, 208, 88, 22, 66, 263, 14, 224, 186, 19, 91, 15, 247, 206, 198, 131, 203, 168, 152, 231, 252, 135, 93, 31, 1, 29, 200, 118, 238, 212, 149, 111, 13, 230, 268, 191, 11, 20, 106, 39, 239, 194, 223, 98, 266, 193, 103, 199, 36, 136, 246, 251, 8, 74, 132, 205, 161, 242, 57, 108, 232, 204, 35, 240, 262, 256, 120, 196, 46, 109, 187, 97, 253, 173, 90, 215, 121, 162, 269, 185, 10, 235, 81, 159, 201, 166, 141, 71, 158, 148, 197, 95, 241, 134, 207, 73, 18, 56, 9, 58, 273, 105, 26, 17, 6, 270, 138, 164, 265, 82, 179, 86, 30, 255, 43, 50, 184, 40, 272, 229, 154, 178, 227, 221, 128, 52, 219, 107, 248, 143, 16, 96, 2, 92, 243, 267, 275, 181, 188, 117, 276, 76, 137, 150, 172, 60, 115, 218, 139, 34, 160, 153, 192, 94, 33, 25, 189, 157, 190, 210, 85, 47, 226, 89, 165, 228, 147, 258, 38, 261, 279, 274, 170, 5, 100, 271, 84, 42, 259, 55, 113, 61, 116, 7, 99, 151, 70, 124, 83, 102, 155};
const int PREJSNJE[] = {38, 113, 221, 11, 80, 262, 193, 272, 141, 187, 169, 125, 36, 121, 95, 100, 219, 192, 185, 98, 126, 53, 92, 62, 280, 244, 191, 46, 20, 114, 201, 112, 17, 243, 238, 151, 137, 28, 257, 128, 206, 66, 266, 203, 75, 88, 157, 250, 72, 82, 204, 84, 214, 86, 31, 268, 186, 147, 188, 67, 234, 270, 22, 78, 77, 19, 93, 23, 27, 37, 275, 176, 32, 184, 142, 59, 230, 55, 83, 1, 3, 171, 198, 277, 265, 249, 200, 71, 91, 252, 163, 99, 222, 111, 242, 180, 220, 160, 132, 273, 263, 54, 278, 135, 9, 190, 127, 216, 148, 158, 30, 120, 21, 269, 40, 235, 271, 228, 116, 61, 155, 165, 6, 68, 276, 65, 44, 50, 213, 79, 29, 104, 143, 85, 182, 110, 138, 231, 195, 237, 64, 175, 0, 218, 63, 33, 13, 255, 178, 119, 232, 274, 107, 240, 209, 279, 26, 246, 177, 172, 239, 145, 166, 35, 196, 253, 174, 60, 106, 57, 261, 76, 233, 162, 25, 42, 58, 39, 210, 199, 69, 226, 56, 12, 205, 168, 97, 159, 227, 245, 247, 124, 241, 134, 130, 47, 156, 179, 103, 136, 115, 173, 51, 105, 150, 144, 102, 183, 90, 8, 248, 24, 118, 10, 15, 164, 87, 34, 236, 215, 7, 212, 89, 131, 96, 49, 251, 211, 254, 208, 122, 108, 149, 2, 43, 170, 73, 45, 117, 129, 152, 181, 146, 223, 18, 41, 139, 101, 217, 4, 81, 140, 109, 161, 14, 202, 154, 70, 256, 267, 5, 258, 153, 94, 16, 197, 133, 224, 123, 167, 194, 264, 207, 189, 260, 225, 229, 52, 48, 259};
const int RANDOM[] = {37, 219, 205, 82, 230, 262, 102, 199, 216, 144, 223, 270, 252, 96, 194, 95, 275, 271, 219, 201, 14, 134, 100, 15, 24, 235, 248, 192, 45, 129, 116, 110, 111, 112, 269, 167, 238, 233, 49, 27, 98, 245, 167, 72, 275, 167, 57, 216, 162, 76, 106, 107, 38, 29, 48, 26, 182, 10, 221, 277, 256, 2, 109, 170, 264, 162, 139, 21, 192, 32, 277, 118, 263, 270, 227, 232, 32, 133, 221, 164, 26, 76, 220, 271, 218, 191, 146, 50, 162, 12, 27, 135, 175, 96, 54, 143, 202, 160, 121, 110, 41, 62, 126, 274, 91, 70, 35, 149, 61, 243, 148, 76, 57, 185, 189, 167, 177, 0, 123, 114, 18, 117, 189, 231, 265, 249, 11, 115, 127, 256, 131, 150, 270, 89, 101, 145, 86, 5, 59, 189, 248, 240, 233, 257, 119, 236, 18, 134, 31, 22, 121, 68, 114, 205, 223, 178, 73, 188, 94, 94, 70, 24, 19, 135, 136, 258, 197, 96, 214, 180, 242, 141, 126, 47, 12, 122, 114, 219, 120, 238, 134, 67, 142, 64, 178, 227, 261, 266, 117, 40, 65, 94, 106, 76, 34, 166, 138, 277, 96, 167, 109, 123, 256, 144, 82, 274, 163, 116, 150, 191, 200, 16, 163, 271, 167, 265, 182, 126, 170, 244, 123, 34, 207, 119, 226, 60, 178, 179, 249, 220, 13, 252, 198, 48, 29, 77, 201, 49, 65, 169, 107, 60, 118, 195, 97, 106, 278, 170, 90, 261, 157, 83, 254, 3, 21, 251, 169, 191, 27, 17, 116, 208, 150, 120, 45, 28, 267, 123, 200, 187, 25, 6, 238, 39, 167, 29, 59, 27, 279, 260};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 24;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->prejsnje = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->prejsnje == v[PREJSNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}