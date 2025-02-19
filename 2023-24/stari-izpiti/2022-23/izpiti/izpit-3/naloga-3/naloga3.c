#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 200 + 1

int maxCharIndex(char *array, int n);
void rekurz(char *besedilo, char *array, int n, int index);
void copyRight(char *dest, char *src, int n, int offset);
void printOffset(int n);

int main()
{
    char *besedilo = (char *)malloc(MAX_SIZE * sizeof(char));
    scanf("%s", besedilo);

    int n = 0;
    for (int i = 0; besedilo[i] != '\0'; i++)
    {
        n++;
    }

    rekurz(besedilo, besedilo, n, 0);

    free(besedilo);

    return 0;
}

void rekurz(char *besedilo, char *array, int n, int index)
{
    if (array[0] == '\0' || n < 1)
    {
        return;
    }

    if (n == 1)
    {
        printOffset(index);
        printf("%c\n", array[0]);
        return;
    }

    int m = maxCharIndex(array, n);
    char c = array[m];

    int levo_len = m;
    char *levo = (char *)malloc((levo_len + 1) * sizeof(char));
    strncpy(levo, array, m);

    int desno_len = n - m - 1;
    char *desno = (char *)malloc((desno_len + 1) * sizeof(char));
    copyRight(desno, array, n, m + 1);

    printOffset(index);
    printf("%s\n", array);

    rekurz(besedilo, levo, levo_len, index);

    printOffset(index + levo_len);
    printf("%c\n", c);

    rekurz(besedilo, desno, desno_len, index + levo_len + 1);
}

int maxCharIndex(char *array, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > array[max])
        {
            max = i;
        }
    }

    return max;
}

void copyRight(char *dest, char *src, int n, int offset)
{
    int k = 0;
    for (int i = offset; i < n; i++)
    {
        dest[k++] = src[i];
    }
}

void printOffset(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
