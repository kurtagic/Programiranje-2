#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 10E6 + 1

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    if (input == NULL)
    {
        return 0;
    }

    char *row = malloc(MAX_LENGTH * sizeof(char));
    char *maxRow = malloc(MAX_LENGTH * sizeof(char));

    int maxLength = -1;

    while (fgets(row, MAX_LENGTH, input) != NULL)
    {
        int len = strlen(row);
        if (len > maxLength)
        {
            maxLength = len;
            strcpy(maxRow, row);
        }
    }

    fprintf(output, "%s", maxRow);

    free(row);
    free(maxRow);
    fclose(input);
    fclose(output);

    return 0;
}
