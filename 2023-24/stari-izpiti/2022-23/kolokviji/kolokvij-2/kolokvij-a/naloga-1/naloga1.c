#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E5

bool isSumnik(char c);

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    char *row = (char *)malloc(MAX_SIZE * sizeof(char));

    while (fgets(row, MAX_SIZE, input) != NULL)
    {
        for (int i = 0; row[i] != '\0'; i++)
        {
            if (row[i] == '"' && isSumnik(row[i + 1]))
            {
                continue;
            }

            fprintf(output, "%c", row[i]);
        }
    }

    return 0;
}

bool isSumnik(char c)
{
    c = tolower(c);
    return c == 'c' || c == 's' || c == 'z';
}
