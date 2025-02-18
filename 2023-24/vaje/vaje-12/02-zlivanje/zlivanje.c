#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void bufferSetup(FILE **files, int *buffer, int n, char *filename);
int getIndexOfMinValue(int *array, int n);

#define MAX_NAME 100

int main()
{
    int n;
    scanf("%d", &n);

    FILE **files = (FILE **)malloc(n * sizeof(FILE *));
    int *buffer = (int *)malloc(n * sizeof(int));
    char *filename = (char *)malloc((MAX_NAME + 1) * sizeof(char));

    bufferSetup(files, buffer, n, filename);

    scanf("%s", filename);
    FILE *output = fopen(filename, "w");

    while (true)
    {
        int minIndex = getIndexOfMinValue(buffer, n);

        if (minIndex == -1)
        {
            break;
        }

        fprintf(output, "%d\n", buffer[minIndex]);
        if (fscanf(files[minIndex], "%d", &buffer[minIndex]) != 1)
        {
            buffer[minIndex] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        fclose(files[i]);
    }

    free(files);
    free(buffer);
    free(filename);

    fclose(output);

    return 0;
}

void bufferSetup(FILE **files, int *buffer, int n, char *filename)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s", filename);
        files[i] = fopen(filename, "r");

        if (files[i] == NULL)
        {
            return;
        }

        if (fscanf(files[i], "%d", &buffer[i]) != 1)
        {
            buffer[i] = -1;
        }
    }
}

int getIndexOfMinValue(int *array, int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == -1)
        {
            continue;
        }

        if (index == -1 || array[i] < array[index])
        {
            index = i;
        }
    }

    return index;
}
