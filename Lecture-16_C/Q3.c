#include <stdio.h>
int main()
{
  int i,j,n,temp;
  printf("Enter even size of the array \n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
     printf("\nEnter element in position %d  ",i);
     scanf("%d",&a[i]);
  }
  printf("\nRequired pattern");
  printf("\n");
  for(i=0;i<n/2;i++)
  {
    for(j=n/2;j<n;j++)
    {
      if(i%2==0)
      {
        if(i+j==n-2)
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
      else
      {       
        if(i+j==n)
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}   
