#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int permutations(int n, int m, bool *isTaken);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    bool *isTaken = (bool *)malloc(m * sizeof(bool));
    for (int i = 0; i < m; i++)
    {
        isTaken[i] = false;
    }

    printf("%d\n", permutations(n, m, isTaken));

    free(isTaken);

    return 0;
}

int permutations(int n, int m, bool *isTaken)
{
    int count = 0;
    int limit = n > m ? m : n;

    for (int a = n - 1; a > 1; a--)
    {
        if (isTaken[a])
        {
            continue;
        }

        for (int b = a - 1; b > 0; b--)
        {
            if (isTaken[b])
            {
                continue;
            }

            int sum = a + b;

            if (sum > m)
            {
                continue;
            }

            if (n == sum)
            {
                count++;
            }

            if (n % sum != 0)
            {
                continue;
            }

            isTaken[a] = true;
            isTaken[b] = true;

            count += permutations(n / sum, m, isTaken);

            isTaken[a] = false;
            isTaken[b] = false;
        }
    }

    return count;
}
