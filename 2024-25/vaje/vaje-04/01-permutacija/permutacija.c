#include <stdbool.h>
#include <stdio.h>

bool jeClenPermutacije(int *array, int len, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int tabela[n];

    for (int i = 0; i < n; i++)
    {
        tabela[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (!jeClenPermutacije(tabela, n, a))
        {
            printf("NE\n");

            return 0;
        }

        tabela[a] = a;
    }

    printf("DA\n");

    return 0;
}

bool jeClenPermutacije(int *array, int len, int n)
{
    return n >= 0 && n < len && array[n] == -1;
}
