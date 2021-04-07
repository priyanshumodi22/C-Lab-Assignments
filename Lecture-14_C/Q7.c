#include<stdio.h>
int main()
{
    int a[]={1,2,9,6,7,8,6,4};
    int b[]={5,9,6,2,7,8,4,3};
    int i,n,d;
    printf("1st array: ");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n2nd array: ");
    for(i=0;i<8;i++)
    {
        printf("%d ",b[i]);
    }
    for(i=0;i<4;i++)
    {
      d=a[i];
      a[i]=b[i+4];
      b[i+4]=d;
    }

    for(i=0;i<4;i++)
    {
      d=a[i+4];
      a[i+4]=b[i];
      b[i]=d;
    }
    printf("\nConverting...");
    printf("\n1st array is: ");
    for(i=0;i<8;i++)
    {
     printf("%d ",a[i]);
    }
     printf("\n");
     printf("2nd array is ");
    for(i=0;i<8;i++)
    {
      printf("%d ",b[i]);
    }

  return 0;
}