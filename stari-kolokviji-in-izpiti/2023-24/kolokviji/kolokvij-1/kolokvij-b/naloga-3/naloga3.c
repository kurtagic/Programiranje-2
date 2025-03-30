#include <stdio.h>
#include <stdlib.h>

void print_array(int* array, int n);

int main()
{
	int v, s, k;
	scanf("%d %d %d", &v, &s, &k);

	int* zaporedje_A = (int*)malloc(k * sizeof(int));
	int* zaporedje_B = (int*)malloc((v + 1) * sizeof(int));
	int* zaporedje_C = (int*)malloc(k * sizeof(int));

	for (int i = 0; i < k; i++)
		scanf("%d", &zaporedje_A[i]);
	for (int i = 0; i < v + 1; i++)
		scanf("%d", &zaporedje_B[i]);
	for (int i = 0; i < k; i++)
		scanf("%d", &zaporedje_C[i]);

	int index_A_C = 0;

	for (int i = 0; i < v; i++)
	{
		int* row = (int*)malloc(s * sizeof(int));
		for (int j = 0; j < s; j++)
			row[j] = 0;

		int non_zero_elements = zaporedje_B[i + 1] - zaporedje_B[i];

		for (int j = 0; j < non_zero_elements; j++)
		{
			int column = zaporedje_C[index_A_C];
			int element = zaporedje_A[index_A_C];
			index_A_C++;

			row[column] = element;
		}

		print_array(row, s);
		free(row);
	}

	free(zaporedje_A);
	free(zaporedje_B);
	free(zaporedje_C);

	return 0;
}

void print_array(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", array[i]);
		printf(i + 1 < n ? "_" : "");
	}

	printf("\n");
}