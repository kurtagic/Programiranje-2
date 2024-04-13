
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "qhyCb36810vTwD4AbqqQoXsTDdWj",
    "ZWrq9RqWg4mkt",
    "6V_zXt9QNHCBTBFwc78CqMn5FKtanc_vx4XwT4wbZqpWyFmD21VeBMZifXL7kdG1HgRFz4odYlxPhDY0S9PizmiZRrKsdK",
    "AgVM85nDZQDzdzMn5BA3MoKG7nYV",
    "f8aRwMEuJS2t2HaPeCXPZ2pp_xeGgUMwHHfnjLYuVBochiEad0qgzQAAc0OZTti8LgVIEEuss6",
    "abVFPXY_T5AjEBghOEISmkvASoNUTnWQc5KqSVww83Y2GgHeD4EnNE",
    "lUQBfAlceJU_YUG1cYdm9b",
    "yyrSlAauQq32Uf01lCHHPVBRs7qdzdjYCXD7",
    "qXulcl7Fxx",
    "x8v0psugMcbj_SJuaS2hpOz3Est2rll0IANo9DndO4uLUuQohJ9fC",
    "OsRj1VrFVvAsh5HS9Q0t7VpvTp4D3VERvnwqDSHe4P_Db4eC0d3KnUAZ",
    "qfTEx6SkslS0p1RXv1Ww3y7oiCpqnNCi8",
    "t1sxOmUH7SqoH1NTxGfDK5hENbiWSvsNcqlG8aOI",
    "94lp25wV3",
    "_hNKsnPxm",
    "OzEMyjrO7_ANKSdI4jOUjla0FtexeOSFShA323Xh5m1QeHrkPQgFRHGvj6_6Mu0sKW5AWg6cMd",
    "2KM6HUCBSB",
    "juxcfemvfxancWL",
    "cvXz5VAqw4VXYKT6JU",
    "JrT5Ph_66ds77tKYNMOaisOeq82Paflv",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 920);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
