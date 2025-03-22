#include <stdio.h>

int pythagorian_triplets(int a, int b);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    int counter = pythagorian_triplets(m, n);

    printf("%d\n", counter);

    return 0;
}

int pythagorian_triplets(int m, int n)
{
    int count = 0;

    for (int c = m; c <= n; c++)
    {
        for (int a = 1; a < c; a++)
        {
            for (int b = a; b < c; b++)
            {
                if (a * a + b * b == c * c)
                {
                    count++;
                }
            }
        }
    }

    return count;
}
