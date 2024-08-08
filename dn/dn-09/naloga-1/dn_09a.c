#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void rekurz(int **podmnozice, int *zaporedje, int n, int k, int podmnoziceIndex, int elementPodmnoziceIndex,
            int zaporedjeIndex);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int *zaporedje = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &zaporedje[i]);

    bool *isZapordje = (bool *)malloc(n * sizeof(bool));
    for (int i = 0; i < n; i++)
        isZapordje[i] = false;

    int **podmnozice = (int **)malloc(k * sizeof(int *));
    for (int i = 0; i < k; i++)
        podmnozice[i] = (int *)malloc((n - k + 1) * sizeof(int));

    rekurz(podmnozice, zaporedje, n, k, 0, 0, 0);

    // CLEANUP
    free(zaporedje);
    free(isZapordje);
    for (int i = 0; i < k; i++)
        free(podmnozice[i]);
    free(podmnozice);

    return 0;
}

void rekurz(int **podmnozice, int *zaporedje, int n, int k, int podmnoziceIndex, int elementPodmnoziceIndex,
            int zaporedjeIndex)
{

    for (int i = 0; i < n; i++)
    {
        podmnozice[podmnoziceIndex][elementPodmnoziceIndex] = zaporedje[zaporedjeIndex];
        rekurz(podmnozice, zaporedje, n, k, (podmnoziceIndex + 1) % k, elementPodmnoziceIndex + 1, zaporedjeIndex + 1);
    }
}
