#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10E3 + 1

int main()
{
    char *buffer = (char *)malloc(MAX_SIZE * sizeof(char));
    scanf("%s", buffer);

    int length = strlen(buffer);
    int offset = length % 3;

    for (int i = 0; i < length; i++)
    {
        if (i > 0 && (i - offset) % 3 == 0)
        {
            printf(".");
        }

        printf("%c", buffer[i]);
    }

    printf("\n");

    free(buffer);

    return 0;
}
