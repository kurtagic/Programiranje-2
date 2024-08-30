#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TOKENS 100
#define MAX_TOKEN_LENGTH 200
#define MAX_ROWS 100
#define MAX_ROW_LENGTH (MAX_TOKENS * MAX_TOKEN_LENGTH)
#define UNSET -1

typedef struct Entry Entry;

struct Entry
{
    char name[MAX_TOKEN_LENGTH];
    int sum;
    int count;
};

void tokenise(char **tokens, char *row, int *len);
void setParameters(char **tokens, int len, int *c_index, char *c_name, int *s_index);
void updateEntries(Entry **entries, int *n, char *name, int starost);
void printResults(FILE *file, Entry **entries, int n);

int main(int argc, char **argv)
{
    // PROGRAM ARGUMENTS
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");
    char *c_name = argv[3];

    // MEMORY ALLOCATION
    char *row = malloc(MAX_ROW_LENGTH * sizeof(char));

    char **tokens = malloc(MAX_TOKENS * sizeof(char *));
    for (int i = 0; i < MAX_TOKENS; i++)
        tokens[i] = malloc(MAX_TOKEN_LENGTH * sizeof(char));

    Entry **entries = malloc(MAX_ROWS * sizeof(Entry *));
    for (int i = 0; i < MAX_ROWS; i++)
    {
        entries[i] = malloc(sizeof(Entry));
        entries[i]->name[0] = '\0';
        entries[i]->sum = 0;
        entries[i]->count = 0;
    }

    // VARIABLES
    bool is_header = true;
    int c_index = UNSET;
    int s_index = UNSET;
    int n = 0;

    while (fgets(row, MAX_ROW_LENGTH, input) != NULL)
    {
        int len;
        tokenise(tokens, row, &len);

        if (is_header)
        {
            setParameters(tokens, len, &c_index, c_name, &s_index);
            is_header = false;
            continue;
        }

        char *name = tokens[c_index];
        int starost = atoi(tokens[s_index]);
        updateEntries(entries, &n, name, starost);
    }

    printResults(output, entries, n);

    // CLEAN UP
    fclose(input);
    fclose(output);

    free(row);

    for (int i = 0; i < MAX_TOKENS; i++)
        free(tokens[i]);
    free(tokens);

    for (int i = 0; i < MAX_ROWS; i++)
        free(entries[i]);
    free(entries);

    return 0;
}

void tokenise(char **tokens, char *row, int *len)
{
    *len = 0;
    char *token = strtok(row, " \n");

    while (token != NULL)
    {
        strcpy(tokens[(*len)++], token);
        token = strtok(NULL, " \n");
    }
}

void setParameters(char **tokens, int len, int *c_index, char *c_name, int *s_index)
{
    for (int i = 0; i < len; i++)
    {
        char *token = tokens[i];

        if (strcmp(token, c_name) == 0)
        {
            *c_index = i;
        }
        if (strcmp(token, "starost") == 0)
        {
            *s_index = i;
        }
        if (*c_index != UNSET && *s_index != UNSET)
        {
            break;
        }
    }
}

void updateEntries(Entry **entries, int *n, char *name, int starost)
{
    for (int i = 0; i < *n; i++)
    {
        if (strcmp(entries[i]->name, name) == 0)
        {
            entries[i]->sum += starost;
            entries[i]->count++;

            return;
        }
    }

    // add new entry
    Entry *entry = entries[(*n)++];
    strcpy(entry->name, name);
    entry->sum = starost;
    entry->count = 1;
}

void printResults(FILE *file, Entry **entries, int n)
{
    for (int i = 0; i < n; i++)
    {
        Entry *entry = entries[i];
        int average = entry->sum / entry->count;

        fprintf(file, "%s,%d\n", entry->name, average);
    }
}
