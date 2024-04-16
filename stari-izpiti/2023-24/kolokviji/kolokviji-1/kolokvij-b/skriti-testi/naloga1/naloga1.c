
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main() {
    int n;
    scanf("%d", &n);

    int *zaporedje = (int *)malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &zaporedje[i]);
    }

    int status = 0;
    int counter = 1;
    for(int i = 1; i < n; i++)
    {

        if(status == 0)
        {
            if(zaporedje[i] > zaporedje[i - 1])
            {
                status = 1;
            }
            else
            {
                status = -1;
            }

            counter++;
            continue;
        }

        if(status == 1 && zaporedje[i] > zaporedje[i - 1])
        {
            counter++;
            continue;
        }
        
        if(status == -1 && zaporedje[i] < zaporedje[i - 1])
        {
            counter++;
            continue;
        }

        printf("%d\n", counter);
        counter = 2;
        status = (status == 1) ? -1 : 1;
    }
    printf("%d\n", counter);

    return 0;
}
