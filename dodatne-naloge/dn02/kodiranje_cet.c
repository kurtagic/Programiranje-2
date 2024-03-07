#include <stdbool.h>
#include <stdio.h>

const char ENCODE_CHAR = '1';
const char DECODE_CHAR = '2';
const int ENCODE_LIMIT = 4;

const char NEW_LINE = '\n';
const char HASHTAG = '#';

int encode();
int printEncoded(char c, int count);

int decode();
int printDecoded();

int main()
{
    char c = getchar();
    if (c == ENCODE_CHAR)
    {
        encode();
    }
    else if (c == DECODE_CHAR)
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
    char previous = getchar();
    int charCounter = 0;

    while (true)
    {
        char c = getchar();

        if (c != previous)
        {
            printEncoded(previous, charCounter);
            charCounter = 1;
        }
        else
        {
            charCounter++;
        }

        if (c == NEW_LINE)
        {
            break;
        }

        previous = c;
    }

    return 0;
}

int printEncoded(char c, int count)
{
    if (c == HASHTAG)
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
    getchar(); // remove whitespace
    while (true)
    {
        char c = getchar();

        if (c == HASHTAG)
        {
            printDecoded();
        }
        else
        {
            putchar(c);
        }

        if (c == NEW_LINE)
        {
            break;
        }
    }

    return 0;
}

int printDecoded()
{
    char c = getchar();
    int counter = 0;

    while (true)
    {
        char d = getchar();

        if (d == HASHTAG)
        {
            break;
        }

        counter = 10 * counter + (d - '0');
    }

    for (int i = 0; i < counter; i++)
    {
        putchar(c);
    }

    return 0;
}
