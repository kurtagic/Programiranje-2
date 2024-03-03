#include <stdio.h>

void zgenerirajOdgovor(int min, int max);

int main()
{

  int a;
  int b;

  scanf("%d %d", &a, &b);

  zgenerirajOdgovor(a, b);

  return 0;
}

void zgenerirajOdgovor(int min, int max)
{
  int input;

  scanf("%d", &input);

  while(input != 0)
  {
    int guess = (min + max) / 2;
    
    switch(input)
    {
      case 1:
        min = guess + 1;
        break;
      case -1:
      max = guess - 1;
        break;
    }

    if(min > max || max < min)
    { 
      printf("PROTISLOVJE");
      return;
    }

    scanf("%d", &input);
  }
  
  // narrow downu na eno stevilko
  if(min == max)
  {
    printf("%d", min);
    return;
  } 

  // edina moznost interval
  printf("%d %d", min, max);
  return;
  
}
