#include <stdio.h>
#include <limits.h>

int main()
{
  int n;

  scanf("%d", &n);

  int prvoNajvecje = INT_MIN;
  int drugoNajvecje = INT_MIN;

  for(int i = 0; i < n; i++)
  {
    int a;
    scanf("%d", &a);
    
    if(a > prvoNajvecje)
    {
      drugoNajvecje = prvoNajvecje;
      prvoNajvecje = a;
      continue;
    }

    if(a > drugoNajvecje)
    {
      drugoNajvecje = a;
    }
  }

  printf("%d", drugoNajvecje);

  return 0;
}


