#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E5

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "rb");
    FILE *output = fopen(argv[2], "wb");

    unsigned char *buffer = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));
    size_t len = fread(buffer, sizeof(unsigned char), MAX_SIZE, input);

    for (int i = 0; i < len; i++)
    {
        unsigned char current = buffer[i];

        if (i < len - 1 && current == 0x1B && buffer[i + 1] == 0xC9)
        {
            fwrite(&buffer[i + 1], sizeof(unsigned char), 1, output);
            i++;

            continue;
        }

        fwrite(&current, sizeof(unsigned char), 1, output);
    }

    free(buffer);

    fclose(input);
    fclose(output);

    return 0;
}
