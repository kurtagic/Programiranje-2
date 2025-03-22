#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct 
{
	int min;
	int max;
} Range;

unsigned long long get_pairs(int* array, Range range, int n, int k);
int get_combinations(int n);

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	int* zaporedje = (int*)malloc(n * sizeof(int));

	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &zaporedje[i]);

		if (zaporedje[i] < min)
		{
			min = zaporedje[i];
		}
		if (zaporedje[i] > max)
		{
			max = zaporedje[i];
		}
	}

	Range range = { min, max };

	unsigned long long pairs = get_pairs(zaporedje, range, n, k);

	printf("%llu\n", pairs);

	free(zaporedje);

	return 0;
}

unsigned long long get_pairs(int* array, Range range, int n, int k)
{
	int size = range.max - range.min + 1;

	int* frequency = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		frequency[i] = 0;
	}

	int offset = range.min;
	for (int i = 0; i < n; i++)
	{
		frequency[array[i] - offset]++;
	}

	unsigned long long pairs = 0;

	for (int i = 0; i < n; i++)
	{
		int a = array[i];
		int b = k - a;

		if (a > b)
		{
			break;
		}

		if (b < range.min || b > range.max)
		{
			continue;
		}

		int copies_of_a = frequency[a - offset] - 1;
		int pairs_of_a = frequency[b - offset];
		
		if (a == b)
		{
			pairs += get_combinations(copies_of_a);
		}

		if (pairs_of_a <= 0 || a == b)
		{
			i += copies_of_a;
			continue;
		}

		pairs += pairs_of_a;
	}

	free(frequency);

	return pairs;
}

int get_combinations(int n)
{
	return (n * (n + 1)) / 2;
}
