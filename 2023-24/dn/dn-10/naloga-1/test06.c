
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
            913,
            (PO[]){{"OMA", 6}, {"LA", 5}, {"P1", 5}, {"ODV", 5}, {"RK", 8}, {"FIZ", 10}, {"ARS", 10}, {"OIS", 10}, {"P2", 5}, {"DS", 7}},
            10,
        },
        (Student[]) {
            299,
            (PO[]){{"LA", 8}, {"OIS", 8}},
            2,
        },
        (Student[]) {
            881,
            (PO[]){{"P2", 6}, {"OMA", 6}, {"FIZ", 9}},
            3,
        },
        (Student[]) {
            812,
            (PO[]){{"ODV", 8}, {"FIZ", 6}, {"ARS", 7}, {"OIS", 9}, {"P2", 10}, {"P1", 10}},
            6,
        },
        (Student[]) {
            651,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            470,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            671,
            (PO[]){{"DS", 7}, {"FIZ", 9}, {"LA", 7}, {"ODV", 10}, {"OIS", 8}, {"P1", 7}, {"RK", 9}, {"ARS", 8}, {"OMA", 10}, {"P2", 8}},
            10,
        },
        (Student[]) {
            300,
            (PO[]){{"P2", 7}},
            1,
        },
        (Student[]) {
            983,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            576,
            (PO[]){{"ARS", 6}, {"P2", 8}, {"OIS", 10}, {"FIZ", 5}},
            4,
        },
        (Student[]) {
            775,
            (PO[]){{"ARS", 6}, {"P1", 8}},
            2,
        },
        (Student[]) {
            823,
            (PO[]){{"FIZ", 5}, {"ODV", 10}, {"OIS", 7}, {"LA", 5}, {"OMA", 9}, {"P1", 10}, {"DS", 9}, {"ARS", 7}, {"P2", 6}},
            9,
        },
        (Student[]) {
            571,
            (PO[]){{"DS", 10}, {"ODV", 7}, {"ARS", 10}, {"RK", 8}, {"FIZ", 7}, {"P1", 7}, {"LA", 5}, {"OIS", 8}},
            8,
        },
        (Student[]) {
            492,
            (PO[]){{"DS", 5}, {"LA", 8}, {"OIS", 7}, {"ODV", 5}, {"P1", 9}, {"ARS", 7}, {"OMA", 7}, {"FIZ", 9}, {"RK", 5}},
            9,
        },
        (Student[]) {
            910,
            (PO[]){{"ODV", 10}, {"FIZ", 9}, {"OMA", 7}, {"OIS", 7}, {"RK", 10}, {"ARS", 10}, {"DS", 5}, {"P1", 9}, {"P2", 7}},
            9,
        },
        (Student[]) {
            846,
            (PO[]){{"DS", 9}, {"OMA", 7}, {"FIZ", 5}, {"RK", 5}, {"ARS", 9}},
            5,
        },
        (Student[]) {
            907,
            (PO[]){{"OIS", 7}, {"ARS", 6}, {"P2", 5}, {"RK", 9}, {"P1", 5}, {"LA", 9}, {"OMA", 10}, {"ODV", 7}},
            8,
        },
        (Student[]) {
            112,
            (PO[]){{"ODV", 5}},
            1,
        },
        (Student[]) {
            339,
            (PO[]){{"P2", 5}, {"DS", 8}, {"OIS", 7}, {"LA", 6}, {"OMA", 7}},
            5,
        },
        (Student[]) {
            640,
            (PO[]){{"DS", 6}, {"FIZ", 7}, {"ODV", 10}, {"OIS", 10}, {"OMA", 5}},
            5,
        },
        (Student[]) {
            345,
            (PO[]){{"P1", 7}, {"OMA", 10}, {"P2", 10}, {"ARS", 7}, {"LA", 10}, {"OIS", 5}, {"RK", 7}, {"FIZ", 7}, {"DS", 10}, {"ODV", 9}},
            10,
        },
        (Student[]) {
            399,
            (PO[]){{"LA", 6}, {"DS", 8}, {"P1", 7}, {"ARS", 5}},
            4,
        },
        (Student[]) {
            654,
            (PO[]){{"P2", 10}, {"OMA", 6}},
            2,
        },
        (Student[]) {
            277,
            (PO[]){{"P1", 9}, {"FIZ", 9}, {"P2", 5}, {"LA", 7}, {"ARS", 8}, {"DS", 5}, {"ODV", 7}, {"RK", 5}},
            8,
        },
        (Student[]) {
            578,
            (PO[]){{"ODV", 9}, {"P2", 10}},
            2,
        },
        (Student[]) {
            131,
            (PO[]){{"OIS", 8}, {"DS", 9}, {"OMA", 10}, {"P2", 5}, {"LA", 8}, {"P1", 10}, {"ODV", 6}, {"RK", 5}, {"ARS", 6}, {"FIZ", 6}},
            10,
        },
        (Student[]) {
            245,
            (PO[]){{"LA", 5}, {"OIS", 8}, {"ARS", 8}, {"OMA", 7}},
            4,
        },
        (Student[]) {
            613,
            (PO[]){{"OMA", 6}, {"DS", 7}, {"RK", 7}, {"ARS", 5}},
            4,
        },
        (Student[]) {
            581,
            (PO[]){{"LA", 10}, {"P1", 5}, {"OIS", 10}, {"P2", 9}, {"RK", 7}},
            5,
        },
        (Student[]) {
            181,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            351,
            (PO[]){{"P1", 5}, {"OMA", 9}, {"LA", 5}, {"P2", 9}, {"ARS", 9}, {"OIS", 5}, {"RK", 6}, {"DS", 5}, {"ODV", 6}, {"FIZ", 7}},
            10,
        },
        (Student[]) {
            328,
            (PO[]){{"RK", 5}, {"OIS", 5}, {"ARS", 6}, {"LA", 10}},
            4,
        },
        (Student[]) {
            770,
            (PO[]){{"P1", 9}, {"FIZ", 7}, {"ODV", 8}, {"LA", 5}, {"OMA", 6}, {"RK", 9}, {"DS", 8}},
            7,
        },
        (Student[]) {
            322,
            (PO[]){{"", 0}},
            0,
        },
        (Student[]) {
            381,
            (PO[]){{"LA", 6}, {"P1", 8}, {"OMA", 7}, {"OIS", 5}, {"ODV", 7}, {"P2", 7}, {"RK", 9}, {"FIZ", 6}, {"ARS", 7}},
            9,
        },
        (Student[]) {
            851,
            (PO[]){{"LA", 6}, {"ARS", 8}},
            2,
        },
        (Student[]) {
            641,
            (PO[]){{"ODV", 6}, {"OMA", 5}, {"DS", 8}, {"ARS", 8}},
            4,
        },
        (Student[]) {
            883,
            (PO[]){{"P2", 10}, {"OIS", 5}, {"ARS", 5}},
            3,
        },
        (Student[]) {
            156,
            (PO[]){{"ARS", 10}, {"DS", 9}, {"FIZ", 10}},
            3,
        },
        (Student[]) {
            626,
            (PO[]){{"P2", 10}, {"ARS", 6}, {"ODV", 8}, {"LA", 8}, {"OIS", 9}},
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
