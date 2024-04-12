#include <stdbool.h>
#include <stdio.h>

const int ENCODE_LIMIT = 4;

int encode();
int printEncoded(char c, int count);

int decode();
int printDecoded();

int main()
{
    if (getchar() == '1')
    {
        encode();
    }
    else
    {
        decode();
    }

    return 0;
}

/*
 // ENCODING
*/

int encode()
{
    char c;
    char previous = getchar();
    int charCounter = 0;

    do
    {
        c = getchar();

        if (c != previous)
        {
            printEncoded(previous, charCounter);
            charCounter = 1;
        }
        else
        {
            charCounter++;
        }

        previous = c;

    } while (c != '\n');

    return 0;
}

int printEncoded(char c, int count)
{
    if (c == '#')
    {
        printf("##%d#", count);
        return 0;
    }

    if (count <= ENCODE_LIMIT)
    {
        for (int i = 0; i < count; i++)
        {
            putchar(c);
        }

        return 0;
    }

    printf("#%c%d#", c, count);

    return 0;
}

/*
// DECODING
*/

int decode()
{
    char c;
    getchar(); // remove whitespace

    do
    {
        c = getchar();

        if (c == '#')
        {
            printDecoded();
        }
        else
        {
            putchar(c);
        }

    } while (c != '\n');

    return 0;
}

int printDecoded()
{
    char c = getchar();
    char d;
    int counter = 0;

    while ((d = getchar()) != '#')
    {
        counter = 10 * counter + (d - '0');
    }

    for (int i = 0; i < counter; i++)
    {
        putchar(c);
    }

    return 0;
}
