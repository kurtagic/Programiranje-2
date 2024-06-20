#include <stdio.h>
#include <stdlib.h>

char filename[20];

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "rb");
    int k = atoi(argv[2]);

    unsigned char *buffer = (unsigned char *)malloc(k * sizeof(unsigned char));

    for (int i = 0; i < k; i++)
    {
        int len = fread(buffer, sizeof(unsigned char), k, input);

        sprintf(filename, "datoteka.%d", i);
        FILE *output = fopen(filename, "wb");
        if (output == NULL)
        {
            printf("NEMORM!\n");
            return 1;
        }
        fwrite(buffer, sizeof(unsigned char), len, output);
        fclose(output);
    }

    free(buffer);

    fclose(input);

    return 0;
}
