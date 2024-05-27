#include <stdbool.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "rb");

    int counter = 0;
    unsigned char byte;
    while (fread(&byte, sizeof(unsigned char), 1, input) != 0)
    {
        while (byte != 0)
        {
            counter += byte & 1;
            byte >>= 1;
        }
    }

    printf("%d\n", counter);
}
