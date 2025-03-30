#include <stdio.h>

int permutations(int n, int m, int sum);

int main()
{
    int n;
    int m;

    scanf("%d %d", &n, &m);

    printf("%d\n", permutations(n, m, 0));

    return 0;
}

int permutations(int n, int m, int sum)
{
    // base case: uspesno prisli do konca, pristej kombinacijo
    if (sum == n)
    {
        return 1;
    }

    int count = 0;
    for (int b = m; b <= n; b++)
    {
        for (int a = 1; a < b; a++)
        {
            int current_sum = sum + a*b;

            // trenutni clen a*b je prevec, ne obravnavaj
            if (current_sum > n)
            {
                continue;
            }

            count += permutations(n, m, current_sum);
        }
    }

    return count;
}