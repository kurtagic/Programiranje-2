#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 301

bool isValidMove(char *current, char *previous);
void checkPoteza(char *current, char *previous, bool *movesDone);

int xPoteze[8] = {-2, -2, -1, 1, 2, 2, -1, 1};
int yPoteze[8] = {-1, 1, 2, 2, -1, 1, -2, -2};

int main(int argc, char **argv)
{
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int n, p;
    fscanf(input, "%d %d\n", &n, &p);

    char **moves = (char **)malloc(MAX_SIZE * sizeof(char *));
    for (int i = 0; i < MAX_SIZE; i++)
        moves[i] = (char *)malloc(3 * sizeof(char));

    bool *possibleMoves = (bool *)malloc(8 * sizeof(bool));
    for (int i = 0; i < 8; i++)
        possibleMoves[i] = false;

    for (int i = 0; i < p; i++)
    {
        bool isValid = true;
        for (int i = 0; i < 8; i++)
            possibleMoves[i] = false;

        for (int j = 0; j < MAX_SIZE; j++)
        {
            fscanf(input, "%c%c", &moves[j][0], &moves[j][1]);

            moves[j][2] = '\0';

            if (j > 0)
            {
                if (!isValidMove(moves[j], moves[j - 1]))
                {
                    isValid = false;
                }

                checkPoteza(moves[j], moves[j - 1], possibleMoves);
            }

            if (fgetc(input) == '\n')
            {
                break;
            }
        }

        for (int i = 0; i < 8; i++)
        {
            if (!possibleMoves[i])
            {
                isValid = false;

                break;
            }
        }

        fprintf(output, "%d\n", isValid);
    }

    for (int i = 0; i < MAX_SIZE; i++)
        free(moves[i]);
    free(moves);
    free(possibleMoves);

    fclose(input);
    fclose(output);

    return 0;
}
bool isValidMove(char *current, char *previous)
{
    float xDistance = abs(current[0] - previous[0]);
    float yDistance = abs(current[1] - previous[1]);

    return xDistance * yDistance == 2;
}

void checkPoteza(char *current, char *previous, bool *possibleMoves)
{
    int x = current[0] - previous[0];
    int y = current[1] - previous[1];

    for (int i = 0; i < 8; i++)
    {
        if (x == xPoteze[i] && y == yPoteze[i])
        {
            possibleMoves[i] = true;

            break;
        }
    }
}
