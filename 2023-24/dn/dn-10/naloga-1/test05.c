
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
            301,
            (PO[]){{"OIS", 5}, {"OMA", 6}, {"LA", 5}, {"P1", 10}, {"RK", 10}, {"FIZ", 10}, {"ARS", 8}, {"ODV", 6}, {"P2", 8}, {"DS", 7}},
            10,
        },
        (Student[]) {
            177,
            (PO[]){{"P2", 7}, {"P1", 7}, {"OMA", 6}, {"ARS", 9}, {"OIS", 7}, {"FIZ", 8}, {"RK", 8}},
            7,
        },
        (Student[]) {
            825,
            (PO[]){{"FIZ", 8}, {"OIS", 5}, {"OMA", 8}, {"LA", 9}, {"DS", 9}, {"ARS", 9}, {"ODV", 9}, {"P2", 5}, {"RK", 5}, {"P1", 8}},
            10,
        },
        (Student[]) {
            499,
            (PO[]){{"DS", 5}, {"OMA", 7}, {"P2", 9}, {"FIZ", 7}, {"RK", 8}, {"ARS", 9}, {"OIS", 6}, {"P1", 10}, {"ODV", 8}, {"LA", 9}},
            10,
        },
        (Student[]) {
            261,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            391,
            (PO[]){{"LA", 6}, {"ARS", 10}, {"ODV", 10}, {"RK", 6}},
            4,
        },
        (Student[]) {
            431,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            970,
            (PO[]){{"DS", 7}, {"P1", 6}, {"RK", 9}, {"P2", 8}, {"FIZ", 7}},
            5,
        },
        (Student[]) {
            138,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            750,
            (PO[]){{"OIS", 6}, {"ARS", 7}, {"DS", 8}, {"RK", 5}, {"P1", 5}, {"P2", 7}, {"ODV", 8}, {"OMA", 5}},
            8,
        },
        (Student[]) {
            734,
            (PO[]){{"P1", 9}, {"LA", 8}, {"OMA", 7}, {"RK", 5}, {"P2", 10}, {"ARS", 6}},
            6,
        },
        (Student[]) {
            749,
            (PO[]){{"P1", 7}, {"RK", 8}, {"P2", 6}, {"ARS", 9}, {"OMA", 6}, {"OIS", 7}, {"ODV", 10}, {"DS", 6}, {"FIZ", 8}, {"LA", 9}},
            10,
        },
        (Student[]) {
            745,
            (PO[]){{"DS", 7}, {"OIS", 5}},
            2,
        },
        (Student[]) {
            326,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            790,
            (PO[]){{"OIS", 10}, {"P1", 10}, {"P2", 8}, {"RK", 10}, {"DS", 8}, {"FIZ", 9}, {"OMA", 7}, {"LA", 5}, {"ARS", 10}},
            9,
        },
        (Student[]) {
            965,
            (PO[]){{"P2", 9}, {"P1", 7}, {"DS", 9}, {"FIZ", 8}, {"ARS", 8}},
            5,
        },
        (Student[]) {
            703,
            (PO[]){{"P1", 6}, {"ARS", 9}},
            2,
        },
        (Student[]) {
            292,
            (PO[]){{"DS", 8}, {"ODV", 9}},
            2,
        },
        (Student[]) {
            732,
            (PO[]){{"ARS", 7}, {"FIZ", 5}},
            2,
        },
        (Student[]) {
            961,
            (PO[]){{"LA", 6}, {"ARS", 5}, {"RK", 5}, {"OIS", 6}, {"P2", 9}},
            5,
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
