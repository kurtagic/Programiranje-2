#include <stdbool.h>
#include <stdio.h>

char vibeCheckThePredznak(char c, char value);

int main()
{
    char c;
    char prejsna;
    char output = '1';

    int dolzina = 0;
    bool jePredznacen = false;

    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
        {
            output = vibeCheckThePredznak(prejsna, output);

            putchar(output);

            prejsna = '\0';
            output = '1';

            dolzina = 0;
            jePredznacen = false;

            continue;
        }

        if (dolzina == 0 && (c == '+' || c == '-'))
        {
            jePredznacen = true;
        }

        if (dolzina > 0 && (c < '0' || c > '9'))
        {
            output = '0';
        }

        if (prejsna == '0')
        {
            if (dolzina == 1 || (jePredznacen && dolzina == 2))
            {
                output = '0';
            }
        }

        dolzina++;
        prejsna = c;
    }

    output = vibeCheckThePredznak(prejsna, output);

    putchar(output);
    putchar('\n');

    return 0;
}

char vibeCheckThePredznak(char c, char value)
{
    return (c == '+' || c == '-') ? '0' : value;
}
