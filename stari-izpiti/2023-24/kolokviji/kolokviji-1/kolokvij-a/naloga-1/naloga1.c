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

    int status = 0;
    int counter = 1;
    int i = 0;

    do
    {
        i++;
        bool jeNarascajoce = zaporedje[i] > zaporedje[i - 1];

        if (status == 0 || (status == 1 && jeNarascajoce) || (status == -1 && !jeNarascajoce))
        {
            if (status == 0)
            {
                status = jeNarascajoce ? 1 : -1;
            }

            counter++;
            continue;
        }

        printf("%d\n", counter);
        counter = 2;
        status = (status == 1) ? -1 : 1;

    } while (i < n);

    return 0;
}
