#include <stdio.h>
#include <stdlib.h>

int getBinaryTreeHeight(int *left, int *right, int index);

int main()
{
    int n;
    scanf("%d", &n);

    int *left = (int *)malloc(n * sizeof(int));
    int *right = (int *)malloc(n * sizeof(int));

    int l, r;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &r);
        left[i] = (l == 0) ? 0 : i + l;
        right[i] = (r == 0) ? 0 : i + r;
    }

    printf("%d\n", getBinaryTreeHeight(left, right, 0));

    free(left);
    free(right);

    return 0;
}

int getBinaryTreeHeight(int *left, int *right, int index)
{
    int leftHeight = 0;
    int rightHeight = 0;

    if (left[index] != 0)
    {
        leftHeight = getBinaryTreeHeight(left, right, left[index]) + 1;
    }

    if (right[index] != 0)
    {
        rightHeight = getBinaryTreeHeight(left, right, right[index]) + 1;
    }

    return leftHeight > rightHeight ? leftHeight : rightHeight;
}
