
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
            901,
            (PO[]){{"FIZ", 5}, {"OIS", 8}, {"OMA", 7}, {"RK", 9}, {"P1", 10}, {"LA", 5}, {"ODV", 8}, {"ARS", 10}},
            8,
        },
        (Student[]) {
            181,
            (PO[]){{"FIZ", 8}, {"P2", 7}, {"ARS", 6}},
            3,
        },
        (Student[]) {
            614,
            (PO[]){{"OMA", 5}, {"ODV", 5}, {"RK", 5}},
            3,
        },
        (Student[]) {
            931,
            (PO[]){{"OMA", 5}, {"P1", 5}},
            2,
        },
        (Student[]) {
            493,
            (PO[]){{"RK", 5}, {"OMA", 10}, {"LA", 8}, {"FIZ", 6}, {"OIS", 8}, {"ARS", 7}, {"P2", 5}, {"DS", 6}},
            8,
        },
        (Student[]) {
            939,
            (PO[]){{"DS", 10}, {"LA", 10}, {"P1", 10}, {"ARS", 5}, {"FIZ", 9}, {"ODV", 7}, {"P2", 6}, {"OMA", 7}},
            8,
        },
        (Student[]) {
            168,
            (PO[]){{"ODV", 10}, {"OMA", 10}, {"ARS", 9}, {"P2", 6}, {"DS", 6}, {"RK", 10}, {"OIS", 7}, {"FIZ", 9}, {"LA", 10}},
            9,
        },
        (Student[]) {
            920,
            (PO[]){{"ARS", 8}, {"LA", 8}},
            2,
        },
        (Student[]) {
            699,
            (PO[]){{"ARS", 7}, {"P2", 7}},
            2,
        },
        (Student[]) {
            952,
            (PO[]){{"P1", 6}, {"ARS", 7}, {"OMA", 7}, {"FIZ", 5}, {"OIS", 6}, {"P2", 9}, {"DS", 6}, {"ODV", 10}, {"RK", 7}},
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
