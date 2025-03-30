#include <stdio.h>
#include <stdlib.h>

void get_response(int low, int high, char** output);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	char* output = NULL;
	get_response(a, b, &output);

	printf("%s\n", output);
	free(output);

	return 0;
}

void get_response(int low, int high, char** output)
{
	*output = (char*)malloc(25 * sizeof(char));

	int input;
	scanf("%d", &input);

	while (input != 0)
	{
		int mid = low + (high - low) / 2;

		if (input == 1)
		{
			low = mid + 1;
		}
		
		if (input == -1)
		{
			high = mid - 1;
		}

		// option I: impossible
		if (low > high)
		{
			sprintf(*output, "PROTISLOVJE");
			return;
		}

		scanf("%d", &input);
	}

	// option II: result
	if (low == high)
	{
		sprintf(*output, "%d", low);
		return;
	}

	// option III: interval
	sprintf(*output, "%d %d", low, high);
}