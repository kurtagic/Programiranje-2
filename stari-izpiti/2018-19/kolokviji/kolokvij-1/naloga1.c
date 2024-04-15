#include <stdio.h>
#include <stdlib.h>

void fillArray(int *array, int n);
int *removeDuplicates(int *array, int n);
void mergeArrays(int *dest, int a, int *array1, int b, int *array2, int c);
void printArray(int *array, int n);

int compare(const void *elem1, const void *elem2)
{
    int f = *((int *)elem1);
    int s = *((int *)elem2);
    if (f > s)
        return 1;
    if (f < s)
        return -1;
    return 0;
}

int main()
{
    int m;
    scanf("%d", &m);
    int *zaporedje1 = (int *)malloc((m + 1) * sizeof(int));
    fillArray(zaporedje1, m);

    int n;
    scanf("%d", &n);
    int *zaporedje2 = (int *)malloc((n + 1) * sizeof(int));
    fillArray(zaporedje2, n);

    int size = m + n;
    int *zaporedje = (int *)malloc((size + 1) * sizeof(int));

    mergeArrays(zaporedje, size, zaporedje1, m, zaporedje2, n);

    qsort(zaporedje, size, sizeof(*zaporedje), compare);

    zaporedje = removeDuplicates(zaporedje, size);

    printArray(zaporedje, size);

    return 0;
}

void fillArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    array[n] = '\0';
}

int *removeDuplicates(int *array, int n)
{
    int duplicates = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] == array[i - 1])
        {
            duplicates++;
        }
    }

    int size = n - duplicates;
    int *cleanArray = (int *)malloc((size) * sizeof(int));

    int k = 0;
    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            cleanArray[k] = array[i];
            k++;
            continue;
        }

        if (array[i] == array[i - 1])
        {
            continue;
        }

        cleanArray[k] = array[i];
        k++;
    }

    cleanArray[size] = '\0';

    return cleanArray;
}

void mergeArrays(int *dest, int a, int *array1, int b, int *array2, int c)
{
    for (int i = 0; i < b; i++)
    {
        dest[i] = array1[i];
    }

    for (int i = 0; i < c; i++)
    {
        dest[b + i] = array2[i];
    }

    dest[a] = '\0';
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n && array[i] != '\0'; i++)
    {
        printf("%d\n", array[i]);
    }
}
