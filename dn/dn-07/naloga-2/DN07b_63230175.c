#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E6 + 1

void rekurzija(char **buffer, size_t n, char *tab, size_t index);

int main()
{
    size_t n;
    scanf("%zu", &n);

    char **buffer = (char **)malloc(n * sizeof(char *));
    for (size_t i = 0; i < n; i++)
    {
        buffer[i] = (char *)malloc(MAX_SIZE * sizeof(char));
        scanf("%s", buffer[i]);
    }

    char *tab = (char *)malloc((n + 1) * sizeof(char));

    rekurzija(buffer, n, tab, 0);

    for (size_t i = 0; i < n; i++)
    {
        free(buffer[i]);
    }

    free(buffer);
    free(tab);

    return 0;
}

void rekurzija(char **buffer, size_t n, char *tab, size_t index)
{
    if (index == n)
    {
        tab[index] = '\0';
        printf("%s\n", tab);

        return;
    }

    for (size_t i = 0; buffer[index][i] != '\0'; i++)
    {
        tab[index] = buffer[index][i];

        rekurzija(buffer, n, tab, index + 1);
    }
}
