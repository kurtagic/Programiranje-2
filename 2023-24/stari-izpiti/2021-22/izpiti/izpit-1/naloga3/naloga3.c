#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 50

void rekurz(char *niz, int d, int n, char *buffer, int index);
bool isValid(char *array, int n);

int main()
{
    int d;
    int n;
    char *niz = (char *)malloc((MAX_LEN + 1) * sizeof(char));
    scanf("%d %s %d", &d, niz, &n);

    char *buffer = (char *)malloc((n + 1) * sizeof(char));

    rekurz(niz, d, n, buffer, 0);

    free(niz);
    free(buffer);

    return 0;
}

void rekurz(char *niz, int d, int n, char *buffer, int index)
{
    if (index == n)
    {
        buffer[n] = '\0';

        if (!isValid(buffer, n))
        {
            return;
        }

        printf("%s\n", buffer);
        return;
    }

    for (int i = 0; i < d; i++)
    {
        buffer[index] = niz[i];
        rekurz(niz, d, n, buffer, index + 1);
    }
}

bool isValid(char *array, int n)
{
    bool isLowerCase = false;
    bool isUpperCase = false;
    bool isNumber = false;

    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            isLowerCase = true;
        }
        else if (array[i] >= 'A' && array[i] <= 'Z')
        {
            isUpperCase = true;
        }
        else if (array[i] >= '0' && array[i] <= '9')
        {
            isNumber = true;
        }

        if (isLowerCase && isUpperCase && isNumber)
        {
            return true;
        }
    }

    return false;
}
