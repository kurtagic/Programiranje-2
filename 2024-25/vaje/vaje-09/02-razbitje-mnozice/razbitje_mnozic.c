#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void printSubset(int *set, int n, bool *isSubset);
void partition(int *set, int n, bool *isSubset, int index, int subset1, int subset2);

int main()
{
    int n;
    scanf("%d", &n);

    int *set = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }

    bool *isSubset = (bool *)malloc(n * sizeof(bool));

    isSubset[0] = true;

    partition(set, n, isSubset, 1, set[0], 0);

    return 0;
}

void partition(int *set, int n, bool *isSubset, int index, int subset1, int subset2)
{
    if (index == n)
    {
        if (subset1 == subset2)
        {
            printSubset(set, n, isSubset);
        }

        return;
    }

    isSubset[index] = true;
    partition(set, n, isSubset, index + 1, subset1 + set[index], subset2);

    isSubset[index] = false;
    partition(set, n, isSubset, index + 1, subset1, subset2 + set[index]);
}

void printSubset(int *set, int n, bool *isSubset)
{
    printf("{");

    for (int i = 0; i < n; i++)
    {
        if (!isSubset[i])
        {
            continue;
        }

        if (i != 0)
        {
            printf(", ");
        }

        printf("%d", set[i]);
    }

    printf("}\n");
}
