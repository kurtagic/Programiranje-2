#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int scanArray(int *array, int n);
int getFrequencies(int *frequency, int *array, int n);
long getPairs(int *array, int n, int k);
int allSamePairs(int n);

int main()
{
    int n;
    int k;

    scanf("%d %d", &n, &k);

    int *zaporedje;
    zaporedje = (int *)malloc(n * sizeof(int));
    scanArray(zaporedje, n);

    printf("%ld\n", getPairs(zaporedje, n, k));

    free(zaporedje);
    return 0;
}

int scanArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    return 0;
}

long getPairs(int *array, int n, int k)
{
    // velik rajs bi uporablu hashmap :(
    // tole porab ~4GB za en array...efficency
    int *frequency = (int *)malloc(INT_MAX * sizeof(int));
    getFrequencies(frequency, array, n);

    long pairs = 0;
    for (int i = 0; i < n; i++)
    {
        int a = array[i];
        int b = k - a;
        int freq = frequency[b];

        if (b < a || freq <= 0)
        {
            continue;
        }

        if (a == b)
        {
            pairs += allSamePairs(freq);
            i += freq - 1;
            continue;
        }

        pairs += freq;
    }

    free(frequency);
    return pairs;
}

// sum za prvih n intov = n(n+1)/2
// za n-1 bo sum = (n-1)n/2
int allSamePairs(int n)
{
    return ((n - 1) * n) / 2;
}

int getFrequencies(int *frequency, int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        frequency[array[i]]++;
    }

    return 0;
}
