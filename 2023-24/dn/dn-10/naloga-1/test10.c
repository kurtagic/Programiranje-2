
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

void izvedi(Student** studentje, int stStudentov, char* predmet) {
    int stVO = 0;
    VO** vvo = opravili(studentje, stStudentov, predmet, &stVO);
    printf("[");
    for (int i = 0;  i < stVO;  i++) {
        VO* vo = vvo[i];
        if (i > 0) {
            printf(", ");
        }
        printf("%d/%d", vo->vpisna, vo->ocena);
    }
    printf("]\n");
}

int main() {
    Student* studentje[] = {
        (Student[]) {
            778,
            (PO[]){{"ODV", 9}, {"LA", 8}, {"P1", 5}, {"ARS", 10}, {"RK", 10}},
            5,
        },
        (Student[]) {
            638,
            (PO[]){{"FIZ", 5}, {"ARS", 9}, {"P1", 9}, {"RK", 8}, {"DS", 8}, {"LA", 5}, {"OMA", 6}, {"OIS", 6}, {"ODV", 8}},
            9,
        },
        (Student[]) {
            678,
            (PO[]){{"ARS", 9}, {"OMA", 10}, {"DS", 8}, {"ODV", 8}, {"RK", 10}, {"OIS", 9}, {"LA", 6}, {"P1", 7}, {"FIZ", 10}},
            9,
        },
        (Student[]) {
            650,
            (PO[]){{"DS", 9}, {"RK", 5}, {"OMA", 9}, {"FIZ", 6}},
            4,
        },
        (Student[]) {
            273,
            (PO[]){{"FIZ", 5}, {"OIS", 5}, {"RK", 10}, {"DS", 8}},
            4,
        },
        (Student[]) {
            439,
            (PO[]){{"LA", 10}, {"P1", 6}, {"OMA", 10}, {"P2", 10}, {"OIS", 8}, {"ODV", 5}, {"RK", 8}, {"DS", 8}, {"FIZ", 10}, {"ARS", 5}},
            10,
        },
        (Student[]) {
            338,
            (PO[]){{"ODV", 7}, {"LA", 5}, {"P1", 5}, {"P2", 9}, {"RK", 5}, {"FIZ", 8}, {"OMA", 10}, {"OIS", 5}, {"DS", 10}},
            9,
        },
        (Student[]) {
            181,
            (PO[]){{"ODV", 8}, {"P1", 6}, {"P2", 9}, {"DS", 5}, {"OMA", 9}, {"RK", 6}},
            6,
        },
        (Student[]) {
            197,
            (PO[]){{"ARS", 10}, {"OMA", 8}, {"RK", 5}},
            3,
        },
        (Student[]) {
            449,
            (PO[]){{"P2", 6}, {"P1", 10}, {"ODV", 8}, {"OMA", 5}, {"DS", 9}, {"ARS", 5}, {"LA", 5}},
            7,
        },
        (Student[]) {
            987,
            (PO[]){{"RK", 8}, {"P1", 7}},
            2,
        },
        (Student[]) {
            604,
            (PO[]){{"P2", 7}},
            1,
        },
        (Student[]) {
            353,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            675,
            (PO[]){{"ODV", 6}, {"OMA", 6}, {"LA", 7}, {"OIS", 5}, {"ARS", 10}, {"FIZ", 6}, {"P1", 7}, {"P2", 10}, {"DS", 8}, {"RK", 7}},
            10,
        },
        (Student[]) {
            966,
            (PO[]){{"DS", 6}, {"P1", 6}, {"RK", 5}, {"LA", 7}, {"FIZ", 6}, {"P2", 10}, {"ARS", 10}, {"OMA", 7}},
            8,
        },
        (Student[]) {
            407,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            857,
            (PO[]){{"ARS", 5}, {"ODV", 7}, {"OMA", 10}, {"RK", 10}, {"FIZ", 10}, {"P2", 8}, {"OIS", 7}, {"P1", 8}},
            8,
        },
        (Student[]) {
            261,
            (PO[]){{"P2", 6}, {"LA", 6}},
            2,
        },
        (Student[]) {
            767,
            (PO[]){{"FIZ", 8}, {"OIS", 9}, {"ODV", 7}, {"P1", 5}, {"DS", 10}, {"P2", 6}, {"LA", 8}, {"ARS", 10}, {"RK", 5}},
            9,
        },
        (Student[]) {
            776,
            (PO[]){{"RK", 9}, {"ODV", 10}},
            2,
        },
        (Student[]) {
            892,
            (PO[]){{"OIS", 9}, {"LA", 10}, {"P1", 7}, {"P2", 6}, {"FIZ", 7}, {"ARS", 7}, {"OMA", 8}, {"ODV", 8}, {"RK", 5}, {"DS", 9}},
            10,
        },
        (Student[]) {
            736,
            (PO[]){{"DS", 5}, {"OMA", 7}, {"P2", 5}, {"OIS", 7}, {"ODV", 10}, {"FIZ", 6}, {"RK", 5}, {"P1", 9}, {"ARS", 7}},
            9,
        },
        (Student[]) {
            690,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            621,
            (PO[]){{"RK", 6}, {"ODV", 7}},
            2,
        },
        (Student[]) {
            423,
            (PO[]){{"LA", 6}, {"DS", 6}, {"P1", 6}, {"RK", 6}, {"OIS", 6}},
            5,
        },
        (Student[]) {
            550,
            (PO[]){{"OIS", 9}},
            1,
        },
        (Student[]) {
            938,
            (PO[]){{"ARS", 9}, {"ODV", 8}, {"OMA", 9}, {"RK", 6}},
            4,
        },
        (Student[]) {
            472,
            (PO[]){{"FIZ", 10}, {"DS", 8}, {"OMA", 10}, {"OIS", 7}, {"RK", 5}, {"P1", 5}, {"LA", 9}},
            7,
        },
        (Student[]) {
            815,
            (PO[]){{"OMA", 8}, {"P1", 9}, {"ARS", 6}},
            3,
        },
        (Student[]) {
            254,
            (PO[]){{"P1", 5}},
            1,
        },
        (Student[]) {
            888,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            435,
            (PO[]){{"ODV", 8}, {"RK", 5}, {"OIS", 6}, {"P1", 9}, {"DS", 10}, {"P2", 8}, {"ARS", 5}, {"OMA", 9}},
            8,
        },
        (Student[]) {
            581,
            (PO[]){{"ODV", 7}, {"OIS", 6}, {"LA", 7}, {"FIZ", 9}},
            4,
        },
        (Student[]) {
            629,
            (PO[]){{"OMA", 7}, {"DS", 8}},
            2,
        },
        (Student[]) {
            221,
            (PO[]){{"P2", 9}, {"ODV", 8}, {"LA", 5}, {"OMA", 8}},
            4,
        },
        (Student[]) {
            988,
            (PO[]){{"DS", 6}, {"OIS", 5}, {"RK", 7}, {"LA", 7}, {"FIZ", 10}, {"ODV", 9}, {"P2", 6}, {"ARS", 8}},
            8,
        },
        (Student[]) {
            391,
            (PO[]){{"P2", 7}, {"RK", 10}, {"ODV", 8}, {"ARS", 5}, {"OIS", 10}, {"OMA", 8}, {"FIZ", 7}, {"LA", 5}, {"P1", 7}},
            9,
        },
        (Student[]) {
            807,
            (PO[]){{"P1", 10}, {"LA", 8}, {"P2", 9}, {"ARS", 5}, {"RK", 5}, {"OMA", 6}, {"FIZ", 8}, {"OIS", 7}},
            8,
        },
        (Student[]) {
            204,
            (PO[]){{"OMA", 5}, {"P1", 7}, {"ARS", 9}, {"OIS", 5}, {"ODV", 9}, {"RK", 6}},
            6,
        },
        (Student[]) {
            451,
            (PO[]){{"DS", 7}, {"FIZ", 5}, {"ODV", 9}, {"P1", 8}, {"P2", 6}, {"RK", 9}, {"OIS", 5}, {"ARS", 8}, {"LA", 6}, {"OMA", 10}},
            10,
        },
        (Student[]) {
            607,
            (PO[]){{"P1", 5}, {"ODV", 10}, {"OMA", 9}, {"P2", 7}},
            4,
        },
        (Student[]) {
            118,
            (PO[]){{"OMA", 9}, {"FIZ", 6}},
            2,
        },
        (Student[]) {
            980,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            246,
            (PO[]){{"ODV", 6}, {"FIZ", 6}, {"P1", 5}, {"OMA", 9}},
            4,
        },
        (Student[]) {
            545,
            (PO[]){{"DS", 6}, {"ODV", 7}},
            2,
        },
        (Student[]) {
            760,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            504,
            (PO[]){{"FIZ", 8}, {"DS", 6}, {"P2", 7}, {"LA", 8}},
            4,
        },
        (Student[]) {
            931,
            (PO[]){{"ARS", 10}, {"ODV", 10}, {"P1", 6}, {"OIS", 6}, {"P2", 8}, {"OMA", 9}, {"RK", 8}, {"LA", 5}, {"FIZ", 9}, {"DS", 10}},
            10,
        },
        (Student[]) {
            642,
            (PO[]){{"LA", 7}},
            1,
        },
        (Student[]) {
            852,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            610,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            235,
            (PO[]){{"FIZ", 7}, {"OMA", 9}, {"RK", 9}, {"LA", 6}, {"ARS", 7}, {"P1", 7}, {"OIS", 8}, {"P2", 8}, {"ODV", 10}},
            9,
        },
        (Student[]) {
            365,
            (PO[]){{"FIZ", 6}},
            1,
        },
        (Student[]) {
            495,
            (PO[]){{"LA", 6}, {"OMA", 5}, {"FIZ", 8}, {"ARS", 7}, {"P2", 9}, {"ODV", 7}, {"RK", 10}},
            7,
        },
        (Student[]) {
            376,
            (PO[]){{"ODV", 8}, {"P2", 6}, {"P1", 10}, {"OIS", 9}, {"OMA", 10}, {"RK", 8}, {"DS", 10}},
            7,
        },
        (Student[]) {
            324,
            (PO[]){{"FIZ", 8}, {"P2", 7}, {"ODV", 10}, {"LA", 7}, {"OMA", 10}, {"RK", 9}, {"ARS", 9}, {"P1", 7}},
            8,
        },
        (Student[]) {
            579,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            898,
            (PO[]){{"DS", 6}, {"ARS", 8}, {"P2", 8}, {"OIS", 8}},
            4,
        },
        (Student[]) {
            349,
            (PO[]){{"P2", 8}, {"ARS", 9}, {"OMA", 7}, {"DS", 7}, {"P1", 5}, {"FIZ", 7}, {"RK", 7}, {"ODV", 10}},
            8,
        },
        (Student[]) {
            952,
            (PO[]){{"ARS", 7}, {"P2", 6}, {"LA", 7}, {"RK", 7}, {"P1", 5}},
            5,
        },
        (Student[]) {
            876,
            (PO[]){{"LA", 7}, {"DS", 7}, {"OMA", 9}, {"P1", 10}, {"ODV", 10}, {"FIZ", 5}, {"OIS", 10}, {"ARS", 9}},
            8,
        },
        (Student[]) {
            643,
            (PO[]){{"P2", 9}, {"OIS", 6}, {"FIZ", 9}, {"RK", 8}, {"P1", 6}},
            5,
        },
        (Student[]) {
            419,
            (PO[]){{"RK", 5}, {"OMA", 10}, {"P1", 5}, {"FIZ", 9}},
            4,
        },
        (Student[]) {
            157,
            (PO[]){{"ODV", 9}, {"DS", 9}, {"P1", 7}, {"ARS", 8}, {"OIS", 7}, {"RK", 10}, {"LA", 9}, {"FIZ", 7}, {"OMA", 8}, {"P2", 9}},
            10,
        },
        (Student[]) {
            611,
            (PO[]){{"RK", 5}, {"FIZ", 9}, {"ODV", 6}, {"OIS", 6}, {"P1", 10}, {"DS", 9}, {"P2", 10}, {"LA", 10}},
            8,
        },
        (Student[]) {
            960,
            (PO[]){{"OMA", 6}, {"DS", 10}, {"ODV", 7}, {"LA", 9}},
            4,
        },
        (Student[]) {
            344,
            (PO[]){{"OMA", 7}, {"RK", 8}, {"FIZ", 9}, {"ODV", 6}, {"LA", 6}, {"P2", 5}, {"DS", 5}, {"ARS", 8}},
            8,
        },
        (Student[]) {
            292,
            (PO[]){{"P1", 5}, {"RK", 10}, {"ARS", 10}, {"P2", 7}, {"FIZ", 5}, {"DS", 5}, {"ODV", 5}},
            7,
        },
        (Student[]) {
            877,
            (PO[]){{"P2", 5}, {"P1", 6}, {"RK", 5}, {"OIS", 5}, {"ODV", 8}, {"LA", 6}, {"FIZ", 5}, {"DS", 7}, {"OMA", 9}},
            9,
        },
        (Student[]) {
            441,
            (PO[]){{"RK", 10}, {"DS", 9}, {"OMA", 8}, {"OIS", 9}, {"ARS", 5}, {"P1", 6}, {"LA", 9}},
            7,
        },
        (Student[]) {
            373,
            (PO[]){{"P2", 5}, {"OIS", 8}, {"DS", 10}, {"FIZ", 5}},
            4,
        },
        (Student[]) {
            969,
            (PO[]){{"FIZ", 6}, {"LA", 8}, {"OIS", 9}, {"DS", 6}, {"P1", 10}, {"OMA", 9}, {"RK", 6}},
            7,
        },
        (Student[]) {
            281,
            (PO[]){{"P2", 10}, {"FIZ", 9}, {"P1", 5}, {"RK", 5}, {"ARS", 6}, {"DS", 7}, {"OMA", 10}},
            7,
        },
        (Student[]) {
            870,
            (PO[]){{"OIS", 9}, {"ARS", 10}, {"DS", 9}, {"LA", 7}},
            4,
        },
        (Student[]) {
            742,
            (PO[]){{"P2", 8}, {"RK", 6}, {"ARS", 10}, {"OMA", 7}, {"DS", 9}, {"P1", 6}, {"FIZ", 10}, {"OIS", 9}},
            8,
        },
        (Student[]) {
            729,
            (PO[]){{"RK", 5}, {"DS", 5}, {"LA", 7}, {"ODV", 10}, {"P1", 10}, {"P2", 6}, {"OIS", 9}, {"OMA", 5}, {"FIZ", 7}, {"ARS", 8}},
            10,
        },
        (Student[]) {
            309,
            (PO[]){{"ODV", 7}},
            1,
        },
        (Student[]) {
            814,
            (PO[]){{"RK", 8}, {"OMA", 6}, {"ARS", 5}, {"OIS", 10}},
            4,
        },
        (Student[]) {
            779,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            633,
            (PO[]){{"OMA", 8}, {"P2", 5}, {"ARS", 5}, {"DS", 5}, {"RK", 6}, {"LA", 5}},
            6,
        },
        (Student[]) {
            479,
            (PO[]){{"P1", 7}, {"LA", 7}, {"RK", 10}, {"OMA", 8}, {"ODV", 10}, {"FIZ", 7}},
            6,
        },
        (Student[]) {
            825,
            (PO[]){{"OMA", 9}, {"DS", 8}, {"FIZ", 8}, {"ODV", 8}, {"LA", 8}},
            5,
        },
        (Student[]) {
            909,
            (PO[]){{"ODV", 5}, {"DS", 10}, {"P1", 5}, {"OMA", 6}, {"OIS", 8}, {"P2", 6}, {"LA", 7}, {"ARS", 5}, {"FIZ", 10}, {"RK", 10}},
            10,
        },
        (Student[]) {
            785,
            (PO[]){{"DS", 6}, {"P1", 7}},
            2,
        },
        (Student[]) {
            860,
            (PO[]){{"LA", 8}, {"ARS", 10}, {"OMA", 7}, {"RK", 9}, {"P1", 5}, {"FIZ", 9}, {"ODV", 9}},
            7,
        },
        (Student[]) {
            405,
            (PO[]){{"LA", 8}, {"ODV", 7}},
            2,
        },
        (Student[]) {
            271,
            (PO[]){{"P2", 6}, {"OMA", 7}, {"OIS", 6}, {"P1", 9}, {"LA", 10}, {"DS", 8}, {"FIZ", 8}, {"ODV", 8}, {"RK", 7}},
            9,
        },
        (Student[]) {
            976,
            (PO[]){{"ARS", 9}, {"LA", 10}, {"DS", 5}, {"ODV", 9}, {"OIS", 9}, {"FIZ", 5}, {"OMA", 6}, {"P1", 6}},
            8,
        },
        (Student[]) {
            492,
            (PO[]){{"RK", 6}},
            1,
        },
        (Student[]) {
            224,
            (PO[]){{"P2", 5}, {"FIZ", 8}, {"OIS", 10}, {"P1", 6}, {"LA", 6}, {"ARS", 8}},
            6,
        },
        (Student[]) {
            893,
            (PO[]){{"ARS", 6}, {"P2", 7}, {"RK", 8}},
            3,
        },
        (Student[]) {
            773,
            (PO[]){{"FIZ", 5}, {"P2", 7}, {"P1", 8}, {"OIS", 8}, {"DS", 10}, {"ODV", 5}, {"OMA", 6}, {"RK", 5}, {"ARS", 5}, {"LA", 5}},
            10,
        },
        (Student[]) {
            343,
            (PO[]){{"LA", 9}, {"OIS", 7}, {"ARS", 7}, {"OMA", 5}, {"ODV", 6}, {"DS", 7}, {"FIZ", 10}, {"P2", 9}, {"RK", 9}},
            9,
        },
        (Student[]) {
            239,
            (PO[]){{"OIS", 8}, {"OMA", 6}},
            2,
        },
        (Student[]) {
            599,
            (PO[]){{"FIZ", 10}, {"ARS", 5}, {"RK", 9}, {"LA", 10}},
            4,
        },
        (Student[]) {
            658,
            (PO[]){{"OIS", 8}, {"P2", 10}, {"P1", 6}, {"ODV", 8}, {"OMA", 5}, {"RK", 5}, {"FIZ", 9}, {"DS", 8}},
            8,
        },
        (Student[]) {
            746,
            (PO[]){{"DS", 6}, {"OIS", 9}, {"OMA", 9}},
            3,
        },
        (Student[]) {
            366,
            (PO[]){{"P2", 8}, {"FIZ", 8}, {"OMA", 7}, {"RK", 6}, {"OIS", 8}},
            5,
        },
        (Student[]) {
            532,
            (PO[]){{"OIS", 9}, {"ODV", 7}, {"ARS", 9}, {"FIZ", 9}, {"LA", 7}, {"OMA", 6}},
            6,
        },
        (Student[]) {
            923,
            (PO[]){{"RK", 6}},
            1,
        },
    };
    int stStudentov = sizeof(studentje) / sizeof(studentje[0]);

    izvedi(studentje, stStudentov, "FIZ");
    izvedi(studentje, stStudentov, "ODV");
    izvedi(studentje, stStudentov, "OMA");
    izvedi(studentje, stStudentov, "DS");
    izvedi(studentje, stStudentov, "P1");
    izvedi(studentje, stStudentov, "ARS");
    izvedi(studentje, stStudentov, "RK");
    izvedi(studentje, stStudentov, "LA");
    izvedi(studentje, stStudentov, "OIS");
    izvedi(studentje, stStudentov, "P2");

    return 0;
}
