#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 50
#define LIMIT 3

void rekurz(char *niz, int d, int n, char *buffer, int index, int *counter);

int main()
{
    int d;
    int n;
    char *niz = (char *)malloc((MAX_LEN + 1) * sizeof(char));

    scanf("%d %s %d", &d, niz, &n);

    char *buffer = (char *)malloc((n + 1) * sizeof(char));

    int *counter = (int *)malloc(d * sizeof(int));
    for (int i = 0; i < d; i++)
    {
        counter[i] = 0;
    }

    rekurz(niz, d, n, buffer, 0, counter);

    free(niz);
    free(buffer);
    free(counter);

    return 0;
}

void rekurz(char *niz, int d, int n, char *buffer, int index, int *counter)
{
    if (index == n)
    {
        buffer[n] = '\0';
        printf("%s\n", buffer);
        return;
    }

    for (int i = 0; i < d; i++)
    {
        if (counter[i] >= LIMIT)
        {
            continue;
        }

        buffer[index] = niz[i];

        counter[i]++;
        rekurz(niz, d, n, buffer, index + 1, counter);
        counter[i]--;
    }
}
