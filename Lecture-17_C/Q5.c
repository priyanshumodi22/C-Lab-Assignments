/*print series 2 4 8 14 22 32...*/
#include<stdio.h>
int main()
{
    int a=2,b=2,n;
    printf("Enter the no. of terms of the series: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a+b;
        b=b+2;
    }
    return 0;
}