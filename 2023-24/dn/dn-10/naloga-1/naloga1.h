
#ifndef _NALOGA1_H
#define _NALOGA1_H

typedef struct _PO {   // par predmet-ocena
    char predmet[4];   // oznaka predmeta
    int ocena;         // ocena pri tem predmetu
} PO;

typedef struct _Student {   // podatki o "studentu
    int vpisna;   // vpisna "stevilka
    PO* po;       // kazalec na za"cetek tabele parov predmet-ocena
    int stPO;     // "stevilo parov predmet-ocena
} Student;

typedef struct _VO {   // par vpisna-ocena
    int vpisna;
    int ocena;
} VO;

VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO);

#endif
