#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <time.h>

#include "zlivanje_linked_list.h"

void fillFiles(FILE **files, int n, char *filename);

Node *addNode(Node *start, int value);

void fillArray(int *array, int n, Node *node);
void outputArray(FILE *output, int *array, int n);

int compare(const void *a, const void *b);

#define MAX_NAME 100

int main()
{
    int n;
    scanf("%d", &n);

    Node *node;
    FILE **files = (FILE **)malloc(n * sizeof(FILE *));
    char *filename = (char *)malloc((MAX_NAME + 1) * sizeof(char));

    fillFiles(files, n, filename);

    int length = 0;
    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            int value;
            if (fscanf(files[i], "%d", &value) != 1)
            {
                break;
            }

            node = addNode(node, value);
            length++;
        }
    }
    int *array = (int *)malloc(length * sizeof(int));
    fillArray(array, length, node);

    qsort(array, length, sizeof(int), compare);

    scanf("%s", filename);
    FILE *output = fopen(filename, "w");

    outputArray(output, array, length);

    for (int i = 0; i < n; i++)
    {
        fclose(files[i]);
    }

    free(files);
    free(filename);

    fclose(output);

    return 0;
}

void fillFiles(FILE **files, int n, char *filename)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s", filename);
        files[i] = fopen(filename, "r");

        if (files[i] == NULL)
        {
            return;
        }
    }
}

Node *addNode(Node *start, int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->next = start;

    return node;
}

void fillArray(int *array, int n, Node *node)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = node->value;
        node = node->next;
    }
}

void outputArray(FILE *output, int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        fprintf(output, "%d\n", array[i]);
    }
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
