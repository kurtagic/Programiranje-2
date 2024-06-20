#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 10E3
#define MAX_CHARS 10E3
#define MAX_CHARS_FILENAME 20

int main(int argc, char **argv)
{
    FILE *test_input = fopen(argv[1], "r");

    char znak;

    char *filename_input = (char *)malloc((MAX_CHARS_FILENAME + 1) * sizeof(char));
    char *filename_output = (char *)malloc((MAX_CHARS_FILENAME + 1) * sizeof(char));

    char *max_row = (char *)malloc((MAX_CHARS + 1) * sizeof(char));
    char *row = (char *)malloc((MAX_CHARS + 1) * sizeof(char));

    fscanf(test_input, "%s %s %c", filename_input, filename_output, &znak);

    FILE *input = fopen(filename_input, "r");
    FILE *output = fopen(filename_output, "w");

    while (fgets(row, MAX_CHARS, input) != NULL)
    {
        if (strchr(row, znak) == NULL)
        {
            continue;
        }

        if (strlen(row) >= strlen(max_row))
        {
            strcpy(max_row, row);
        }
    }

    fprintf(output, "%s", max_row);

    free(filename_output);
    free(filename_input);
    free(row);
    free(max_row);

    fclose(test_input);
    fclose(input);
    fclose(output);

    return 0;
}
