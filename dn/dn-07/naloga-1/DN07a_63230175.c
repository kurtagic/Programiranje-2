#include <stdio.h>
#include <stdlib.h>

size_t get_binary_tree_height(int *left, int *right, size_t index);

int main()
{
    size_t n;
    scanf("%zu", &n);

    int *left = (int *)malloc(n * sizeof(int));
    int *right = (int *)malloc(n * sizeof(int));

    int l, r;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &r);
        left[i] = (l == 0) ? 0 : i + l;
        right[i] = (r == 0) ? 0 : i + r;
    }

    size_t height = get_binary_tree_height(left, right, 0);

    printf("%zu\n", height);

    free(left);
    free(right);

    return 0;
}

size_t get_binary_tree_height(int *left, int *right, size_t index)
{
    size_t left_height = 0;
    size_t right_height = 0;

    if (left[index] != 0)
    {
        left_height = get_binary_tree_height(left, right, left[index]) + 1;
    }

    if (right[index] != 0)
    {
        right_height = get_binary_tree_height(left, right, right[index]) + 1;
    }

    return left_height > right_height ? left_height : right_height;
}
