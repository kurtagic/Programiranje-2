#include <stdio.h>

int main()
{
  int a;
  int b;

  scanf("%d%d", &a, &b);
  
  int mod = (a + b) % 10;

  printf("%d", mod);

  return 0;
}
