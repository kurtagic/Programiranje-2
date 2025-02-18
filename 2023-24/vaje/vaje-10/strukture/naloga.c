#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student **studentje, int stStudentov, int vpisna)
{
    for (int i = 0; i < stStudentov; i++)
    {
        if (studentje[i]->vpisna == vpisna)
        {
            return i;
        }
    }

    return -1;
}

int poisciPO(Student *student, char *predmet)
{
    for (int i = 0; i < student->stPO; i++)
    {
        if (strcmp(student->po[i].predmet, predmet) == 0)
        {
            return i;
        }
    }

    return -1;
}

int dodaj(Student **studentje, int stStudentov, int vpisna, char *predmet, int ocena)
{
    int studentIndex = poisciStudenta(studentje, stStudentov, vpisna);

    if (studentIndex < 0)
    {
        Student *student = (Student *)malloc(sizeof(Student));

        student->vpisna = vpisna;
        student->po = (PO *)(malloc)(10 * sizeof(PO));
        student->stPO = 1;

        strcpy(student->po[0].predmet, predmet);
        student->po[0].ocena = ocena;

        studentje[stStudentov] = student;

        return stStudentov + 1;
    }

    Student *student = studentje[studentIndex];
    int predmetIndex = poisciPO(student, predmet);

    if (predmetIndex < 0)
    {
        predmetIndex = student->stPO;
        strcpy(student->po[predmetIndex].predmet, predmet);
        student->po[predmetIndex].ocena = ocena;
        student->stPO++;

        return stStudentov;
    }

    student->po[predmetIndex].ocena = ocena;

    return stStudentov;
}

#ifndef test

int main()
{
    return 0;
}

#endif
