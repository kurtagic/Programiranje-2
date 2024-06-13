#include <stdbool.h>
#include <stdio.h>

void hanoi(int n, int k, char from_rod, char via_rod, char to_rod);

static int move = 0;

int main()
{
    int n, k;

    scanf("%d%d", &n, &k);

    hanoi(n, k, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, int k, char from_rod, char aux_rod, char to_rod)
{
    if (n == 0)
    {
        return;
    }

    hanoi(n - 1, k, from_rod, to_rod, aux_rod);

    move++;

    if (n == 1 && to_rod == 'B' && move > k)
    {
        printf("%d\n", move);
    }

    hanoi(n - 1, k, aux_rod, from_rod, to_rod);
}
