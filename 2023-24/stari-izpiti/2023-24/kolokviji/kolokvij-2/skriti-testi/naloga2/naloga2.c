#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 110

void split(char *string, char delimiter, char **tokens, int *tokensCount);
void copy(char *destination, char *source, int start, int end);

int getIndex(char **array, int n, char *string);

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int m = atoi(argv[3]);

    int wantedLen = argc - 4;

    char *entry = (char *)malloc(m * MAX_SIZE * sizeof(char));
    int *wantedIndexes = (int *)malloc(m * sizeof(int));

    char **tokens = (char **)malloc(m * sizeof(char *));
    for (int i = 0; i < m; i++)
    {
        tokens[i] = (char *)malloc(MAX_SIZE * sizeof(char *));
    }

    bool isHeader = true;
    while (fgets(entry, m * MAX_SIZE, input) != NULL)
    {
        int tokensCount = 0;
        entry[strlen(entry) - 1] = '\0';

        split(entry, ' ', tokens, &tokensCount);

        if (isHeader)
        {
            for (int i = 0; i < wantedLen; i++)
            {
                wantedIndexes[i] = getIndex(tokens, tokensCount, argv[i + 4]);
            }

            isHeader = false;
        }

        for (int i = 0; i < wantedLen; i++)
        {
            fprintf(output, "%s", tokens[wantedIndexes[i]]);
            fprintf(output, "%c", (i == wantedLen - 1) ? '\n' : ',');
        }
    }

    free(entry);
    free(wantedIndexes);

    for (int i = 0; i < m; i++)
    {
        free(tokens[i]);
    }

    free(tokens);

    fclose(input);
    fclose(output);

    return 0;
}

int getIndex(char **array, int n, char *string)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(array[i], string) == 0)
        {
            return i;
        }
    }

    return -1;
}

void split(char *string, char delimiter, char **tokens, int *tokensCount)
{
    int token = 0;
    int startIndex = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == delimiter)
        {
            copy(tokens[token++], string, startIndex, i);
            startIndex = i + 1;
        }
    }

    copy(tokens[token++], string, startIndex, strlen(string));
    *tokensCount = token;
}

void copy(char *destination, char *source, int start, int end)
{
    int size = end - start;

    strncpy(destination, source + start, size);

    destination[size] = '\0';
}
