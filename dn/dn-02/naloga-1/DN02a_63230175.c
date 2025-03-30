#include <stdio.h>
#include <stdbool.h>

enum States
{
	INVALID,
	START,
	ZERO,
	DECIMAL,
	SIGNED
};

enum States automata(enum States state, char c);
enum States invalid_prehod(char c);
enum States start_prehod(char c);
enum States zero_prehod(char c);
enum States decimal_prehod(char c);
enum States signed_prehod(char c);

bool is_valid(enum States state);

int main()
{
	enum States state = START; 
	char c = getchar();

	while (c != '\n')
	{
		// tole sm debuggu 3h...windows greatest OS
		if (c == '\r')
		{
			c = getchar();
			continue;
		}

		if (c == ' ')
		{
			putchar(is_valid(state) ? '1' : '0');
			
			state = START;
			c = getchar();
			
			continue;
		}

		state = automata(state, c);
		c = getchar();
	};

	putchar(is_valid(state) ? '1' : '0');
	putchar('\n');

	return 0;
}

enum States automata(enum States state, char c)
{
	switch (state)
	{
		case INVALID:
			state = invalid_prehod(c);
			break;
		case START:
			state = start_prehod(c);
			break;
		case ZERO:
			state = zero_prehod(c);
			break;
		case DECIMAL:
			state = decimal_prehod(c);
			break;
		case SIGNED:
			state = signed_prehod(c);
			break;
	}
	
	return state;
}

enum States invalid_prehod(char c)
{
	return INVALID;
}

enum States start_prehod(char c)
{
	if (c == '0')
	{
		return ZERO;
	}

	if (c >= '1' && c <= '9')
	{
		return DECIMAL;
	}

	if (c == '+' || c == '-')
	{
		return SIGNED;
	}

	return INVALID;
}

enum States zero_prehod(char c)
{
	return INVALID;
}

enum States decimal_prehod(char c)
{
	return (c >= '0' && c <= '9') ? DECIMAL : INVALID;
}

enum States signed_prehod(char c)
{
	if (c == '0')
	{
		return ZERO;
	}

	if (c >= '1' && c <= '9')
	{
		return DECIMAL;
	}

	return INVALID;
}

bool is_valid(enum States state)
{
	if (state == INVALID || state == SIGNED)
	{
		return false;
	}

	return true;
}
