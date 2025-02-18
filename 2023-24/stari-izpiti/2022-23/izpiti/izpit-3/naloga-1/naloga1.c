#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E5

int main(int argc, char **argv)
{
    FILE *input_a = fopen(argv[1], "rb");
    FILE *input_b = fopen(argv[2], "rb");
    FILE *output = fopen(argv[3], "wb");

    unsigned char *buffer_a = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));
    unsigned char *buffer_b = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));

    size_t len_a = fread(buffer_a, sizeof(unsigned char), MAX_SIZE, input_a);
    size_t len_b = fread(buffer_b, sizeof(unsigned char), MAX_SIZE, input_b);

    size_t len_max = len_a;
    size_t len_min = len_b;
    unsigned char *buffer_max = buffer_a;

    if (len_a < len_b)
    {
        len_max = len_b;
        len_min = len_a;
        buffer_max = buffer_b;
    }

    for (int i = 0; i < len_min; i++)
    {
        unsigned char min_byte = buffer_a[i] > buffer_b[i] ? buffer_a[i] : buffer_b[i];
        fwrite(&min_byte, sizeof(unsigned char), 1, output);
    }

    fwrite(&buffer_max[len_min], sizeof(unsigned char), len_max - len_min, output);

    free(buffer_a);
    free(buffer_b);

    fclose(input_a);
    fclose(input_b);
    fclose(output);

    return 0;
}
