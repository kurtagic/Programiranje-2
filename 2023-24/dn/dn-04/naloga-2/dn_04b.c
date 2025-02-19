#include <stdio.h>
#include <stdlib.h>

long getPairs(int *array, int n, int k);
int sumOfFirstNIntegers(int n);
void fillFrequency(int *frequency, int *array, int n);
void scanArray(int *array, int n);

const int MAX_UNIQUE_NUMBERS = 59;

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

        int aRepetitions = frequency[a] - 1;
        int aPairs = frequency[b];

        if (a > b)
        {
            break;
        }

        if (a == b)
        {
            pairs += sumOfFirstNIntegers(aRepetitions);
        }

        if (aPairs <= 0 || a == b)
        {
            i += aRepetitions;
            continue;
        }

        pairs += aPairs;
    }

    free(frequency);
    return pairs;
}

// sum za prvih n intov = n(n+1)/2
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

void scanArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
