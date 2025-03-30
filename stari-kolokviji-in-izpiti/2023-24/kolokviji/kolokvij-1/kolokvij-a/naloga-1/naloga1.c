#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int* zaporedje = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zaporedje[i]);
    }

    bool is_ascending = true;
    int length = 1;
    for (int i = 1; i < n; i++)
    {
        bool is_neighbor_ascending = zaporedje[i] > zaporedje[i - 1];
        if ((is_ascending && is_neighbor_ascending) || (!is_ascending && !is_neighbor_ascending))
        {
            length++;
            continue;
        }

        printf("%d\n", length);
        is_ascending = !is_ascending;
        length = 2;
    }

    printf("%d\n", length);

    free(zaporedje);

    return 0;
}