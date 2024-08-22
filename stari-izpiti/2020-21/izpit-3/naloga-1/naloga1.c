#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    char *buffer = (char *)malloc(MAX_SIZE * sizeof(char));

    int next = 1;

    for (int i = 1; fgets(buffer, MAX_SIZE, input) != NULL; i++)
    {
        if (i != next)
        {
            continue;
        }

        next += atoi(buffer);

        fprintf(output, "%s", buffer);
    }

    fclose(input);
    fclose(output);

    free(buffer);

    return 0;
}
