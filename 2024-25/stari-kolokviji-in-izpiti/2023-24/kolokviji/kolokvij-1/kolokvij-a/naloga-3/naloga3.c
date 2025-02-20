#include <stdio.h>
#include <stdlib.h>

void print_array(int* array, int n);

int main()
{
	int v;
	int s;

	scanf("%d %d", &v, &s);

	int* zaporedje_A = (int*)malloc(v * s * sizeof(int));
	int* zaporedje_B = (int*)malloc((v + 1) * sizeof(int));
	int* zaporedje_C = (int*)malloc(v * s * sizeof(int));

	int index_A_C = 0;
	zaporedje_B[0] = 0;

	for (int i = 0; i < v; i++)
	{
		zaporedje_B[i + 1] = zaporedje_B[i];

		for (int j = 0; j < s; j++)
		{
			int element;
			scanf("%d", &element);

			if (element == 0)
			{
				continue;
			}

			zaporedje_A[index_A_C] = element;
			zaporedje_C[index_A_C] = j;
			index_A_C++;
			zaporedje_B[i + 1]++;
		}
	}

	print_array(zaporedje_A, index_A_C);
	print_array(zaporedje_B, v + 1);
	print_array(zaporedje_C, index_A_C);

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
