#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(int *array, int n);
int sumOf(int *array, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int *zaporedje = (int *)malloc((n + 1) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zaporedje[i]);
    }
    zaporedje[n] = '\0';

    printf("%s\n", (isPalindrome(zaporedje, n) ? "DA" : "NE"));
    printf("%d\n", sumOf(zaporedje, n));

    return 0;
}

bool isPalindrome(int *array, int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (array[i] != array[j])
        {
            //     return false;
        }
        i++;
        j--;
    }

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (array[i] != array[j])
        {
            return false;
        }
    }

    return true;
}

int sumOf(int *array, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    return sum;
}
