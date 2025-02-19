#include <stdio.h>

int scanArray(int array[], int n);
int findOffset(int arrayA[], int arrayB[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int arrayA[n];
    int arrayB[n];

    scanArray(arrayA, n);
    scanArray(arrayB, n);

    printf("%d\n", findOffset(arrayA, arrayB, n));

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

int findOffset(int arrayA[], int arrayB[], int n)
{
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrayA[j + k] != arrayB[j])
            {
                k++;
                break;
            }

            if (j + k == n - 1)
            {
                return k;
            }
        }
    }

    return -1;
}
