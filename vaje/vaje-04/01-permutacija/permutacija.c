#include <stdbool.h>
#include <stdio.h>

int tabela[1000000];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a < 0 || a >= n || tabela[a] != 0)
        {
            printf("NE\n");

            return 0;
        }

        tabela[a] = a;
    }

    printf("DA\n");
    return 0;
}
