#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "rb");
    int vrstica = atoi(argv[2]);
    int stolpec = atoi(argv[3]);

    char *string = (char *)malloc(10 * sizeof(char));

    fgets(string, 10, input);

    int width, height;

    fscanf(input, "%d %d", &width, &height);

    fgets(string, 10, input);

    fgets(string, 10, input);

    int size = 3 * width * height;

    unsigned char *binary = (unsigned char *)malloc(size * sizeof(unsigned char));

    fread(binary, sizeof(unsigned char), size, input);

    int index = 3 * (vrstica * width + stolpec);

    printf("%d %d %d\n", binary[index], binary[index + 1], binary[index + 2]);

    return 0;
}
