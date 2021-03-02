#include <stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=3;i++)
  {
  for(j=i;j>=1;j--)
  { 
       printf("%d ",j);
  }
    printf("\n");
  }
    return 0;
}