#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1010

void removeLeadingWhitespaces(char *trimmed);
int indent(char *string, int z);
int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    char *buffer = malloc(MAX_LENGTH * sizeof(char *));
    int z = 0;
    int next_z = 0;

    while (fgets(buffer, MAX_LENGTH, input))
    {
        removeLeadingWhitespaces(buffer);

        z = indent(buffer, z);

        fprintf(output, "%*s%s", z, "", buffer);

        char end = buffer[strlen(buffer) - 2];

        z = end == '{' ? z + 4 : z;
    }

    // CLEANUP
    fclose(input);
    fclose(output);

    free(buffer);

    return 0;
}

void removeLeadingWhitespaces(char *original)
{
    int offset = 0;
    while (original[offset] == ' ')
    {
        offset++;
    }

    if (offset > 0)
    {
        memmove(original, original + offset, strlen(original) - offset + 1);
    }
}

int indent(char *line, int z)
{
    char start = line[0];
    char end = line[strlen(line) - 2];

    if (start == '}' || end == '}')
    {
        z = z > 4 ? z - 4 : 0;
    }

    if (start == '{' && end == '}')
    {
        z += 4;
    }

    return z;
}
