
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {180, 83, 25, 181, 116, 50, 142, 149, 156, 114, 160, 46, 21, 130, 117, 128, 178, 85, 86, 155, 44, 132, 120, 36, 115, 30, 5, 147, 74, 41, 22, 107, 34, 168, 112, 161, 138, 158, 89, 49, 164, 173, 110, 80, 40, 1, 64, 71, 51, 141, 118, 28, 105, 103, 14, 9, 10, 126, 129, 97, 176, 4, 18, 159, 32, 47, 26, 69, 177, 13, 2, 58, 127, 66, 163, 145, 119, 37, 140, 165, 53, 179, 79, 136, 154, 43, 31, 38, 93, 122, 151, 153, 59, 3, 33, 62, 148, 60, 124, 96, 35, 102, 100, 57, 39, 19, 78, 55, 162, 146, 166, 12, 91, 131, 45, 113, 87, 109, 17, 73, 84, 99, 76, 72, 65, 169, 29, 15, 68, 137, 182, 157, 11, 150, 152, 48, 135, 175, 170, 108, 172, 42, 70, 167, 123, 8, 125, 16, 24, 75, 144, 82, 61, 121, 143, 88, 63, 0, 67, 90, 92, 52, 104, 23, 106, 95, 77, 139, 111, 94, 134, 56, 101, 98, 54, 81, 7, 27, 171, 20, 133, 6};
const int NN[] = {133, 136, 30, 6, 87, 118, 70, 75, 63, 45, 92, 64, 132, 182, 109, 68, 171, 43, 31, 88, 40, 11, 84, 138, 113, 22, 50, 16, 163, 173, 120, 55, 112, 111, 91, 52, 170, 67, 122, 141, 106, 98, 166, 53, 164, 83, 32, 58, 28, 42, 17, 74, 19, 57, 117, 114, 160, 29, 137, 60, 7, 116, 86, 90, 34, 71, 5, 13, 27, 130, 25, 129, 15, 26, 23, 8, 73, 158, 172, 95, 103, 20, 165, 135, 143, 80, 107, 89, 3, 76, 82, 121, 97, 181, 168, 18, 24, 176, 65, 148, 161, 100, 35, 126, 49, 155, 140, 9, 104, 125, 77, 21, 153, 157, 1, 131, 38, 146, 85, 66, 154, 96, 119, 127, 47, 94, 41, 128, 177, 175, 182, 0, 46, 144, 61, 51, 48, 81, 134, 162, 101, 110, 2, 139, 72, 156, 169, 178, 115, 145, 123, 79, 4, 99, 167, 93, 159, 180, 69, 151, 59, 105, 39, 36, 78, 62, 37, 108, 12, 33, 152, 10, 102, 124, 14, 179, 149, 147, 56, 44, 150, 142};
const int RANDOM[] = {162, 7, 103, 138, 26, 178, 45, 141, 117, 113, 181, 59, 116, 3, 167, 37, 173, 69, 161, 35, 52, 179, 114, 124, 71, 171, 114, 161, 115, 52, 31, 118, 13, 169, 68, 86, 57, 22, 44, 122, 68, 9, 115, 8, 26, 80, 82, 126, 109, 69, 64, 166, 29, 111, 37, 141, 107, 153, 166, 117, 132, 36, 37, 20, 33, 145, 60, 150, 127, 24, 177, 98, 154, 79, 125, 17, 57, 102, 123, 115, 117, 72, 163, 170, 48, 164, 31, 143, 105, 118, 11, 98, 21, 94, 69, 46, 177, 68, 162, 45, 168, 78, 74, 4, 131, 31, 142, 55, 145, 91, 50, 82, 137, 32, 53, 121, 81, 160, 62, 18, 58, 65, 83, 31, 163, 141, 13, 128, 154, 175, 91, 40, 158, 40, 75, 24, 106, 86, 28, 95, 13, 151, 30, 112, 168, 70, 144, 30, 35, 169, 21, 148, 109, 160, 61, 151, 19, 97, 62, 147, 40, 152, 29, 78, 28, 168, 128, 68, 50, 111, 149, 171, 101, 34, 3, 48, 148, 90, 34, 152, 182, 101};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 174;

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