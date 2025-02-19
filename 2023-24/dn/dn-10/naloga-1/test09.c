
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
            616,
            (PO[]){{"FIZ", 10}, {"DS", 5}, {"RK", 6}, {"ARS", 10}},
            4,
        },
        (Student[]) {
            491,
            (PO[]){{"OIS", 8}, {"LA", 10}},
            2,
        },
        (Student[]) {
            917,
            (PO[]){{"OMA", 7}, {"DS", 9}},
            2,
        },
        (Student[]) {
            878,
            (PO[]){{"DS", 7}},
            1,
        },
        (Student[]) {
            668,
            (PO[]){{"P1", 6}, {"P2", 10}, {"OMA", 10}, {"ARS", 8}, {"RK", 8}, {"ODV", 5}, {"LA", 8}, {"FIZ", 8}, {"OIS", 5}},
            9,
        },
        (Student[]) {
            321,
            (PO[]){{"ODV", 5}, {"RK", 7}, {"OMA", 9}, {"ARS", 9}, {"DS", 5}, {"P1", 5}, {"P2", 6}, {"LA", 8}},
            8,
        },
        (Student[]) {
            537,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            549,
            (PO[]){{"P1", 7}, {"ARS", 6}, {"ODV", 7}, {"OIS", 5}, {"P2", 9}},
            5,
        },
        (Student[]) {
            971,
            (PO[]){{"P1", 9}, {"OIS", 6}, {"DS", 7}, {"LA", 9}, {"FIZ", 6}, {"P2", 6}, {"OMA", 7}, {"ODV", 5}, {"RK", 7}, {"ARS", 8}},
            10,
        },
        (Student[]) {
            459,
            (PO[]){{"FIZ", 8}, {"ODV", 10}, {"DS", 6}, {"LA", 5}, {"OMA", 6}, {"ARS", 7}, {"P1", 6}},
            7,
        },
        (Student[]) {
            916,
            (PO[]){{"OMA", 10}, {"ARS", 7}, {"DS", 10}, {"LA", 6}},
            4,
        },
        (Student[]) {
            912,
            (PO[]){{"ARS", 9}, {"ODV", 9}},
            2,
        },
        (Student[]) {
            615,
            (PO[]){{"OIS", 7}, {"RK", 10}, {"P2", 7}, {"P1", 8}},
            4,
        },
        (Student[]) {
            977,
            (PO[]){{"P1", 9}, {"RK", 10}, {"FIZ", 5}, {"P2", 6}, {"LA", 9}},
            5,
        },
        (Student[]) {
            229,
            (PO[]){{"DS", 5}, {"LA", 8}, {"P1", 7}, {"OMA", 5}, {"P2", 9}, {"RK", 6}, {"ARS", 9}, {"ODV", 5}, {"OIS", 5}},
            9,
        },
        (Student[]) {
            466,
            (PO[]){{"ODV", 8}, {"ARS", 5}, {"FIZ", 6}, {"LA", 7}},
            4,
        },
        (Student[]) {
            242,
            (PO[]){{"RK", 9}, {"DS", 7}},
            2,
        },
        (Student[]) {
            203,
            (PO[]){{"P2", 9}, {"LA", 7}, {"DS", 6}, {"P1", 6}, {"ARS", 9}, {"RK", 8}, {"FIZ", 5}, {"OIS", 9}},
            8,
        },
        (Student[]) {
            996,
            (PO[]){{"OMA", 10}, {"FIZ", 10}, {"DS", 6}, {"ODV", 10}, {"LA", 7}, {"OIS", 5}, {"RK", 9}, {"ARS", 8}, {"P1", 8}, {"P2", 6}},
            10,
        },
        (Student[]) {
            269,
            (PO[]){{"ODV", 9}, {"RK", 10}, {"FIZ", 5}},
            3,
        },
        (Student[]) {
            638,
            (PO[]){{"LA", 9}, {"ODV", 5}, {"OMA", 8}},
            3,
        },
        (Student[]) {
            651,
            (PO[]){{"FIZ", 8}, {"RK", 9}, {"P2", 9}, {"OIS", 9}, {"DS", 8}, {"ARS", 10}, {"OMA", 8}},
            7,
        },
        (Student[]) {
            700,
            (PO[]){{"P1", 8}, {"OMA", 9}, {"P2", 8}},
            3,
        },
        (Student[]) {
            649,
            (PO[]){{"P2", 9}, {"RK", 7}, {"P1", 5}, {"LA", 7}, {"DS", 10}, {"FIZ", 10}, {"OMA", 5}},
            7,
        },
        (Student[]) {
            485,
            (PO[]){{"DS", 9}},
            1,
        },
        (Student[]) {
            859,
            (PO[]){{"FIZ", 8}, {"ARS", 6}, {"RK", 8}, {"P1", 8}, {"DS", 9}, {"P2", 8}, {"OMA", 10}},
            7,
        },
        (Student[]) {
            439,
            (PO[]){{"OMA", 8}, {"ODV", 10}, {"ARS", 7}, {"OIS", 6}, {"DS", 6}, {"FIZ", 8}, {"RK", 8}},
            7,
        },
        (Student[]) {
            648,
            (PO[]){{"OIS", 9}, {"ARS", 6}},
            2,
        },
        (Student[]) {
            207,
            (PO[]){{"ODV", 7}, {"P1", 5}, {"LA", 7}, {"ARS", 8}, {"OIS", 9}},
            5,
        },
        (Student[]) {
            286,
            (PO[]){{"DS", 7}, {"LA", 6}, {"ODV", 10}, {"ARS", 10}, {"P2", 10}, {"FIZ", 8}, {"OMA", 5}, {"P1", 6}},
            8,
        },
        (Student[]) {
            364,
            (PO[]){{"P1", 9}, {"LA", 10}},
            2,
        },
        (Student[]) {
            998,
            (PO[]){{"P1", 5}, {"ODV", 10}, {"OIS", 5}, {"OMA", 9}, {"FIZ", 8}, {"ARS", 8}, {"DS", 8}, {"RK", 8}, {"LA", 7}, {"P2", 9}},
            10,
        },
        (Student[]) {
            581,
            (PO[]){{"ODV", 6}, {"P2", 10}},
            2,
        },
        (Student[]) {
            729,
            (PO[]){{"RK", 8}},
            1,
        },
        (Student[]) {
            273,
            (PO[]){{"OMA", 5}, {"P1", 6}, {"RK", 7}},
            3,
        },
        (Student[]) {
            186,
            (PO[]){{"ARS", 6}, {"RK", 7}, {"OMA", 10}, {"FIZ", 8}, {"ODV", 5}},
            5,
        },
        (Student[]) {
            456,
            (PO[]){{"FIZ", 6}, {"P2", 5}, {"DS", 10}},
            3,
        },
        (Student[]) {
            486,
            (PO[]){{"DS", 8}, {"P1", 5}, {"LA", 7}, {"ODV", 6}, {"OMA", 7}},
            5,
        },
        (Student[]) {
            601,
            (PO[]){{"P1", 8}, {"RK", 7}, {"P2", 10}, {"ARS", 8}, {"OMA", 9}, {"DS", 9}, {"LA", 8}},
            7,
        },
        (Student[]) {
            947,
            (PO[]){{"ODV", 5}, {"ARS", 5}, {"RK", 10}, {"P2", 8}, {"DS", 10}},
            5,
        },
        (Student[]) {
            265,
            (PO[]){{"FIZ", 8}, {"OIS", 7}, {"LA", 6}, {"P2", 9}, {"ARS", 5}, {"ODV", 5}, {"OMA", 10}, {"P1", 8}},
            8,
        },
        (Student[]) {
            861,
            (PO[]){{"LA", 5}, {"RK", 5}, {"FIZ", 7}},
            3,
        },
        (Student[]) {
            180,
            (PO[]){{"RK", 8}, {"FIZ", 6}, {"ODV", 7}, {"LA", 8}, {"P2", 9}, {"OIS", 8}, {"OMA", 5}, {"ARS", 10}, {"P1", 10}, {"DS", 10}},
            10,
        },
        (Student[]) {
            498,
            (PO[]){{"ARS", 9}},
            1,
        },
        (Student[]) {
            528,
            (PO[]){{"OMA", 5}, {"ODV", 6}, {"P1", 7}, {"ARS", 6}, {"OIS", 8}, {"P2", 10}, {"RK", 7}, {"DS", 6}, {"FIZ", 6}},
            9,
        },
        (Student[]) {
            250,
            (PO[]){{"OIS", 7}, {"RK", 8}, {"FIZ", 7}, {"OMA", 8}, {"P1", 5}, {"DS", 6}, {"LA", 7}},
            7,
        },
        (Student[]) {
            218,
            (PO[]){{"ARS", 10}, {"DS", 6}, {"ODV", 6}, {"P2", 6}, {"FIZ", 6}, {"LA", 7}},
            6,
        },
        (Student[]) {
            835,
            (PO[]){{"ARS", 7}, {"P1", 8}, {"LA", 7}, {"OMA", 9}, {"RK", 9}, {"FIZ", 10}, {"ODV", 8}},
            7,
        },
        (Student[]) {
            847,
            (PO[]){{"OMA", 8}, {"RK", 8}},
            2,
        },
        (Student[]) {
            950,
            (PO[]){{"OMA", 5}, {"ARS", 5}, {"P1", 10}, {"RK", 10}, {"P2", 7}, {"LA", 8}, {"OIS", 10}},
            7,
        },
        (Student[]) {
            720,
            (PO[]){{"DS", 8}, {"FIZ", 7}, {"ODV", 7}, {"OIS", 9}, {"P2", 10}, {"OMA", 7}, {"ARS", 9}},
            7,
        },
        (Student[]) {
            823,
            (PO[]){{"OMA", 10}},
            1,
        },
        (Student[]) {
            918,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            904,
            (PO[]){{"P2", 5}},
            1,
        },
        (Student[]) {
            514,
            (PO[]){{"RK", 6}, {"ARS", 9}, {"P1", 6}, {"P2", 6}, {"ODV", 6}, {"OMA", 7}, {"DS", 5}},
            7,
        },
        (Student[]) {
            552,
            (PO[]){{"P1", 6}, {"FIZ", 9}, {"OMA", 7}, {"RK", 10}, {"ARS", 8}, {"ODV", 7}},
            6,
        },
        (Student[]) {
            392,
            (PO[]){{"ODV", 7}, {"RK", 8}},
            2,
        },
        (Student[]) {
            162,
            (PO[]){{"RK", 10}, {"FIZ", 5}, {"P1", 9}, {"DS", 9}, {"OMA", 5}, {"ODV", 7}},
            6,
        },
        (Student[]) {
            227,
            (PO[]){{"ODV", 5}, {"P2", 8}, {"P1", 9}, {"FIZ", 9}, {"DS", 6}, {"ARS", 10}, {"OIS", 10}, {"OMA", 10}, {"RK", 8}},
            9,
        },
        (Student[]) {
            408,
            (PO[]){{"OMA", 6}, {"RK", 8}, {"ARS", 8}, {"OIS", 5}, {"P2", 9}, {"P1", 5}, {"LA", 5}, {"DS", 6}, {"ODV", 7}, {"FIZ", 6}},
            10,
        },
        (Student[]) {
            312,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            935,
            (PO[]){{"FIZ", 8}, {"OMA", 5}, {"OIS", 9}},
            3,
        },
        (Student[]) {
            718,
            (PO[]){{"ARS", 9}, {"P2", 10}},
            2,
        },
        (Student[]) {
            357,
            (PO[]){{"LA", 7}, {"ODV", 6}, {"FIZ", 6}, {"ARS", 9}, {"OMA", 9}, {"P2", 5}, {"DS", 5}, {"RK", 7}, {"OIS", 10}, {"P1", 8}},
            10,
        },
        (Student[]) {
            393,
            (PO[]){{"P2", 9}, {"OIS", 8}, {"P1", 9}, {"ARS", 8}, {"RK", 6}},
            5,
        },
        (Student[]) {
            707,
            (PO[]){{"ODV", 6}, {"OIS", 6}, {"P1", 10}, {"FIZ", 7}, {"ARS", 5}, {"P2", 7}, {"DS", 9}, {"RK", 7}, {"OMA", 5}},
            9,
        },
        (Student[]) {
            684,
            (PO[]){{"P1", 8}, {"LA", 6}, {"FIZ", 7}, {"OMA", 8}},
            4,
        },
        (Student[]) {
            502,
            (PO[]){{"FIZ", 7}, {"DS", 8}, {"LA", 5}, {"P2", 10}, {"ARS", 8}, {"OMA", 6}},
            6,
        },
        (Student[]) {
            741,
            (PO[]){{"LA", 10}, {"RK", 5}},
            2,
        },
        (Student[]) {
            374,
            (PO[]){{"ODV", 8}, {"P2", 7}, {"DS", 7}, {"OMA", 5}, {"RK", 7}},
            5,
        },
        (Student[]) {
            574,
            (PO[]){{"ARS", 9}, {"LA", 7}},
            2,
        },
        (Student[]) {
            911,
            (PO[]){{"P1", 10}, {"OIS", 8}, {"RK", 9}, {"P2", 5}, {"DS", 10}},
            5,
        },
        (Student[]) {
            482,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            329,
            (PO[]){{"P1", 7}, {"FIZ", 10}, {"ODV", 9}, {"RK", 7}},
            4,
        },
        (Student[]) {
            820,
            (PO[]){{"FIZ", 9}, {"OMA", 7}, {"P2", 10}, {"ODV", 9}, {"LA", 5}},
            5,
        },
        (Student[]) {
            205,
            (PO[]){{"FIZ", 8}, {"P2", 5}, {"ARS", 9}, {"OIS", 7}, {"P1", 7}, {"LA", 6}, {"DS", 7}, {"RK", 5}, {"ODV", 5}},
            9,
        },
        (Student[]) {
            569,
            (PO[]){{"P1", 10}, {"DS", 6}, {"LA", 10}, {"P2", 10}, {"FIZ", 10}, {"RK", 9}, {"ARS", 9}, {"OIS", 6}},
            8,
        },
        (Student[]) {
            974,
            (PO[]){{"ARS", 7}, {"P1", 5}, {"ODV", 5}, {"FIZ", 10}, {"DS", 6}},
            5,
        },
        (Student[]) {
            508,
            (PO[]){{"RK", 10}, {"P2", 5}, {"OIS", 6}, {"DS", 8}, {"ODV", 5}, {"OMA", 5}, {"P1", 5}, {"ARS", 9}, {"LA", 8}, {"FIZ", 9}},
            10,
        },
        (Student[]) {
            632,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            385,
            (PO[]){{"DS", 6}, {"ODV", 9}, {"OMA", 6}, {"LA", 9}, {"RK", 9}, {"P2", 8}, {"FIZ", 10}, {"OIS", 10}, {"P1", 10}},
            9,
        },
        (Student[]) {
            979,
            (PO[]){{"RK", 10}, {"OIS", 5}, {"OMA", 6}, {"ODV", 8}, {"ARS", 6}, {"FIZ", 5}, {"P2", 5}},
            7,
        },
        (Student[]) {
            235,
            (PO[]){{"LA", 9}, {"P1", 7}, {"OMA", 7}},
            3,
        },
        (Student[]) {
            501,
            (PO[]){{"OMA", 6}, {"FIZ", 8}, {"P1", 6}, {"LA", 9}, {"RK", 8}, {"ODV", 7}},
            6,
        },
        (Student[]) {
            592,
            (PO[]){{"FIZ", 9}, {"OMA", 6}, {"OIS", 8}, {"DS", 6}, {"ARS", 7}, {"P1", 6}},
            6,
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
