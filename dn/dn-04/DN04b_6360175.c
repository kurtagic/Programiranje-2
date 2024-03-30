#include <stdio.h>

int scanArray(int array[], int n);
int getPairs(int array[], int n, int k);

int main()
{
    int n;
    int k;

    scanf("%d %d", &n, &k);

    int zaporedje[n];
    scanArray(zaporedje, n);

    printf("%d\n", getPairs(zaporedje, n, k));

    return 0;
}

int scanArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    return 0;
}

int getPairs(int array[], int n, int k)
{
    int pairs = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a = array[i];
            int b = array[j];

            if (a >= k || b >= k)
            {
                break;
            }

            if (a + b == k)
            {
                pairs++;
            }
        }
    }

    return pairs;
}
