#include <stdio.h>
#include <stdlib.h>

const int MAX_UNIQUE_NUMBERS = 59;

int scanArray(int *array, int n);
void fillFrequency(int *frequency, int *array, int n);
long getPairs(int *array, int n, int k);
int sumOfFirstNIntegers(int n);

int main()
{
    int n;
    int k;

    scanf("%d %d", &n, &k);

    int *zaporedje = (int *)malloc(n * sizeof(int));
    scanArray(zaporedje, n);

    printf("%ld\n", getPairs(zaporedje, n, k));

    free(zaporedje);
    return 0;
}

long getPairs(int *array, int n, int k)
{
    // velik rajs bi uporablu hashmap :(
    int *frequency = (int *)malloc(MAX_UNIQUE_NUMBERS * sizeof(int));
    fillFrequency(frequency, array, n);

    long pairs = 0;
    for (int i = 0; i < n; i++)
    {
        int a = array[i];
        int b = k - a;
        int a_pairs = frequency[b];

        if (b < a)
        {
            break;
        }

        if (a_pairs <= 0)
        {
            i += frequency[a] - 1;
            continue;
        }

        if (a == b)
        {
            pairs += sumOfFirstNIntegers(a_pairs - 1);
            i += a_pairs - 1;
            continue;
        }

        pairs += a_pairs;
    }

    free(frequency);
    return pairs;
}

// sum za prvih n intov = n(n+1)/2
// za n-1 bo sum = (n-1)n/2
int sumOfFirstNIntegers(int n)
{
    return (n * (n + 1)) / 2;
}

void fillFrequency(int *frequency, int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        frequency[array[i]]++;
    }
}

int scanArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    return 0;
}
