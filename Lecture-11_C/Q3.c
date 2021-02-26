#include <stdio.h>
int main()
{
    //part1
    int i,j,n;
    printf("\nenter the limit of the series:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
   { 
     printf("%d ",i);
   }
    for(j=i;j>=1;j--)
    {
      printf("%d ",j);
    }
    
    return 0;
}