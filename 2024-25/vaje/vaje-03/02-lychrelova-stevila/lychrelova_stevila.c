#include <stdbool.h>
#include <stdio.h>

#define LIMIT 10e17

bool is_lycherl(long long n, int k);
bool is_palindrome(long n);
long mirror(long n);

int main()
{
	int k, a, b;
	scanf("%d %d %d", &k, &a, &b);

	int counter = 0;
	for (long long i = a; i <= b; i++)
	{
		if (is_lycherl(i, k))
		{
			counter++;
		}
	}

	printf("%d\n", counter);

	return 0;
}

bool is_lycherl(long long n, int k)
{
	for (int i = 0; (i < k && n <= LIMIT); i++)
	{
		n += mirror(n);

		if (is_palindrome(n))
		{
			return false;
		}
	}

	return !is_palindrome(n);
}

long mirror(long n)
{
	long mirrored = 0;
	while (n > 0)
	{
		mirrored = 10 * mirrored + (n % 10);
		n /= 10;
	}

	return mirrored;
}

bool is_palindrome(long n)
{
	return n == mirror(n);
}
