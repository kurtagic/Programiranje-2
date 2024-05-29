#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *zaporedje = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zaporedje[i]);
    }

    bool jeNarascajoce = true;
    int counter = 1;
    for (int i = 1; i < n; i++)
    {
        bool jeSosedNarascajoc = zaporedje[i] > zaporedje[i - 1];
        if ((jeNarascajoce && jeSosedNarascajoc) || (!jeNarascajoce && !jeSosedNarascajoc))
        {
            counter++;
            continue;
        }

        printf("%d\n", counter);
        jeNarascajoce = !jeNarascajoce;
        counter = 2;
    }

    printf("%d\n", counter);

    return 0;
}
