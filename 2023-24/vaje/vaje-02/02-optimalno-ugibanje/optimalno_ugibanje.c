#include <stdio.h>

int zgenerirajOdgovor(int min, int max);

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    zgenerirajOdgovor(a, b);

    return 0;
}

int zgenerirajOdgovor(int min, int max)
{
    int input;

    scanf("%d", &input);

    while (input != 0)
    {
        int guess = (min + max) / 2;

        if (input == 1)
        {
            min = guess + 1;
        }
        else
        {
            max = guess - 1;
        }

        if (min > max || max < min)
        {
            printf("PROTISLOVJE");
            return 0;
        }

        scanf("%d", &input);
    }

    // narrow downu na eno stevilko
    if (min == max)
    {
        printf("%d", min);
        return 0;
    }

    // edina moznost interval
    printf("%d %d", min, max);

    return 0;
}
