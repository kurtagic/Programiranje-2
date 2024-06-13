#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValidDistance(char **buffer, int i);
bool isUnique(char **buffer, int n);

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int n, p;

    fscanf(input, "%d %d", &n, &p);
    fgetc(input); // consume newline

    int boardSize = n * n;
    int maxSize = 2 * boardSize;
    int maxRowSize = 3 * maxSize;

    char **board = (char **)malloc(maxSize * sizeof(char *));
    char *buffer = (char *)malloc(maxRowSize * sizeof(char));

    for (int i = 0; i < maxSize; i++)
    {
        board[i] = (char *)malloc(3 * sizeof(char));
    }

    for (int i = 0; i < p; i++)
    {
        bool isValid = true;
        for (int j = 0; j < maxSize; j++)
        {
            board[j][0] = fgetc(input);
            board[j][1] = fgetc(input);

            if (j == 0)
            {
                fgetc(input);

                continue;
            }

            if (!isValidDistance(board, j))
            {
                fgets(buffer, maxRowSize, input);
                isValid = false;

                break;
            }

            if (!isUnique(board, j))
            {
                fgets(buffer, maxRowSize, input);

                isValid = false;
                break;
            }

            if (fgetc(input) == '\n') // ' ' or '\n'
            {
                if (j + 1 != boardSize)
                {
                    isValid = false;
                }

                break;
            }
        }

        fprintf(output, "%d\n", isValid);
    }

    for (int i = 0; i < maxSize; i++)
    {
        free(board[i]);
    }

    free(board);
    free(buffer);

    fclose(input);
    fclose(output);

    return 0;
}

bool isValidDistance(char **board, int i)
{
    int dx = abs(board[i][0] - board[i - 1][0]);
    int dy = abs(board[i][1] - board[i - 1][1]);

    return dx * dy == 2;
}

bool isUnique(char **board, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(board[i], board[n]) == 0)
        {
            return false;
        }
    }

    return true;
}
