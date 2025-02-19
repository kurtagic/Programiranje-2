
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga1.h"

char *zdruzi(char **nizi, char *locilo)
{
    int words = 0;
    int letters = 0;

    for (int i = 0; nizi[i] != NULL; i++)
    {
        words++;
        for (int j = 0; nizi[i][j] != '\0'; j++)
        {
            letters++;
        }
    }

    int len = letters + (words - 1) * strlen(locilo);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    for (int i = 0; i < words; i++)
    {
        strcat(result, nizi[i]);

        if (i + 1 < words)
        {
            strcat(result, locilo);
        }
    }
    result[len] = '\0';

    return result;
}

#ifndef test
int main()
{
    return 0;
}
#endif
