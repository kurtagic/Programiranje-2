#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 110

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");
    int m = atoi(argv[3]);

    int wantedColumnsLen = argc - 4;

    int *wantedColumnsIndex = (int *)malloc(wantedColumnsLen * sizeof(int));
    char *row = (char *)malloc(m * MAX_CHARS * sizeof(char));
    char **tokens = (char **)malloc(m * sizeof(char *));
    for (int i = 0; i < m; i++)
        tokens[i] = (char *)malloc(MAX_CHARS * sizeof(char));

    bool isHeader = true;
    while (fgets(row, m * MAX_CHARS, input) != NULL)
    {
        row[strlen(row) - 1] = '\0';

        char *str = strtok(row, " ");
        for (int i = 0; str != NULL; i++)
        {
            strcpy(tokens[i], str);
            str = strtok(NULL, " ");
        }

        if (isHeader)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < wantedColumnsLen; j++)
                {
                    if (strcmp(tokens[i], argv[j + 4]) == 0)
                    {
                        wantedColumnsIndex[j] = i;
                    }
                }
            }

            isHeader = false;
        }

        for (int i = 0; i < wantedColumnsLen; i++)
        {
            fprintf(output, "%s", tokens[wantedColumnsIndex[i]]);
            fprintf(output, "%c", (i == wantedColumnsLen - 1) ? '\n' : ',');
        }
    }

    // CLEANUP
    free(wantedColumnsIndex);
    free(row);
    for (int i = 0; i < m; i++)
        free(tokens[i]);
    free(tokens);

    fclose(input);
    fclose(output);

    return 0;
}
