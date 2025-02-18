#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10E3 + 1

int main(int argc, char **argv)
{
    char *imeDatoteke = (char *)malloc(MAX_SIZE * sizeof(char));
    fscanf("%s", imeDatoteke);
    FILE *input = fopen(imeDatoteke, "rb");

    unsigned char *buffer = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));

    size_t len = fread(buffer, sizeof(unsigned char), sizeof(long), input);

    printf(len == sizeof(long) ? "1" : "0");
    printf("\n");

    free(buffer);
    free(imeDatoteke);

    fclose(input);

    return 0;
}
