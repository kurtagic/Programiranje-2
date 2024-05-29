
// ./preveri <vhod> <referencni_izhod> <dejanski_izhod>

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define M 50

bool prazna(char* vrstica) {
    char* p = vrstica;
    while (*p != '\0') {
        if (*p != ' ' && *p != '\n') {
            return false;
        }
        p++;
    }
    return true;
}

//
// Preveri leksikalno sestavo vrstice ("stevke, natanko ena po"sevnica).
//
bool preveriVrstico(char* vrstica) {
    char* p = vrstica;
    int stPosevnic = 0;
    bool presledek = false;
    while (*p != '\0') {
        if (*p == ' ') {
            presledek = true;
        }
        if (presledek && *p != ' ' && *p != '\n') {
            return false;
        }
        if (!isdigit(*p) && *p != '\n' && *p != '/' && *p != ' ') {
            return false;
        }
        stPosevnic += (*p == '/');
        p++;
    }
    return stPosevnic == 1;
}

int main(int argc, char** argv) {
    // vhod (da pridobimo velikost "sahovnice in ovire)
    FILE* f = fopen(argv[1], "rt");

    int n = 0, stOvir = 0;
    fscanf(f, "%d%d", &n, &stOvir);

    bool* zasedeno = calloc(n * n, sizeof(int));
    for (int i = 0; i < stOvir; i++) {
        int vr = 0, st = 0;
        fscanf(f, "%d%d", &vr, &st);
        zasedeno[vr * n + st] = true;
    }
    fclose(f);

    // referen"cni izhod (da pridobimo referen"cno dol"zino najdalj"se poti)
    f = fopen(argv[2], "rt");
    int c = 0;
    int refDolzina = 0;
    while ((c = fgetc(f)) != EOF) {
        if (c == '/') {
            refDolzina++;
        }
    }
    fclose(f);

    // dejanski izhod
    f = fopen(argv[3], "rt");

    int dejanskaDolzina = 0;
    bool ok = true;

    int vrPrej = -1;
    int stPrej = -1;

    char* vrstica = calloc(M, sizeof(char));
    while (ok && fgets(vrstica, M - 1, f) != NULL) {
        if (prazna(vrstica)) {
            continue;
        }
        if (!preveriVrstico(vrstica)) {
            ok = false;
            break;
        }

        *strchr(vrstica, '\n') = '\0';
        char* p = strchr(vrstica, '/');
        *p = 0;
        int vr = atoi(vrstica);
        int st = atoi(p + 1);

        if (vr < 0 || vr >= n || st < 0 || st >= n) {
            ok = false;
            break;
        }
        if (vrPrej >= 0 && abs(vr - vrPrej) * abs(st - stPrej) != 2) {
            ok = false;
            break;
        }

        int polje = n * vr + st;
        if (zasedeno[polje]) {
            ok = false;
            break;
        }
        zasedeno[polje] = true;

        dejanskaDolzina++;
        if (dejanskaDolzina > refDolzina) {
            ok = false;
            break;
        }
        vrPrej = vr;
        stPrej = st;
    }

    fclose(f);
    free(vrstica);
    free(zasedeno);

    return (ok && dejanskaDolzina == refDolzina) ? 0 : 1;
}
