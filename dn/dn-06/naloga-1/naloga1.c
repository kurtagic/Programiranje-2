#include <stdlib.h>
#include <string.h>

#include "naloga1.h"

size_t get_result_size(char** nizi, char* locilo);

char *zdruzi(char **nizi, char *locilo)
{
    size_t length = get_result_size(nizi, locilo);
    
    char *result = (char *)malloc((length + 1) * sizeof(char));

    for (size_t i = 0; nizi[i] != NULL; i++) 
    {
        if (i > 0) 
        {
            strcat(result, locilo);
        }

        strcat(result, nizi[i]);
    }

    result[length] = '\0';

    return result;
}

// dolzina je skupna dolzina vseh nizov (letters) + skupna dolzina vseh locil
// locil bo vedno eno manj, kot je nizov
size_t get_result_size(char** nizi, char* locilo)
{
    size_t words = 0;
    size_t letters = 0;

    for (size_t i = 0; nizi[i] != NULL; i++)
    {
        words++;
        letters += strlen(nizi[i]);
    }

    size_t len = letters + (words - 1) * strlen(locilo);

    return len;
}

#ifndef test
int main()
{
    return 0;
}
#endif
