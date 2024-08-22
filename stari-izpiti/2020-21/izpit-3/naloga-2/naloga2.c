#include <stdlib.h>
#include <string.h>

int length(char *array);

int N;
char **pretvori(char tabela[][N], int m)
{
    char **strings = (char **)(N * sizeof(char *));

    for (int i = 0; i < m; i++)
    {
        int len = length(tabela[i]);
        strings[i] = (char *)malloc((len + 1) * sizeof(char));
        strncpy(strings[i], tabela[i], len);
        strings[i][len] = '\0';
    }

    return strings;
}

int length(char *array)
{
    int len = 0;
    for (int i = 0; array[i] != 0; i++)
    {
        len++;
    }

    return len;
}

int main()
{
    return 0;
}
