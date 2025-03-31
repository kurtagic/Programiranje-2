#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_valid_distance(char** buffer, size_t i);
bool is_unique(char** buffer, size_t n);

int main(int argc, char** argv)
{
    FILE* input_file = fopen(argv[1], "r");
    FILE* output_file = fopen(argv[2], "w");

    size_t n, p;

    fscanf(input_file, "%zu %zu", &n, &p);

    size_t board_size = n * n;
    size_t string_size = 2 + 1;
    size_t max_size = 2 * board_size;
    size_t max_row_size = string_size * max_size;

    char** board = (char**)malloc(max_size * sizeof(char*));
    char* buffer = (char*)malloc(max_row_size * sizeof(char));

    for (size_t i = 0; i < max_size; i++)
    {
        board[i] = (char*)malloc(string_size * sizeof(char));
    }

    fgetc(input_file); // consume newline
    for (size_t i = 0; i < p; i++)
    {
        bool is_valid = true;
        for (size_t j = 0; j < max_size; j++)
        {
            board[j][0] = fgetc(input_file);
            board[j][1] = fgetc(input_file);

            if (j == 0)
            {
                fgetc(input_file); // consume newline

                continue;
            }

            if (!is_valid_distance(board, j))
            {
                fgets(buffer, max_row_size, input_file); // consume rest of row
                is_valid = false;

                break;
            }

            if (!is_unique(board, j))
            {
                fgets(buffer, max_row_size, input_file); // consume rest of row

                is_valid = false;
                break;
            }

            if (fgetc(input_file) == '\n') // ' ' or '\n'
            {
                if (j + 1 != board_size)
                {
                    is_valid = false;
                }

                break;
            }
        }

        fprintf(output_file, "%d\n", is_valid);
    }

    for (size_t i = 0; i < max_size; i++)
    {
        free(board[i]);
    }

    free(board);
    free(buffer);

    fclose(input_file);
    fclose(output_file);

    return 0;
}

bool is_valid_distance(char** board, size_t i)
{
    int dx = abs(board[i][0] - board[i - 1][0]);
    int dy = abs(board[i][1] - board[i - 1][1]);

    return dx * dy == 2;
}

bool is_unique(char** board, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (strcmp(board[i], board[n]) == 0)
        {
            return false;
        }
    }

    return true;
}
