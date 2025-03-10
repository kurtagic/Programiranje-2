#include <stdio.h>
#include <stdbool.h>

enum States
{
    INVALID,
    START,
    ZERO,
    BINARY,
    SIGNED_BINARY,
    HEXADECIMAL,
    SIGNED_HEXADECIMAL,
    OCTAL,
    DECIMAL
};

enum States automata(enum States state, char c);
enum States invalid_prehod(char c);
enum States start_prehod(char c);
enum States zero_prehod(char c);
enum States binary_prehod(char c);
enum States hexadecimal_prehod(char c);
enum States octal_prehod(char c);
enum States decimal_prehod(char c);

bool is_valid(enum States state);

int main()
{
   
    int state = START;
    int c = getchar();

    while(c != '\n')
    {  
        // windows moment
        if (c == '\r')
        {
            c = getchar();
            continue;
        }

        if (c == ' ')
        {
            putchar(is_valid(state) ? '1' : '0');
            
            state = START;
            c = getchar();

            continue;
        }

        state = automata(state, c);
        c = getchar();
    };

    putchar(is_valid(state) ? '1' : '0');
    putchar('\n');

    return 0;
}

enum States automata(enum States state, char c)
{
    switch (state)
    {
        case INVALID:
            state = invalid_prehod(c);
            break;
        case START:
            state = start_prehod(c);
            break;
        case ZERO:
            state = zero_prehod(c);
            break;
        case SIGNED_BINARY:
        case BINARY:
            state = binary_prehod(c);
            break;
        case SIGNED_HEXADECIMAL:
        case HEXADECIMAL:
            state = hexadecimal_prehod(c);
            break;
        case OCTAL:
            state = octal_prehod(c);
            break;
        case DECIMAL:
            state = decimal_prehod(c);
            break;
    }

    return state;
}

enum States invalid_prehod(char c)
{
    return INVALID;
}

enum States start_prehod(char c)
{
    if (c == '0')
    {
        return ZERO;
    }

    if (c >= '1' && c <= '9')
    {
        return DECIMAL;
    }

    return INVALID;
}

enum States zero_prehod(char c)
{
    if (c == 'b')
    {
        return SIGNED_BINARY;
    }

    if (c == 'x')
    {
        return SIGNED_HEXADECIMAL;
    }

    if (c >= '0' && c <= '7')
    {
        return OCTAL;
    }

    return INVALID;
}

enum States binary_prehod(char c)
{
    return (c == '0' || c == '1') ? BINARY : INVALID;
}

enum States hexadecimal_prehod(char c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) ? HEXADECIMAL : INVALID;
}

enum States octal_prehod(char c)
{
    return (c >= '0' && c <= '7') ? OCTAL : INVALID;
}

enum States decimal_prehod(char c)
{
    return (c >= '0' && c <= '9') ? DECIMAL : INVALID;
}

bool is_valid(enum States state)
{
    if (state == INVALID || state == SIGNED_BINARY || state == SIGNED_HEXADECIMAL)
    {
        return false;
    }

    return true;
}