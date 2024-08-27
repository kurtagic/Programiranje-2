
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 10E2
#define MAX_LENGTH (2 * 100 * 100) + 1

typedef struct Kraj Kraj;

struct Kraj
{
    char *ime;
    int starost;
};

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");
    char *column = argv[3];

    char *row = malloc(MAX_LENGTH * sizeof(char));

    while (fgets(row, MAX_LENGTH, input) != NULL)
    {
        printf("%s", row);
    }

    free(input);
    free(output);

    return 0;
}
