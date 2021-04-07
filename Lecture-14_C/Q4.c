#include<stdio.h>
int main()
{
    int a[]={2,9,6,4,8,7,2};
    int i,sum=0;
    printf("Elements in array are: ");
    for(i=0;i<7;i++)
    {  
        printf("%d ",a[i]);
       if(a[i]%2!=0)
      {
        sum=sum+a[i];
      }
    }
    printf("\nOdd no. are: ");
    for(i=0;i<7;i++)
    {
      if(a[i]%2!=0)
      {
        printf("%d ",a[i]);
      }
    }
    printf("\nSum of odd no. =  %d ",sum);
    return 0;
}