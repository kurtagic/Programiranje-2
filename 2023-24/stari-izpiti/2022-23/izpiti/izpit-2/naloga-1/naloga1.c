#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E5

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "rb");
    FILE *output = fopen(argv[2], "wb");

    unsigned char *buffer = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));

    size_t len = fread(buffer, sizeof(unsigned char), MAX_SIZE, input);
    printf("%lu\n", len);

    for (int i = 0; i < len - 1; i++)
    {
        if (buffer[i] != buffer[i + 1])
        {
            fwrite(&buffer[i], 1, sizeof(unsigned char), output);
        }
    }

    if (len > 0 || buffer[len - 1] != buffer[len])
    {
        fwrite(&buffer[len - 1], 1, sizeof(unsigned char), output);
    }

    free(buffer);

    fclose(input);
    fclose(output);

    return 0;
}
