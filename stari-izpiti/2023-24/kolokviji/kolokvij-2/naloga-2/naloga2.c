#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 110

void split(char **words, char *entry);

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int m = atoi(argv[3]);

    int wantedColumsLen = argc - 4;
    char **wantedColumsNames = (char **)malloc(wantedColumsLen * sizeof(char *));
    for (int i = 0; i < wantedColumsLen; i++)
    {
        wantedColumsNames[i] = argv[i + 4];
    }

    char ***data = (char ***)malloc(MAX_SIZE * sizeof(char **));
    for (int i = 0; i < MAX_SIZE; i++)
    {
        data[i] = (char **)malloc(MAX_SIZE * sizeof(char *));
        for (int j = 0; j < MAX_SIZE; j++)
        {
            data[i][j] = (char *)malloc(MAX_SIZE * sizeof(char));
        }
    }

    char *entry = (char *)malloc(m * MAX_SIZE * sizeof(char));

    bool isHeader = true;
    for (int i = 0; fgets(entry, m * MAX_SIZE, input) != NULL; i++)
    {
        char **words = (char **)malloc(m * sizeof(char *));
        split(data[i], entry);
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%s ", data[i][j]);
        }

        printf("\n");
    }

    return 0;
}

void split(char **words, char *entry)
{
    entry[strlen(entry) - 1] = '\0';
    char *pch = strtok(entry, " ");

    for (int i = 0; pch != NULL; i++)
    {
        words[i] = pch;
        pch = strtok(NULL, " ");
    }
}
