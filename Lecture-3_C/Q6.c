
#include <stdio.h>

int main()
{
  int a,b ;
  a = 2;
  b = 9;
  printf("The no. to be interchanged are a = %d and b = %d\n", a,b);
  a=a*b;
  b=a/b;
  a=a/b;
  printf("The no. after interchanging are a = %d and b = %d\n", a,b);
  return 0;
}