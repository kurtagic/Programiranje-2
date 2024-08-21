#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void rekurz(int *zaporedje, bool *isUSed, int n, int k, int targetSumForPodmnozica);
void fillPodmnozica(int *podmnozica, int *len, int *zaporedje, bool *isUsed, int n, int k, int targetSumForPodmnozica);
void printPodmnozica(int *podmnozica, int n);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int *zaporedje = (int *)malloc(n * sizeof(int));

    int a, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        zaporedje[i] = a;
        sum += a;
    }

    int targetSumForPodmnozica = sum / k;

    bool *isUsed = (bool *)malloc(n * sizeof(bool));
    for (int i = 0; i < n; i++)
        isUsed[i] = false;

    rekurz(zaporedje, isUsed, n, k, targetSumForPodmnozica);

    // CLEANUP
    free(zaporedje);
    free(isUsed);

    return 0;
}

void rekurz(int *zaporedje, bool *isUsed, int n, int k, int targetSumForPodmnozica)
{
    int *podmnozica = (int *)malloc(n * sizeof(int));
    int *len = 0;
    printf("{");
    for (int i = 0; i < k; i++)
    {
        fillPodmnozica(podmnozica, len, zaporedje, isUsed, n, k, targetSumForPodmnozica);
        printPodmnozica(podmnozica, *len);

        printf(i + 1 < k ? ", " : "");
    }

    printf("}\n");

    free(podmnozica);
}

void fillPodmnozica(int *podmnozica, int *len, int *zaporedje, bool *isUsed, int n, int k, int targetSumForPodmnozica)
{
    for (int i = 0; i < n; i++)
    {
        if (isUsed[i])
        {
            continue;
        }
        if (isPodmnozicaFull(podmnozica, len, targetSumForPodmnozica))
        {
            return;
        }

        podmnozica[*len] = zaporedje[i];
        isUsed[i] = true;
        fillPodmnozica(podmnozica, len + 1, zaporedje, isUsed, n, k, targetSumForPodmnozica);
        isUsed[i] = false;
    }
}

bool isPodmnozicaFull(int *podmnozica, int *len, int targetSumforPodmnozica)
{
    for (int i = 0; i < *len; i++)
}

void printPodmnozica(int *podmnozica, int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d", podmnozica[i]);
        printf(i + 1 < n ? ", " : "");
    }
    printf("}");
}
