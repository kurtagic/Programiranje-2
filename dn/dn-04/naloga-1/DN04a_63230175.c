#include <stdio.h>
#include <stdlib.h>

void scan_sequence(int* array, int n);
int get_offset(int* zaporedje_A, int* zaporedje_B, int n);

int main()
{
	int n;
	scanf("%d", &n);

	int* zaporedje_A = (int*)malloc(n * sizeof(int));
	int* zaporedje_B = (int*)malloc(n * sizeof(int));

	scan_sequence(zaporedje_A, n);
	scan_sequence(zaporedje_B, n);

	int k = get_offset(zaporedje_A, zaporedje_B, n);

	printf("%d\n", k);

	free(zaporedje_A);
	free(zaporedje_B);

	return 0;
}

void scan_sequence(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
}

int get_offset(int* zaporedje_A, int* zaporedje_B, int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			if (zaporedje_A[i + k] != zaporedje_B[i])
			{
				break;
			}

			if (i + k == n - 1)
			{
				return k;
			}
		}
	}

	return -1;
}
