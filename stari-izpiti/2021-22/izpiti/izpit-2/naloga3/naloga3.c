#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define EMPTY 0
#define SET 1

long countCells(int n);

void makeRectangle(int n, int s, int v, int h, int w);

int getColor(int n, int x, int y);
int getQuadrant(int n, int x, int y);

int main()
{
    int n, v, s, h, w;
    scanf("%d %d %d %d %d", &n, &v, &s, &h, &w);

    printf("%ld\n", countCells(n));

    makeRectangle(n, s, v, h, w);

    return 0;
}

long countCells(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 3 * countCells(n - 1);
}

void makeRectangle(int n, int x, int y, int h, int w)
{
    for (int i = y; i < y + h; i++)
    {
        for (int j = x; j < x + w; j++)
        {
            char c = getColor(n, j, i) == SET ? '*' : '-';
            printf("%c", c);
        }

        printf("\n");
    }
}

int getColor(int n, int x, int y)
{
    if (n == 0)
    {
        return SET;
    }

    int quadrant = getQuadrant(n, x, y);
    n--;

    if (quadrant == 1)
    {
        return getColor(n, x, y);
    }

    if (quadrant == 2)
    {
        return getColor(n, x - pow(2, n), y);
    }

    if (quadrant == 3)
    {
        return EMPTY;
    }

    if (quadrant == 4)
    {
        return getColor(n, x - pow(2, n), y - pow(2, n));
    }

    return -1;
}

int getQuadrant(int n, int s, int v)
{
    int x_left = pow(2, n - 1);
    int x_right = pow(2, n);

    int y_upper = pow(2, n - 1);
    int y_lower = pow(2, n);

    if (s < x_left && v < y_upper)
    {
        return 1;
    }

    if (s < x_right && v < y_upper)
    {
        return 2;
    }

    if (s < x_left && v < y_lower)
    {
        return 3;
    }

    if (s < x_right && v < y_lower)
    {
        return 4;
    }

    return -1;
}
