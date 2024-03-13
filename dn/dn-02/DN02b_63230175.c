#include <stdbool.h>
#include <stdio.h>

// STATES
#define START 0
#define SAMO_NIC 1
#define ZAPOREDJE 2
#define PREDZNAK 3
#define INVALID 4

int stateAvtomata(int state, char c);

int main()
{
    int state = START;
    int output = '1';

    while (true)
    {
        int c = getchar();

        if (c == ' ' || c == '\n')
        {
            if (state == PREDZNAK || state == INVALID)
            {
                output = '0';
            }

            state = START;

            putchar(output);

            if (c == '\n')
            {
                putchar('\n');
                break;
            }

            continue;
        }

        if (state == START)
        {
            output = '1';
        }

        state = stateAvtomata(state, c);
    }

    return 0;
}

int stateAvtomata(int state, char c)
{
    switch (state)
    {
    case START:
        if (c == '0')
        {
            state = SAMO_NIC;
        }
        if (c >= '1' && c <= '9')
        {
            state = ZAPOREDJE;
        }
        if (c == '+' || c == '-')
        {
            state = PREDZNAK;
        }
        break;

    case SAMO_NIC:
        state = INVALID;
        break;

    case ZAPOREDJE:
        if (c < '0' || c > '9')
        {
            state = INVALID;
        }
        break;

    case PREDZNAK:
        if (c == '0')
        {
            state = SAMO_NIC;
        }
        else if (c >= '1' && c <= '9')
        {
            state = ZAPOREDJE;
        }
        else
        {
            state = INVALID;
        }
        break;
    }

    return state;
}
