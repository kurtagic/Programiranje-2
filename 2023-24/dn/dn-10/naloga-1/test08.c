
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
            852,
            (PO[]){{"OMA", 6}, {"P1", 9}, {"P2", 8}, {"ODV", 9}, {"FIZ", 7}},
            5,
        },
        (Student[]) {
            494,
            (PO[]){{"P1", 7}, {"FIZ", 9}, {"OMA", 5}, {"P2", 7}},
            4,
        },
        (Student[]) {
            417,
            (PO[]){{"ARS", 5}, {"P2", 6}, {"OMA", 9}, {"RK", 10}, {"ODV", 9}, {"P1", 7}, {"OIS", 10}},
            7,
        },
        (Student[]) {
            759,
            (PO[]){{"DS", 7}, {"FIZ", 8}, {"LA", 6}},
            3,
        },
        (Student[]) {
            131,
            (PO[]){{"OIS", 10}, {"OMA", 10}, {"RK", 9}, {"ARS", 7}, {"P2", 10}, {"FIZ", 5}, {"DS", 6}, {"ODV", 9}},
            8,
        },
        (Student[]) {
            537,
            (PO[]){{"ARS", 10}},
            1,
        },
        (Student[]) {
            815,
            (PO[]){{"LA", 6}, {"RK", 7}, {"P2", 5}, {"OIS", 6}},
            4,
        },
        (Student[]) {
            752,
            (PO[]){{"P1", 5}},
            1,
        },
        (Student[]) {
            986,
            (PO[]){{"P2", 5}, {"ARS", 9}, {"ODV", 10}, {"OIS", 10}, {"FIZ", 9}, {"LA", 8}, {"RK", 10}, {"DS", 7}, {"OMA", 9}, {"P1", 9}},
            10,
        },
        (Student[]) {
            487,
            (PO[]){{"OIS", 8}, {"DS", 10}, {"OMA", 6}, {"LA", 6}, {"ARS", 6}},
            5,
        },
        (Student[]) {
            173,
            (PO[]){{"OIS", 5}, {"FIZ", 7}, {"ODV", 9}, {"P2", 8}, {"OMA", 5}},
            5,
        },
        (Student[]) {
            942,
            (PO[]){{"RK", 7}, {"OIS", 5}, {"ODV", 7}, {"P2", 8}, {"P1", 7}, {"DS", 6}, {"FIZ", 9}, {"LA", 9}, {"ARS", 10}, {"OMA", 9}},
            10,
        },
        (Student[]) {
            521,
            (PO[]){{"OMA", 5}, {"FIZ", 7}},
            2,
        },
        (Student[]) {
            784,
            (PO[]){{"DS", 5}, {"RK", 10}},
            2,
        },
        (Student[]) {
            149,
            (PO[]){{"RK", 8}, {"P1", 6}, {"FIZ", 9}},
            3,
        },
        (Student[]) {
            545,
            (PO[]){{"RK", 8}, {"P1", 5}, {"P2", 9}, {"FIZ", 8}, {"ARS", 9}, {"LA", 5}, {"OMA", 7}, {"DS", 10}, {"ODV", 5}, {"OIS", 8}},
            10,
        },
        (Student[]) {
            342,
            (PO[]){{"DS", 9}},
            1,
        },
        (Student[]) {
            217,
            (PO[]){{"FIZ", 10}},
            1,
        },
        (Student[]) {
            806,
            (PO[]){{"ARS", 10}, {"OIS", 5}, {"DS", 7}, {"FIZ", 6}, {"P1", 6}, {"OMA", 5}},
            6,
        },
        (Student[]) {
            840,
            (PO[]){{"FIZ", 6}, {"OIS", 9}, {"P1", 8}, {"OMA", 8}},
            4,
        },
        (Student[]) {
            845,
            (PO[]){{"FIZ", 6}, {"DS", 7}, {"OMA", 9}, {"OIS", 10}, {"ARS", 9}, {"LA", 8}, {"RK", 6}, {"P1", 9}},
            8,
        },
        (Student[]) {
            411,
            (PO[]){{"P1", 7}, {"ARS", 10}, {"LA", 9}, {"DS", 9}},
            4,
        },
        (Student[]) {
            142,
            (PO[]){{"ODV", 6}, {"LA", 10}, {"OMA", 5}, {"ARS", 9}, {"P1", 10}, {"DS", 10}},
            6,
        },
        (Student[]) {
            452,
            (PO[]){{"P1", 10}, {"ARS", 6}, {"FIZ", 9}, {"P2", 6}, {"RK", 5}, {"LA", 6}, {"DS", 10}, {"OMA", 6}, {"ODV", 5}, {"OIS", 7}},
            10,
        },
        (Student[]) {
            111,
            (PO[]){{"P2", 10}, {"FIZ", 9}, {"RK", 6}, {"OMA", 8}, {"ODV", 7}, {"LA", 10}, {"OIS", 9}, {"P1", 9}},
            8,
        },
        (Student[]) {
            233,
            (PO[]){{"RK", 9}, {"OMA", 10}, {"OIS", 6}, {"ARS", 8}, {"LA", 8}, {"ODV", 9}, {"DS", 7}, {"P2", 5}, {"P1", 10}, {"FIZ", 6}},
            10,
        },
        (Student[]) {
            307,
            (PO[]){{"DS", 9}, {"LA", 8}},
            2,
        },
        (Student[]) {
            148,
            (PO[]){{"RK", 5}, {"P2", 6}, {"P1", 6}, {"OIS", 7}, {"ODV", 9}},
            5,
        },
        (Student[]) {
            532,
            (PO[]){{"DS", 9}, {"LA", 9}, {"RK", 8}, {"P2", 6}, {"OIS", 9}, {"OMA", 8}, {"ODV", 9}, {"FIZ", 7}, {"ARS", 8}, {"P1", 9}},
            10,
        },
        (Student[]) {
            892,
            (PO[]){{"ODV", 7}},
            1,
        },
        (Student[]) {
            431,
            (PO[]){{"OMA", 5}, {"P1", 9}, {"RK", 7}, {"P2", 9}, {"ARS", 9}, {"DS", 8}, {"OIS", 9}},
            7,
        },
        (Student[]) {
            246,
            (PO[]){{"P2", 6}, {"P1", 6}, {"OMA", 7}, {"OIS", 8}, {"RK", 10}, {"ARS", 6}, {"DS", 5}, {"FIZ", 10}, {"LA", 9}, {"ODV", 5}},
            10,
        },
        (Student[]) {
            616,
            (PO[]){{"LA", 10}, {"P2", 5}, {"RK", 8}, {"OMA", 5}, {"P1", 10}, {"DS", 6}, {"OIS", 6}, {"ODV", 10}, {"ARS", 8}, {"FIZ", 7}},
            10,
        },
        (Student[]) {
            993,
            (PO[]){{"ODV", 7}, {"DS", 6}, {"OIS", 5}, {"FIZ", 9}, {"P1", 9}},
            5,
        },
        (Student[]) {
            359,
            (PO[]){{"LA", 8}, {"P1", 6}, {"P2", 6}, {"RK", 10}, {"ARS", 5}, {"OMA", 10}, {"FIZ", 9}, {"ODV", 9}, {"DS", 10}},
            9,
        },
        (Student[]) {
            665,
            (PO[]){{"P1", 7}, {"ARS", 10}, {"LA", 7}, {"RK", 10}, {"FIZ", 9}, {"DS", 5}, {"P2", 10}, {"OMA", 7}, {"OIS", 6}},
            9,
        },
        (Student[]) {
            824,
            (PO[]){{"ODV", 7}, {"DS", 7}, {"LA", 7}, {"OMA", 9}, {"FIZ", 5}, {"P1", 6}},
            6,
        },
        (Student[]) {
            316,
            (PO[]){{"ODV", 5}, {"OMA", 8}, {"FIZ", 5}, {"P2", 7}, {"OIS", 7}, {"LA", 10}},
            6,
        },
        (Student[]) {
            916,
            (PO[]){{"ODV", 10}},
            1,
        },
        (Student[]) {
            329,
            (PO[]){{"ARS", 10}, {"P1", 6}, {"OIS", 6}, {"P2", 7}, {"OMA", 7}, {"DS", 7}, {"ODV", 7}, {"RK", 8}, {"LA", 8}},
            9,
        },
        (Student[]) {
            648,
            (PO[]){{"OIS", 7}, {"ARS", 9}, {"DS", 10}, {"P1", 10}, {"FIZ", 8}, {"LA", 6}, {"ODV", 10}, {"P2", 8}, {"OMA", 5}},
            9,
        },
        (Student[]) {
            391,
            (PO[]){{"FIZ", 8}, {"DS", 7}, {"OIS", 9}, {"P2", 9}, {"ODV", 10}, {"P1", 5}},
            6,
        },
        (Student[]) {
            776,
            (PO[]){{"OMA", 10}},
            1,
        },
        (Student[]) {
            228,
            (PO[]){{"ODV", 10}, {"P2", 10}, {"RK", 6}, {"P1", 7}, {"OIS", 9}, {"LA", 7}, {"OMA", 10}, {"FIZ", 7}, {"ARS", 10}, {"DS", 5}},
            10,
        },
        (Student[]) {
            395,
            (PO[]){{"ODV", 9}, {"P2", 8}, {"LA", 9}, {"OMA", 9}, {"OIS", 5}, {"DS", 9}, {"FIZ", 8}, {"P1", 7}, {"ARS", 9}, {"RK", 7}},
            10,
        },
        (Student[]) {
            299,
            (PO[]){{"RK", 8}, {"ODV", 10}, {"FIZ", 8}, {"LA", 6}, {"P2", 10}, {"DS", 9}, {"P1", 7}, {"OIS", 9}},
            8,
        },
        (Student[]) {
            290,
            (PO[]){{"DS", 5}, {"OMA", 10}, {"ARS", 5}, {"P2", 10}, {"ODV", 6}},
            5,
        },
        (Student[]) {
            463,
            (PO[]){{"OIS", 7}, {"DS", 6}, {"ODV", 6}},
            3,
        },
        (Student[]) {
            681,
            (PO[]){{"ODV", 9}, {"FIZ", 9}, {"RK", 5}},
            3,
        },
        (Student[]) {
            999,
            (PO[]){{"OIS", 7}, {"DS", 10}, {"ODV", 9}, {"RK", 5}, {"ARS", 5}, {"FIZ", 9}, {"LA", 6}, {"OMA", 9}},
            8,
        },
        (Student[]) {
            251,
            (PO[]){{"OMA", 5}, {"ODV", 6}, {"DS", 6}, {"RK", 5}, {"P2", 6}, {"FIZ", 6}, {"LA", 5}, {"OIS", 6}, {"P1", 10}},
            9,
        },
        (Student[]) {
            688,
            (PO[]){{"FIZ", 5}, {"ARS", 5}, {"RK", 10}, {"P2", 6}, {"ODV", 10}},
            5,
        },
        (Student[]) {
            570,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            563,
            (PO[]){{"ARS", 8}, {"OIS", 7}},
            2,
        },
        (Student[]) {
            572,
            (PO[]){{"RK", 7}, {"ODV", 8}, {"FIZ", 7}},
            3,
        },
        (Student[]) {
            788,
            (PO[]){{"RK", 6}, {"P2", 5}, {"P1", 9}, {"ARS", 8}},
            4,
        },
        (Student[]) {
            774,
            (PO[]){{"P2", 10}, {"OIS", 7}, {"RK", 6}, {"DS", 10}, {"ODV", 9}, {"P1", 6}},
            6,
        },
        (Student[]) {
            644,
            (PO[]){{"DS", 9}, {"FIZ", 9}, {"P2", 6}},
            3,
        },
        (Student[]) {
            470,
            (PO[]){{"FIZ", 9}},
            1,
        },
        (Student[]) {
            460,
            (PO[]){{"ODV", 5}, {"FIZ", 6}, {"OIS", 9}, {"P2", 6}, {"P1", 9}, {"ARS", 6}, {"RK", 8}, {"LA", 9}, {"DS", 10}},
            9,
        },
        (Student[]) {
            518,
            (PO[]){{"FIZ", 10}, {"DS", 5}, {"OMA", 6}, {"P1", 5}, {"ODV", 7}, {"OIS", 6}},
            6,
        },
        (Student[]) {
            347,
            (PO[]){{"DS", 8}, {"LA", 9}, {"OIS", 8}, {"OMA", 7}, {"ARS", 8}, {"RK", 7}},
            6,
        },
        (Student[]) {
            350,
            (PO[]){{"RK", 6}, {"FIZ", 10}, {"P2", 6}, {"ODV", 7}, {"P1", 10}},
            5,
        },
        (Student[]) {
            443,
            (PO[]){{"FIZ", 9}, {"LA", 7}, {"DS", 6}, {"OIS", 9}},
            4,
        },
        (Student[]) {
            712,
            (PO[]){{"P2", 7}, {"P1", 5}},
            2,
        },
        (Student[]) {
            728,
            (PO[]){{"DS", 9}, {"LA", 6}, {"OMA", 7}, {"ODV", 5}},
            4,
        },
        (Student[]) {
            163,
            (PO[]){{"OMA", 9}, {"ARS", 5}, {"RK", 5}, {"DS", 9}, {"P2", 9}, {"LA", 9}, {"FIZ", 6}},
            7,
        },
        (Student[]) {
            925,
            (PO[]){{"ARS", 9}, {"LA", 7}, {"RK", 7}, {"OMA", 8}, {"OIS", 5}, {"FIZ", 9}, {"P2", 6}},
            7,
        },
        (Student[]) {
            415,
            (PO[]){{"RK", 5}, {"P2", 9}},
            2,
        },
        (Student[]) {
            769,
            (PO[]){{"FIZ", 8}},
            1,
        },
        (Student[]) {
            694,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            550,
            (PO[]){{"OMA", 10}, {"RK", 7}, {"OIS", 10}, {"FIZ", 9}, {"ARS", 10}},
            5,
        },
        (Student[]) {
            504,
            (PO[]){{"P1", 6}, {"DS", 9}},
            2,
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
