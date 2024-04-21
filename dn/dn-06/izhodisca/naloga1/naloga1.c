#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga1.h"

char *zdruzi(char **nizi, char *locilo)
{
    int letters = 0;
    int words = 0;
    for (int i = 0; nizi[i] != NULL; i++)
    {
        words++;
        for (int j = 0; nizi[i][j] != '\0'; i++)
        {
            letters++;
        }
    }

    int commasAndWhitespaces = (words - 1) * 2;
    int len = letters + commasAndWhitespaces;
    char *res = (char *)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++)
    {
        char char = nizi[]
    }

    res[len] = '\0';

    return res;
}

#ifndef test
int main()
{
    return 0;
}
#endif
