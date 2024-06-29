#include <stdbool.h>
#include <stdio.h>

// STATES
#define START 0
#define NICLA 1
#define BINARY 2
#define PREDZNAK_BINARY 3
#define HEXADECIMAL 4
#define PREDZNAK_HEXADECIMAL 5
#define OCTAL 6
#define DECIMAL 7
#define INVALID 8

int stateAvtomata(int state, char c);
int startState(char c);
int niclaState(char c);
int binaryState(char c);
int hexadecimalState(char c);
int octalState(char c);
int decimalState(char c);

int main()
{
    int c;
    int state = START;

    do
    {
        c = getchar();

        if (c == ' ' || c == '\n')
        {
            putchar((state == INVALID || state == PREDZNAK_BINARY || state == PREDZNAK_HEXADECIMAL) ? '0' : '1');
            state = START;

            continue;
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
        state = startState(c);
        break;
    case NICLA:
        state = niclaState(c);
        break;
    case PREDZNAK_BINARY:
    case BINARY:
        state = binaryState(c);
        break;
    case PREDZNAK_HEXADECIMAL:
    case HEXADECIMAL:
        state = hexadecimalState(c);
        break;
    case OCTAL:
        state = octalState(c);
        break;
    case DECIMAL:
        state = decimalState(c);
        break;
    }

    return state;
}

int startState(char c)
{
    if (c == '0')
    {
        return NICLA;
    }
    if (c >= '1' && c <= '9')
    {
        return DECIMAL;
    }

    return INVALID;
}

int niclaState(char c)
{
    if (c == 'b')
    {
        return PREDZNAK_BINARY;
    }
    if (c == 'x')
    {
        return PREDZNAK_HEXADECIMAL;
    }
    if (c >= '0' && c <= '7')
    {
        return OCTAL;
    }

    return INVALID;
}

int binaryState(char c)
{
    return (c == '0' || c == '1') ? BINARY : INVALID;
}

int hexadecimalState(char c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) ? HEXADECIMAL : INVALID;
}

int octalState(char c)
{
    return (c >= '0' && c <= '7') ? OCTAL : INVALID;
}

int decimalState(char c)
{
    return (c >= '0' && c <= '9') ? DECIMAL : INVALID;
}
