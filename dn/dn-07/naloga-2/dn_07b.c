#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E6 + 1

void rekurz(char **buffer, int n, char *tab, int index);

int main()
{
    int n;
    scanf("%d", &n);

    char **buffer = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        buffer[i] = (char *)malloc(MAX_SIZE * sizeof(char));
        scanf("%s", buffer[i]);
    }

    char *tab = (char *)malloc((n + 1) * sizeof(char));

    rekurz(buffer, n, tab, 0);

    // CLEANUP
    for (int i = 0; i < n; i++)
        free(buffer[i]);
    free(buffer);
    free(tab);

    return 0;
}

void rekurz(char **buffer, int n, char *tab, int index)
{
    if (index == n)
    {
        tab[index] = '\0';
        printf("%s\n", tab);
        return;
    }

    for (int i = 0; buffer[index][i] != '\0'; i++)
    {
        tab[index] = buffer[index][i];
        rekurz(buffer, n, tab, index + 1);
    }
}
