#include <stdio.h>

int read_bin();
void write_int(int n);

int main()
{
	int log_ceil = read_bin();

	write_int(log_ceil);
	putchar('\n');

	return 0;
}

int read_bin()
{
	// consume leading zeros
	char c = getchar();
	while (c == '0')
	{
		c = getchar();
	}
	
	int n = 0;
	int log = -1;
	while (c == '0' || c == '1')
	{
		n = (n << 1) | (c - '0');
		log++;
		c = getchar();
	}

	// f(x) = log_a(x); a > 0, a != 1, x > 0
	// v dvojism logartimu a == 2
	
	//edge case n = 0 (x > 0 pogoj za obstoj logaritma)
	if (n == 0)
	{
		return 0;
	}

	return (n & (n - 1)) == 0 ? log : log + 1;
}

void write_int(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		write_int(n / 10);
	}

	putchar((n % 10) + '0');
}
