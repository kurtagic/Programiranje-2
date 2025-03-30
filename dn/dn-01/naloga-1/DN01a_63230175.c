#include <stdio.h>

int read_int();
void write_int(int n);

int main()
{
	int a = read_int();
	int b = read_int();

	write_int(a + b);
	putchar('\n');

	return 0;
}

int read_int()
{
	int n = 0;
	int sign = 1;

	char c = getchar();

	// consume whitespace
	if (c == ' ')
	{
		c = getchar();
	}

	// consume negative sign
	if (c == '-')
	{
		sign = -1;
		c = getchar();
	}

	while (c >= '0' && c <= '9')
	{
		n = 10 * n + (c - '0');
		c = getchar();
	}

	return sign * n;
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
