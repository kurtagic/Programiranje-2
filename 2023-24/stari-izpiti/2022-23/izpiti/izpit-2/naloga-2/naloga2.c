#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 15
#define BARRIER '|'

void razbitja(char *buffer, int a, int b, int index, int count);
void putChar(char *array, char x, int n);
void removeChar(char *array, int n);

int main()
{
    char *niz = (char *)malloc((MAX_SIZE + 1) * sizeof(char));
    int a, b;

    scanf("%s %d %d", niz, &a, &b);

    char *buffer = (char *)malloc((MAX_SIZE + 1 + b) * sizeof(char));

    strcpy(buffer, niz);

    razbitja(buffer, a, b, 0, 1);

    free(niz);
    free(buffer);

    return 0;
}

void razbitja(char *buffer, int a, int b, int index, int segments)
{
    int len = strlen(buffer);

    if (index > len || segments > b)
    {
        return;
    }

    if (index == len && segments >= a)
    {
        printf("%s\n", buffer);

        return;
    }

    if (index != 0 && index != len && buffer[index - 1] != BARRIER)
    {
        putChar(buffer, BARRIER, index);
        razbitja(buffer, a, b, index + 1, segments + 1);
        removeChar(buffer, index);
    }

    razbitja(buffer, a, b, index + 1, segments);
}

void putChar(char *array, char x, int n)
{
    int len = strlen(array);

    for (int i = len; i >= n; i--)
    {
        array[i + 1] = array[i];
    }

    array[n] = x;
}

void removeChar(char *array, int n)
{
    int len = strlen(array);
    int j = 0;

    for (int i = 0; i < len; i++)
    {
        if (i != n)
        {
            array[j++] = array[i];
        }
    }

    array[j] = '\0';
}
