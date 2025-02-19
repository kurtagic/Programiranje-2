#include <stdbool.h>
#include <stdio.h>

// STATES
#define START 0
#define PREDZNAK 1
#define NICLA 2
#define DECIMAL 3
#define INVALID 4

int stateAvtomata(int state, char c);
int startState(char c);
int predznakState(char c);
int niclaState(char c);
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
            putchar((state == INVALID || state == PREDZNAK) ? '0' : '1');
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
    case PREDZNAK:
        state = predznakState(c);
        break;
    case NICLA:
        state = niclaState(c);
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
    if (c == '+' || c == '-')
    {
        return PREDZNAK;
    }

    return INVALID;
}

int niclaState(char c)
{
    return INVALID;
}

int decimalState(char c)
{
    return (c >= '0' && c <= '9') ? DECIMAL : INVALID;
}

int predznakState(char c)
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
