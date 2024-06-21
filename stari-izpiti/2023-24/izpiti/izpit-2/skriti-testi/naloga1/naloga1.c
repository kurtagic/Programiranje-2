#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
#define MAX_CHARS 301

bool isValidMove(char **moves, bool *isMoveDone, int i);

// knight moves
/*
 * a X c X e
 * X b c d X
 * a b X d e
 * X b c d X
 * a X c X e
 */

int move_x[8] = {-2, -2, -1, 1, 2, 2, -1, 1};
int move_y[8] = {-1, 1, 2, 2, -1, 1, -2, -2};

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int n, p;
    fscanf(input, "%d %d", &n, &p);

    char **moves = (char **)malloc(MAX_SIZE * sizeof(char *));
    for (int i = 0; i < MAX_SIZE; i++)
        moves[i] = (char *)malloc(3 * sizeof(char));

    bool *isMoveDone = (bool *)malloc(8 * sizeof(bool));

    char *garbage_buffer = (char *)malloc(MAX_CHARS * sizeof(char));

    for (int i = 0; i < p; i++)
    {
        for (int i = 0; i < 8; i++)
            isMoveDone[i] = false;

        bool isValid = true;
        for (int j = 0; j < MAX_SIZE; j++)
        {
            fscanf(input, "%s", moves[j]);

            if (j == 0)
            {
                continue;
            }

            if (!isValidMove(moves, isMoveDone, j))
            {
                isValid = false;

                fgets(garbage_buffer, MAX_CHARS, input); // read rest of row

                break;
            }

            if (fgetc(input) == '\n')
            {
                break;
            }
        }

        for (int i = 0; i < 8; i++)
        {
            if (!isMoveDone[i])
            {
                isValid = false;

                break;
            }
        }

        fprintf(output, "%d\n", isValid);
    }

    // CLEANUP
    for (int i = 0; i < MAX_SIZE; i++)
        free(moves[i]);
    free(moves);

    free(isMoveDone);
    free(garbage_buffer);

    fclose(input);
    fclose(output);

    return 0;
}

bool isValidMove(char **moves, bool *isMoveDone, int i)
{
    int xDistance = moves[i][0] - moves[i - 1][0];
    int yDistance = moves[i][1] - moves[i - 1][1];

    for (int j = 0; j < 8; j++)
    {
        if (xDistance == move_x[j] && yDistance == move_y[j])
        {
            isMoveDone[j] = true;

            break;
        }
    }

    return abs(xDistance * yDistance) == 2;
}
