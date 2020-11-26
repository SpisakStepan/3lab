#include <stdio.h>
#include <math.h>
float c, a;
int b;
int main(void) 
{
  printf("b = ");
  scanf ("%d",&b);
  printf("c = ");
  scanf ("%f",&c);
  if (c == 5 || c == -5 || c == 0) 
  {
    if (c == 5)
    {
      a=sqrt(b) + 2 * sqrt(c);
      printf("\r\n a = %f\r\n", a);
    }

    else if (c == 0)
    {
      a=(b) / (c + 6);
      printf("\r\n a = %f\r\n", a);
    }
    else if (c == -5)
    {
      a=b + 12 * (c * c * c);
      printf("\r\n a =  %f\r\n", a);
    }
  }
  else {
    printf("\r\nНеможливо обчислити!\r\n");
  }
  return 0;
}
