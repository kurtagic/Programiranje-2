#include <stdio.h>

const int NIMA = -1;

int getFriendlyNumber(int n);
int getDivisorsSum(int n);

int main()
{
    int n;
    scanf("%d", &n);

    int burazeru = getFriendlyNumber(n);

    if (burazeru == NIMA)
    {
        printf("NIMA\n");
    }
    else
    {
        printf("%d\n", burazeru);
    }

    return 0;
}

int getFriendlyNumber(int n)
{
    int friend = getDivisorsSum(n);
    int friendDivisors = getDivisorsSum(friend);

    if (friend == n)
    {
        return NIMA;
    }

    return (friendDivisors == n) ? friend : NIMA;
}

int getDivisorsSum(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}
