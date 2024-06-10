#include <stdio.h>

int rekurz(int n, int index, int current, int vzponi, int spusti);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", rekurz(n, 0, 0, 0, 0));

    return 0;
}

int rekurz(int n, int index, int current, int vzponi, int spusti)
{
    if (index > n || current < 0 || vzponi > n / 2 || spusti > n / 2)
    {
        return 0;
    }

    if (index == n)
    {
        return vzponi == n / 2 && spusti == n / 2;
    }

    int uppsies = rekurz(n, index + 1, current + 1, vzponi + 1, spusti);
    int downies = rekurz(n, index + 1, current - 1, vzponi, spusti + 1);

    return uppsies + downies;
}
