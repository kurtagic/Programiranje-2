#include <stdio.h>
#include <stdlib.h>

#define MAX_FILESIZE 21

void binaryTree(int *left, int *right, int index, int k, int current);

int main()
{
    char *input_filename = (char *)malloc(MAX_FILESIZE * sizeof(char));
    int n, k;

    scanf("%s %d %d", input_filename, &n, &k);

    FILE *input = fopen(input_filename, "rb");

    int max_size = 2 * n;

    int *buffer = (int *)malloc(max_size * sizeof(int));
    int *left = (int *)malloc((n + 1) * sizeof(int));
    int *right = (int *)malloc((n + 1) * sizeof(int));

    for (int i = 0; i < max_size; i++)
    {
        buffer[i] = fgetc(input);
    }

    for (int i = 1; i < n + 1; i++)
    {
        left[i] = buffer[(2 * i) - 2];
        right[i] = buffer[(2 * i) - 1];
    }

    binaryTree(left, right, 0, k, 1);

    // CLEANUP
    free(input_filename);
    free(buffer);
    free(left);
    free(right);

    fclose(input);

    return 0;
}

void binaryTree(int *left, int *right, int index, int k, int current)
{
    if (index == k)
    {
        printf("%d\n", current);

        return;
    }

    if (current == 0)
    {
        return;
    }

    if (left[current] != 0)
    {
        binaryTree(left, right, index + 1, k, left[current]);
    }

    if (right[current] != 0)
    {
        binaryTree(left, right, index + 1, k, right[current]);
    }

    return;
}
