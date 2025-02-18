#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define EMPTY 0
#define VITEZ 1
#define ATTACKED -1
#define OVIRA -2

int rekurz(int **board, int n, int row, int col);
void placeKnight(int **board, int n, int row, int col);
void removeKnight(int **board, int n, int row, int col);

int directions_x[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int directions_y[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    int **board = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        board[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            board[i][j] = EMPTY;
        }
    }

    for (int i = 0; i < k; i++)
    {
        int y, x;
        scanf("%d %d", &y, &x);
        board[y][x] = OVIRA;
    }

    printf("%d\n", rekurz(board, n, 0, 0));

    for (int i = 0; i < n; i++)
    {
        free(board[i]);
    }
    free(board);

    return 0;
}

int rekurz(int **board, int n, int row, int col)
{
    if (col == n)
    {
        col = 0;
        row++;
    }
    if (row == n)
    {
        return 0;
    }

    if (board[row][col] != EMPTY)
    {
        return rekurz(board, n, row, col + 1);
    }

    placeKnight(board, n, row, col);
    int placement = 1 + rekurz(board, n, row, col + 1);

    // backtrack
    removeKnight(board, n, row, col);
    int no_placement = rekurz(board, n, row, col + 1);

    return placement > no_placement ? placement : no_placement;
}

void placeKnight(int **board, int n, int row, int col)
{
    board[row][col] = VITEZ;

    for (int i = 0; i < 8; i++)
    {
        int yi = row + directions_y[i];
        int xi = col + directions_x[i];

        if (xi < 0 || xi >= n || yi < 0 || yi >= n || board[yi][xi] != EMPTY)
        {
            continue;
        }

        board[yi][xi] = ATTACKED;
    }
}

void removeKnight(int **board, int n, int row, int col)
{
    board[row][col] = EMPTY;
    for (int i = 0; i < 8; i++)
    {
        int yi = row + directions_y[i];
        int xi = col + directions_x[i];

        if (xi < 0 || xi >= n || yi < 0 || yi >= n || board[yi][xi] == OVIRA)
        {
            continue;
        }

        bool isStillAttacked = false;
        for (int j = 0; j < 8; j++)
        {
            int yj = yi + directions_y[j];
            int xj = xi + directions_x[j];
            if (xj >= 0 && xj < n && yj >= 0 && yj < n && board[yj][xj] == VITEZ)
            {
                isStillAttacked = true;
                break;
            }
        }

        if (!isStillAttacked)
        {
            board[yi][xi] = EMPTY;
        }
    }
}
