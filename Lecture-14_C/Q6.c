#include<stdio.h>
int main()
{
    int a[]={1,9,6,7,8,4,3,2};
    int i,n,d;
    printf("Original array: ");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNew array after switching: ");
    for(i=0;i<4;i++)
    {
      d=a[i];
      a[i]=a[i+4];
      a[i+4]=d;
    }
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
