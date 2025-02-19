#include <stdbool.h>
#include <stdio.h>

#define WHITE 1
#define BLACK -1
#define UNSET 0

void rekurz(int n, int k, bool isWhiteTurn, int steps);
void printTrackrecord(int steps);

static int trackrecord[50];
static int winner = UNSET;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    rekurz(n, k, true, 0);
    printf("%s", winner == BLACK ? "CRNI\n" : "");

    return 0;
}

void rekurz(int n, int k, bool isWhiteTurn, int steps)
{
    if (n <= 0)
    {
        if (winner == UNSET)
        {
            winner = !isWhiteTurn ? WHITE : BLACK;
        }

        if (!isWhiteTurn && winner == WHITE)
        {
            printTrackrecord(steps);
        }

        return;
    }

    if (winner == BLACK)
    {
        return;
    }

    int start = isWhiteTurn ? 1 : (k < n ? k : n);
    int end = isWhiteTurn ? k : 1;
    int increment = isWhiteTurn ? 1 : -1;

    for (int i = start; isWhiteTurn ? (i <= end && i <= n) : i >= end; i += increment)
    {
        trackrecord[steps] = i;
        rekurz(n - i, k, !isWhiteTurn, steps + 1);
    }
}

void printTrackrecord(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        printf(i % 2 == 0 ? "%d" : "[%d]", trackrecord[i]);

        if (i < steps - 1)
        {
            printf(" -> ");
        }
    }

    printf("\n");
}
