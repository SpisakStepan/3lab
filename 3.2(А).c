#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
  float A, B, C;
  printf("A = ");
  scanf ("%f",&A);
  printf("B = ");
  scanf ("%f",&B);
  printf("C = ");
  scanf ("%f",&C);

  if (A<B&&B<C)
  {
    A *= A;
    B *= B;
    C *= C;
    printf("\r\n A = %f\r\n", A);
    printf("\r\n B = %f\r\n", B);
    printf("\r\n C = %f\r\n", C);
    
  }
  else {
    A = 1 / A;
    B = 1 / B;
    C = 1 / C;
     printf("\r\n A = %f\r\n", A);
    printf("\r\n B = %f\r\n", B);
    printf("\r\n C = %f\r\n", C);
  }
}
