#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// string + '\0'
#define MAX_SIZE 100 + 1

void tokenise(const char* buffer, char** tokens);
void copy(char* destination, const char* buffer, size_t start_index, size_t end_index);
int get_wanted_columns_index(char** tokens, size_t n, const char* column_name);

int main(int argc, char** argv)
{
	FILE* input = fopen(argv[1], "r");
	FILE* output = fopen(argv[2], "w");

	int m = atoi(argv[3]);

	// buffer[i] je i-ti char v vrstici
	int buffer_size = m * (MAX_SIZE + 1);
	char* buffer = (char*)malloc(buffer_size * sizeof(char));
	
	// tokens[i] je i-ti string v bufferju
	char** tokens = (char**)malloc(m * sizeof(char*));
	for (size_t i = 0; i < m; i++)
		tokens[i] = (char*)malloc(MAX_SIZE * sizeof(char));

	// wanted_column_index[i] je i-ti zeljeni column podan v argv[i+4]
	int wanted_columns_size = argc - 4;
	int* wanted_columns_index = (int*)malloc(wanted_columns_size * sizeof(int));
	
	bool is_header = true;
	while (fgets(buffer, buffer_size, input) != NULL)
	{
		buffer[strlen(buffer) - 1] = '\0';
		tokenise(buffer, tokens);

		if (is_header)
		{
			for (size_t i = 0; i < wanted_columns_size; i++)
			{
				wanted_columns_index[i] = get_wanted_columns_index(tokens, m, argv[i + 4]);
			}

			is_header = false;
		}

		for (size_t i = 0; i < wanted_columns_size; i++)
		{
			const char* token = tokens[wanted_columns_index[i]];
			const char locilo = (i == wanted_columns_size - 1) ? '\n' : ',';

			fprintf(output, "%s%c", token, locilo);
		}
	}

	for (size_t i = 0; i < m; i++)
		free(tokens[i]);
	free(tokens);

	free(buffer);
	free(wanted_columns_index);

	fclose(input);
	fclose(output);

	return 0;
}

void tokenise(const char* buffer, char** tokens)
{
	int start_index = 0;
	int tokens_index = 0;

	for (size_t i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == ' ')
		{
			copy(tokens[tokens_index++], buffer, start_index, i);
			start_index = i + 1;
		}
	}

	copy(tokens[tokens_index++], buffer, start_index, strlen(buffer));
}

void copy(char* destination, const char* buffer, size_t start_index, size_t end_index)
{
	size_t n = end_index - start_index;
	const char* source = buffer + start_index;

	strncpy(destination, source, n);
	destination[n] = '\0';
}

int get_wanted_columns_index(char** tokens, size_t n, const char* column_name)
{
	for (size_t i = 0; i < n; i++)
	{
		if (strcmp(tokens[i], column_name) == 0)
		{
			return i;
		}
	}

	return -1;
}
