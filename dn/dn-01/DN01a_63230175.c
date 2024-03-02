#include <stdio.h>
#include <stdbool.h>

const char SPACE = ' ';
const char END_OF_LINE = '\0';
const char NEW_LINE = '\n';
const char NEGATIVE_SIGN = '-';

int readInteger();
int writeInteger(int n);

int main()
{
        int a = readInteger();
        int b = readInteger();

        int sum = a + b;

        writeInteger(sum);
        
        putchar('\n');

        return 0;
}

int readInteger()
{
	int n = 0;
	bool isPositive = true;

	char c = getchar();	
	
	while(c != SPACE && c != NEW_LINE && c != END_OF_LINE)
	{
		
		if(c == NEGATIVE_SIGN)
		{
			isPositive = false;
		}
		
		else
		{
			n *= 10;
			n += c - '0';
		}

		c = getchar();

	}

	return isPositive ? n : -n;
}

int writeInteger(int n)
{
	if(n < 0)
	{
		putchar(NEGATIVE_SIGN);
		n = -n;
	}


	if(n / 10 != 0)
	{
		writeInteger(n / 10);
	}

	int digit = n % 10;

	putchar(digit + '0');

	return 0;
}
