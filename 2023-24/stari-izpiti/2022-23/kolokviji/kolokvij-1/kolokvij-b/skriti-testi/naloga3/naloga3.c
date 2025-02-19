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

    for (int a = 1; a < n; a++)
    {
        if (isTaken[a])
        {
            continue;
        }

        isTaken[a] = true;

        for (int b = 1; b < a; b++)
        {
            int sum = a + b;

            if (isTaken[b] || sum > m || n % sum != 0)
            {
                continue;
            }

            if (n == sum)
            {
                count++;

                break;
            }

            isTaken[b] = true;

            count += permutations(n / sum, m, isTaken);

            isTaken[b] = false;
        }

        isTaken[a] = false;
    }

    return count;
}
