// fak me model,
// tole sm koncou pisat ob 08:33 - zaceu sm okol 02:30.
// k sm tole pisu sva vedla samo allah in jst kaj tf tole je,
// zdej ve samo allah (ce sploh to)
//
// ubit se hocm
//
// P.S. ce misls it tole brt ti lah recm samo srecno

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 4 // 28b... 3B < 28b < 4B
#define MAX_BYTES MAX_SIZE * 5
#define MAX_LENGTH MAX_SIZE * 7 + 1

int decode(unsigned char *number, int n);

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "rb");

    unsigned char *buffer = (unsigned char *)malloc(MAX_BYTES * sizeof(unsigned char));
    unsigned char *bytes = (unsigned char *)malloc(MAX_SIZE * sizeof(unsigned char));

    size_t m = 0;
    int n = 0;

    while ((m = fread(buffer, sizeof(unsigned char), MAX_SIZE, input)) > 0)
    {
        for (int i = 0; i < m; i++)
        {
            if (buffer[i] % 2 == 0)
            {
                bytes[n] = buffer[i];
                printf("%d\n", decode(bytes, n));
                n = 0;

                continue;
            }

            bytes[n++] = buffer[i];
        }
    }

    fclose(input);

    free(buffer);
    free(bytes);

    return 0;
}

int decode(unsigned char *bytes, int n)
{
    char *binaryByte = (char *)malloc(8 * sizeof(char));
    char *binary = (char *)malloc(MAX_LENGTH * sizeof(char));

    // unsigned bit extension do 4B
    for (int i = 0; i < MAX_SIZE; i++)
    {
        bytes[MAX_SIZE - i - 1] = n < i ? 0 : bytes[n - i];
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 7; j > 0; j--)
        {
            char value = (bytes[i] & (1 << j)) ? '1' : '0';
            binaryByte[7 - j] = value;
        }

        binaryByte[7] = '\0';
        strcat(binary, binaryByte);
    }

    // remove leading zeros
    int offset = strspn(binary, "0");
    memmove(binary, binary + offset, strlen(binary) - offset + 1);

    // binary -> decimal
    int decimal = 0;
    for (int i = 0; binary[i] != '\0'; i++)
    {
        decimal = (decimal << 1) | (binary[i] - '0');
    }

    free(binaryByte);
    free(binary);

    return decimal;
}
