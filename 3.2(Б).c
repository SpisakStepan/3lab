#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
  int number;
  printf ("\r\nnumber = ");
  scanf ("%d", &number);
  switch (number)
  {
  case 11: printf ("одинадцять\n"); break;
  case 12:printf("дванадцять\n"); break;
      case 13:printf ("тринадцять\n"); break;
      case 14:printf ("чотирнадцять\n"); break;
      case 15:printf ("п'ятнадцять\n"); break;
      case 16:printf ("шістнадцять\n"); break;
      case 17:printf ("сімнадцять\n"); break;
      case 18:printf ("вісімнадцять\n"); break;
      case 19:printf ("дев'ятнадцять\n"); break;
      case 20:printf ("двадцять\n"); break;
      
      default:printf ("Число може бути тільки в тіапазоні від 10 до 20\n") ;

  }
  return 0;
}
