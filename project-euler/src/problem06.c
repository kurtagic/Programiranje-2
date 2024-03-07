// Sum Square Difference

#include <stdio.h>

int sumOfSquares(int n);
int squareOfSum(int n);

int main()
{
    int n = 100;
    int result = squareOfSum(n) - sumOfSquares(n);

    printf("%d\n", result);

    return 0;
}

int sumOfSquares(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    return sum;
}

int squareOfSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum * sum;
}
