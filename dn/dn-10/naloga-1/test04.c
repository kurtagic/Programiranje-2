
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
            711,
            (PO[]){{"ODV", 5}, {"RK", 6}, {"OMA", 7}, {"OIS", 10}, {"FIZ", 8}, {"DS", 10}, {"P2", 6}, {"P1", 8}},
            8,
        },
        (Student[]) {
            730,
            (PO[]){{"RK", 9}, {"P1", 8}, {"P2", 10}, {"FIZ", 9}, {"ODV", 10}, {"ARS", 9}, {"OIS", 10}, {"LA", 10}, {"DS", 6}},
            9,
        },
        (Student[]) {
            602,
            (PO[]){{"P1", 8}, {"DS", 9}, {"OMA", 9}, {"P2", 8}, {"ODV", 8}},
            5,
        },
        (Student[]) {
            895,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            122,
            (PO[]){{"FIZ", 10}, {"OIS", 9}, {"ODV", 6}, {"DS", 10}, {"ARS", 6}, {"LA", 5}, {"OMA", 6}},
            7,
        },
        (Student[]) {
            930,
            (PO[]){{"DS", 5}, {"LA", 5}, {"OIS", 6}, {"OMA", 9}},
            4,
        },
        (Student[]) {
            885,
            (PO[]){{"ARS", 10}, {"P1", 5}, {"ODV", 5}, {"OMA", 6}, {"P2", 6}, {"DS", 9}, {"LA", 8}, {"RK", 6}, {"FIZ", 7}, {"OIS", 8}},
            10,
        },
        (Student[]) {
            294,
            (PO[]){{"LA", 8}, {"RK", 5}, {"P1", 6}, {"OIS", 7}, {"ODV", 6}, {"ARS", 7}},
            6,
        },
        (Student[]) {
            215,
            (PO[]){{"DS", 10}, {"ODV", 10}, {"FIZ", 6}, {"ARS", 5}, {"OIS", 7}},
            5,
        },
        (Student[]) {
            681,
            (PO[]){{"DS", 5}, {"ODV", 10}, {"OIS", 8}, {"P2", 6}, {"FIZ", 8}, {"OMA", 6}, {"RK", 5}, {"LA", 7}, {"ARS", 8}},
            9,
        },
        (Student[]) {
            950,
            (PO[]){{"ARS", 10}, {"DS", 5}, {"ODV", 9}, {"OIS", 5}},
            4,
        },
        (Student[]) {
            926,
            (PO[]){{"P1", 6}, {"ARS", 6}, {"FIZ", 8}},
            3,
        },
        (Student[]) {
            436,
            (PO[]){{"OMA", 7}, {"ODV", 5}},
            2,
        },
        (Student[]) {
            105,
            (PO[]){{"OMA", 7}, {"ARS", 5}, {"LA", 10}, {"FIZ", 10}, {"RK", 9}, {"ODV", 6}},
            6,
        },
        (Student[]) {
            467,
            (PO[]){{"ARS", 10}, {"ODV", 10}, {"RK", 5}, {"OMA", 5}, {"OIS", 7}, {"LA", 5}, {"DS", 7}, {"P2", 5}, {"P1", 6}},
            9,
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
