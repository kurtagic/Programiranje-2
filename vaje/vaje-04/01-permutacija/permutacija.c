#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_unique_element_of_set(bool *elements, int n, int a);

int main()
{
    int n;
    scanf("%d", &n);

    bool* elements = (bool*)malloc(n * sizeof(bool));
    for (size_t i = 0; i < n; i++)
    {
        elements[i] = false;
    }

    bool is_permutation = true;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (!is_unique_element_of_set(elements, n, a))
        {
            is_permutation = false;

            break;
        }

        elements[a] = true;
    }

    printf(is_permutation ? "DA" : "NE");
    printf("\n");

    free(elements);

    return 0;
}

bool is_unique_element_of_set(bool *elements, int n, int a)
{
    return a >= 0 && a < n && elements[a] == false;
}
