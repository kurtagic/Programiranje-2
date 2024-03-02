#include <stdio.h>
#include <stdbool.h>

const char END_OF_LINE = '\n';
const char ZERO = '0';
const char ONE = '1';

int readBinaryLength();
int writeInteger();

int main()
{
	int binLen = readBinaryLength();
	writeInteger(binLen);
		
	return 0;
}

int readBinaryLength()
{
	bool isLeadingZero = true;
	bool isRoundedUp = false;
	int count = 0;
	
	char c = getchar();
	
	while(c != END_OF_LINE)
	{
		if(isLeadingZero && c == ZERO) 
		{
			c = getchar();
			continue;
		}
		
		if(isLeadingZero && c == ONE)
		{
			isLeadingZero = false;
			c = getchar();
			continue;
		}
		
		if(!isRoundedUp && c == ONE) 
		{
			isRoundedUp = true;
		}

		count++;
		
		c = getchar();
	}

	if(isRoundedUp) count++;

	return count;
}


int writeInteger(int n)
{
	if(n / 10 != 0)
	{
		writeInteger(n / 10);
	}

	int digit = n % 10;

	putchar(digit + '0');

	return 0;
}

