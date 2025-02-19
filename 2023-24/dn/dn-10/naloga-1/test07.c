
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
            432,
            (PO[]){{"ODV", 8}, {"DS", 7}, {"FIZ", 5}, {"ARS", 10}, {"OMA", 9}, {"RK", 8}},
            6,
        },
        (Student[]) {
            296,
            (PO[]){{"FIZ", 7}, {"ODV", 9}, {"ARS", 7}, {"LA", 9}, {"OIS", 9}, {"DS", 7}, {"OMA", 10}},
            7,
        },
        (Student[]) {
            826,
            (PO[]){{"OIS", 9}, {"OMA", 8}, {"P1", 5}, {"ARS", 8}, {"FIZ", 10}, {"P2", 10}, {"ODV", 10}, {"LA", 7}, {"DS", 9}},
            9,
        },
        (Student[]) {
            786,
            (PO[]){{"RK", 10}, {"P1", 8}},
            2,
        },
        (Student[]) {
            158,
            (PO[]){{"ODV", 10}, {"OIS", 10}, {"ARS", 7}, {"P1", 7}, {"OMA", 6}, {"DS", 9}, {"FIZ", 5}, {"P2", 8}, {"RK", 7}, {"LA", 9}},
            10,
        },
        (Student[]) {
            867,
            (PO[]){{"RK", 7}, {"LA", 9}, {"P2", 10}, {"P1", 8}, {"OMA", 10}, {"FIZ", 9}, {"DS", 9}},
            7,
        },
        (Student[]) {
            500,
            (PO[]){{"OIS", 6}, {"P2", 7}, {"DS", 6}, {"ODV", 6}, {"P1", 6}, {"OMA", 8}, {"LA", 6}, {"RK", 8}, {"FIZ", 9}, {"ARS", 5}},
            10,
        },
        (Student[]) {
            346,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            715,
            (PO[]){{"OIS", 8}, {"FIZ", 9}, {"OMA", 10}, {"DS", 5}},
            4,
        },
        (Student[]) {
            208,
            (PO[]){{"RK", 7}, {"OMA", 5}},
            2,
        },
        (Student[]) {
            548,
            (PO[]){{"P1", 8}, {"P2", 8}, {"OIS", 7}, {"LA", 9}, {"FIZ", 5}},
            5,
        },
        (Student[]) {
            106,
            (PO[]){{"RK", 8}, {"OMA", 10}, {"ARS", 8}, {"OIS", 7}, {"P2", 10}, {"FIZ", 7}, {"DS", 6}, {"ODV", 10}, {"P1", 8}, {"LA", 5}},
            10,
        },
        (Student[]) {
            175,
            (PO[]){{"P2", 5}, {"RK", 10}, {"FIZ", 10}, {"OMA", 5}, {"ODV", 8}, {"OIS", 8}, {"LA", 7}},
            7,
        },
        (Student[]) {
            469,
            (PO[]){{"ARS", 9}, {"DS", 9}, {"ODV", 10}, {"RK", 10}},
            4,
        },
        (Student[]) {
            411,
            (PO[]){{"ODV", 5}, {"FIZ", 7}, {"OMA", 5}, {"OIS", 6}, {"P2", 8}},
            5,
        },
        (Student[]) {
            316,
            (PO[]){{"LA", 7}, {"ODV", 7}, {"FIZ", 9}, {"OIS", 8}, {"DS", 7}, {"P2", 9}},
            6,
        },
        (Student[]) {
            542,
            (PO[]){{"ODV", 7}, {"P2", 9}, {"LA", 5}, {"DS", 5}, {"FIZ", 6}},
            5,
        },
        (Student[]) {
            696,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            592,
            (PO[]){{"DS", 10}},
            1,
        },
        (Student[]) {
            803,
            (PO[]){{"OMA", 10}, {"ODV", 7}, {"FIZ", 6}, {"RK", 5}, {"DS", 8}, {"P2", 7}},
            6,
        },
        (Student[]) {
            560,
            (PO[]){{"DS", 7}, {"FIZ", 8}, {"OMA", 6}, {"P2", 10}, {"ARS", 7}, {"OIS", 7}, {"LA", 7}, {"P1", 7}, {"ODV", 8}},
            9,
        },
        (Student[]) {
            907,
            (PO[]){{"OMA", 6}, {"P2", 9}, {"RK", 6}, {"LA", 7}, {"ARS", 10}, {"P1", 8}, {"DS", 5}, {"ODV", 7}, {"FIZ", 10}},
            9,
        },
        (Student[]) {
            680,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            789,
            (PO[]){{"ARS", 10}, {"FIZ", 6}, {"OMA", 10}, {"DS", 6}, {"P2", 6}, {"OIS", 6}, {"RK", 10}, {"ODV", 6}, {"P1", 7}},
            9,
        },
        (Student[]) {
            828,
            (PO[]){{"OMA", 8}, {"ARS", 5}, {"RK", 8}, {"LA", 7}, {"P2", 5}, {"ODV", 6}, {"OIS", 5}, {"FIZ", 9}, {"P1", 8}, {"DS", 8}},
            10,
        },
        (Student[]) {
            259,
            (PO[]){{"DS", 10}, {"OMA", 6}, {"P1", 10}, {"RK", 7}, {"ODV", 9}, {"FIZ", 7}},
            6,
        },
        (Student[]) {
            488,
            (PO[]){{"RK", 10}, {"P1", 6}, {"P2", 5}, {"DS", 9}, {"FIZ", 10}, {"OMA", 8}},
            6,
        },
        (Student[]) {
            452,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            884,
            (PO[]){{"FIZ", 10}, {"ARS", 6}},
            2,
        },
        (Student[]) {
            712,
            (PO[]){{"LA", 5}, {"OIS", 6}},
            2,
        },
        (Student[]) {
            101,
            (PO[]){{"OIS", 8}, {"OMA", 8}, {"ODV", 7}, {"RK", 7}},
            4,
        },
        (Student[]) {
            905,
            (PO[]){{"OIS", 9}, {"DS", 6}, {"P1", 7}, {"FIZ", 8}, {"LA", 7}, {"P2", 8}, {"RK", 5}, {"ARS", 10}, {"OMA", 10}, {"ODV", 10}},
            10,
        },
        (Student[]) {
            844,
            (PO[]){{"OMA", 7}, {"LA", 6}, {"DS", 8}, {"P2", 8}, {"P1", 9}, {"OIS", 8}, {"FIZ", 9}, {"ARS", 7}},
            8,
        },
        (Student[]) {
            847,
            (PO[]){{"LA", 9}, {"FIZ", 8}, {"P2", 7}, {"ODV", 8}, {"OMA", 10}, {"OIS", 10}},
            6,
        },
        (Student[]) {
            509,
            (PO[]){{"P1", 9}, {"LA", 10}, {"OMA", 8}, {"ARS", 6}, {"P2", 7}, {"FIZ", 6}, {"ODV", 5}, {"DS", 9}, {"OIS", 7}, {"RK", 5}},
            10,
        },
        (Student[]) {
            747,
            (PO[]){{"OMA", 10}, {"ARS", 7}, {"ODV", 5}},
            3,
        },
        (Student[]) {
            804,
            (PO[]){{"ODV", 10}, {"OIS", 5}, {"P2", 10}, {"DS", 7}, {"P1", 7}, {"OMA", 7}, {"RK", 6}, {"LA", 6}, {"ARS", 7}},
            9,
        },
        (Student[]) {
            118,
            (PO[]){{"RK", 8}, {"P2", 7}, {"FIZ", 9}, {"P1", 9}, {"DS", 6}, {"OMA", 5}, {"ARS", 7}, {"OIS", 8}},
            8,
        },
        (Student[]) {
            484,
            (PO[]){{"ODV", 5}, {"OMA", 10}, {"P1", 7}, {"OIS", 5}, {"FIZ", 10}, {"DS", 5}, {"P2", 8}, {"RK", 8}},
            8,
        },
        (Student[]) {
            801,
            (PO[]){{"P2", 5}, {"LA", 6}, {"P1", 10}, {"RK", 10}, {"FIZ", 10}, {"OIS", 9}},
            6,
        },
        (Student[]) {
            437,
            (PO[]){{"OIS", 10}, {"FIZ", 9}, {"ARS", 6}, {"OMA", 5}, {"DS", 10}, {"P1", 6}, {"ODV", 9}, {"LA", 9}},
            8,
        },
        (Student[]) {
            504,
            (PO[]){{"OMA", 5}},
            1,
        },
        (Student[]) {
            449,
            (PO[]){{"LA", 10}, {"ODV", 6}, {"OIS", 7}},
            3,
        },
        (Student[]) {
            405,
            (PO[]){{"OIS", 5}, {"OMA", 5}, {"P1", 10}, {"P2", 10}, {"DS", 8}, {"RK", 6}, {"FIZ", 6}, {"ARS", 6}},
            8,
        },
        (Student[]) {
            406,
            (PO[]){{"LA", 9}, {"DS", 8}, {"ODV", 10}},
            3,
        },
        (Student[]) {
            818,
            (PO[]){{"DS", 8}, {"OMA", 5}, {"P1", 9}, {"ODV", 8}, {"P2", 6}, {"OIS", 9}, {"ARS", 7}, {"LA", 9}, {"RK", 6}},
            9,
        },
        (Student[]) {
            837,
            (PO[]){{"OIS", 10}, {"LA", 6}, {"RK", 7}, {"OMA", 10}, {"DS", 10}, {"P2", 6}, {"ODV", 6}, {"P1", 6}, {"FIZ", 5}, {"ARS", 10}},
            10,
        },
        (Student[]) {
            745,
            (PO[]){{"LA", 9}, {"P2", 5}, {"DS", 9}, {"OIS", 6}},
            4,
        },
        (Student[]) {
            335,
            (PO[]){{"FIZ", 5}, {"OIS", 10}, {"P1", 9}, {"ARS", 8}},
            4,
        },
        (Student[]) {
            445,
            (PO[]){{"OIS", 8}, {"DS", 8}, {"LA", 9}, {"OMA", 6}, {"P2", 10}, {"FIZ", 9}, {"ODV", 8}},
            7,
        },
        (Student[]) {
            369,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            720,
            (PO[]){{"ODV", 10}, {"ARS", 7}, {"RK", 9}, {"OMA", 7}},
            4,
        },
        (Student[]) {
            190,
            (PO[]){{"DS", 9}, {"OIS", 8}, {"P1", 9}, {"OMA", 10}, {"ODV", 9}, {"ARS", 9}, {"FIZ", 9}, {"LA", 5}},
            8,
        },
        (Student[]) {
            856,
            (PO[]){{"P1", 8}, {"FIZ", 7}, {"ODV", 6}, {"ARS", 9}},
            4,
        },
        (Student[]) {
            813,
            (PO[]){{"ODV", 5}, {"OMA", 8}, {"OIS", 7}, {"RK", 10}, {"DS", 10}, {"LA", 10}},
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
