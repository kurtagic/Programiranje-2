#include <stdlib.h>

#include "naloga2.h"

int** ap2pp(int (*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic)
{
	size_t target_column_count = (izvornoStVrstic * N) / ciljnoStVrstic;

	int** matrix = (int**)malloc(ciljnoStVrstic * sizeof(int*));
	for (size_t i = 0; i < ciljnoStVrstic; i++)
	{
		matrix[i] = (int*)malloc((target_column_count + 1) * sizeof(int));
	}

	size_t n = 0;
	size_t m = 0;

	for (size_t i = 0; i < izvornoStVrstic; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			matrix[n][m++] = kazalec[i][j];

			if (m == target_column_count)
			{
				matrix[n++][m] = 0;
				m = 0;
			}
		}
	}

	return matrix;
}

int (*pp2ap(int** kazalec, int izvornoStVrstic, int* ciljnoStVrstic))[N]
{
	int elements = 0;
	for (size_t i = 0; i < izvornoStVrstic; i++)
	{
		for (size_t j = 0; kazalec[i][j] != 0; j++)
		{
			elements++;
		}
	}

	// float a >= 0, b > 0
	// ceil(a/b) = (a + (b - 1)) / b
	*ciljnoStVrstic = (elements + (N - 1)) / N;
	
	int(*matrix)[N] = malloc(*ciljnoStVrstic * N * sizeof(int));
	for (size_t i = 0; i < *ciljnoStVrstic; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			matrix[i][j] = 0;
		}
	}

	size_t n = 0; 
	size_t m = 0;

	for (size_t i = 0; i < izvornoStVrstic; i++)
	{
		for (size_t j = 0; kazalec[i][j] != 0; j++)
		{
			matrix[n][m++] = kazalec[i][j];

			if (m == N)
			{
				n++;
				m = 0;
			}
		}
	}

	return matrix;
}

#ifndef test
int main()
{
	return 0;
}
#endif
