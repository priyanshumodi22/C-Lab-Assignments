#include<stdio.h>
int main()
{
    int i , j , n=5;
    int c=(n*(n+1)/2);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}