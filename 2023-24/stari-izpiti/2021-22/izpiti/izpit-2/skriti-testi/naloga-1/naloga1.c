#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E5

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "rb");

    unsigned char *buffer = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));
    size_t len = fread(buffer, sizeof(unsigned char), MAX_SIZE, input);

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        unsigned char byte = buffer[i];

        while (byte)
        {
            sum += byte & 1;
            byte >>= 1;
        }
    }

    printf("%d\n", sum);

    free(buffer);

    fclose(input);

    return 0;
}
