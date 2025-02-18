#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 11

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r");
    int n = atoi(argv[2]);

    char **buffer = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        buffer[i] = (char *)malloc(MAX_LEN * sizeof(char));
    }

    int index = 0;
    while (fgets(buffer[index % n], MAX_LEN, input) != NULL)
    {
        index++;
    };

    int offset = index < n ? 0 : index % n;
    int end = index < n ? index : n;

    for (int i = 0; i < end; i++)
    {
        printf("%s", buffer[(offset + i) % n]);
    }

    fclose(input);

    for (int i = 0; i < n; i++)
        free(buffer[i]);
    free(buffer);

    return 0;
}
