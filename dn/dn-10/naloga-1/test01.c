
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
            111,
            (PO[]){{"FIZ", 10}, {"P1", 5}, {"P2", 8}, {"ODV", 9}, {"ARS", 6}},
            5
        },
    };
    int stStudentov = sizeof(studentje) / sizeof(studentje[0]);

    izvedi(studentje, stStudentov, "FIZ");
    izvedi(studentje, stStudentov, "P1");
    izvedi(studentje, stStudentov, "P2");
    izvedi(studentje, stStudentov, "ODV");
    izvedi(studentje, stStudentov, "ARS");
    izvedi(studentje, stStudentov, "OMA");

    return 0;
}
