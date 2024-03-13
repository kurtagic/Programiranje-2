#include <stdbool.h>
#include <stdio.h>

// STATES
#define START 0
#define DECIMAL 1
#define OCTAL 2
#define HEXADECIMAL 3
#define PREDZNAK_HEXADECIMAL 4
#define BINARY 5
#define PREDZNAK_BINARY 6
#define NIC 7
#define INVALID 8

int stateAvtomata(int state, char c);

int main()
{
    int state = START;
    int output = '1';

    int c;
    do
    {
        c = getchar();

        if (c == ' ' || c == '\n')
        {
            if (state == INVALID)
            {
                output = '0';
            }

            if (state == PREDZNAK_BINARY || state == PREDZNAK_HEXADECIMAL)
            {
                output = '0';
            }

            state = START;

            putchar(output);

            continue;
        }

        if (state == START)
        {
            output = '1';
        }

        state = stateAvtomata(state, c);
    } while (c != '\n');

    putchar('\n');
    return 0;
}

int stateAvtomata(int state, char c)
{
    switch (state)
    {
    case START:
        if (c >= '1' && c <= '9')
        {
            state = DECIMAL;
        }
        else if (c == '0')
        {
            state = NIC;
        }
        else
        {
            state = INVALID;
        }
        break;
    case NIC:
        if (c == 'x')
        {
            state = PREDZNAK_HEXADECIMAL;
        }
        else if (c == 'b')
        {
            state = PREDZNAK_BINARY;
        }
        else if (c >= '0' && c <= '7')
        {
            state = OCTAL;
        }
        else
        {
            state = INVALID;
        }
        break;
    case DECIMAL:
        if (c < '0' || c > '9')
        {
            state = INVALID;
        }
        break;
    case OCTAL:
        if (c < '0' || c > '7')
        {
            state = INVALID;
        }
        break;
    case HEXADECIMAL:
    case PREDZNAK_HEXADECIMAL:
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')))
        {
            state = INVALID;
        }
        if (state == PREDZNAK_HEXADECIMAL)
        {
            state = HEXADECIMAL;
        }
        break;
    case BINARY:
    case PREDZNAK_BINARY:
        if (c < '0' || c > '1')
        {
            state = INVALID;
        }

        if (state == PREDZNAK_BINARY)
        {
            state = BINARY;
        }
        break;
    }
    return state;
}
