#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E5

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    char *row = (char *)malloc(MAX_SIZE * sizeof(char));

    while (fgets(row, MAX_SIZE, input) != NULL)
    {
        bool isPrefix = true;
        for (int i = 0; row[i] != '\0'; i++)
        {
            if (isPrefix && row[i] == ' ')
            {
                continue;
            }

            fprintf(output, "%c", row[i]);
            isPrefix = false;
        }
    }

    return 0;
}
