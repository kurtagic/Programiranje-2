#include <stdio.h>

void print_range(int a, int n, int increment);

int main()
{
	int n;
	scanf("%d", &n);

	int a = 0;
	for (int i = 0; i < n; i++)
	{
		int increment = (i % 2 == 0) ? 1 : -1;
		int k;
		scanf("%d", &k);

		// zadnji element trenutnega zaporejda je prvi element naslednjega, 
		// ne printaj ga dvakrat. samo zadnje zaporedje nima naslednjega zaporedja,
		// zato naprintaj celotno zaporedje
		int steps = (i + 1 < n) ? k - 1 : k;

		print_range(a, steps, increment);

		a += (k - 1) * increment;
	}

	return 0;
}

void print_range(int a, int n, int increment)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a);
		a += increment;
	}
}