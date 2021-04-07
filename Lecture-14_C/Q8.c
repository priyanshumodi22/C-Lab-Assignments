#include<stdio.h>
int main()
{
    int i , n , c=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n], x=0 , y=1;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        c=x+y;
        a[i]=c;
        x=y;
        y=c;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}