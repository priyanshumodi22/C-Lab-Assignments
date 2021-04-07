#include <stdio.h>
int main()
{
  int i,n;
  printf("Enter even size of the array \n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
     printf("\nEnter element in position %d  ",i);
     scanf("%d",&a[i]);
  }
  printf("\nRequired pattern:\n");
  for(i=(n/2-1);i>=0;i--)
  {
    printf("%d ",a[i]);
  }
  for(i=(n-1);i>=n/2;i--)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}
