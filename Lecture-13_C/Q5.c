#include<stdio.h>
int main()
{
    int i , j , a , b , t=0;
    printf("Enter no. of rows: ");
    scanf("%d",&a);
    int c=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            b++;
        }
    }
    for(i=c;i>0;i--)
    {
        if(i%2!=0)
        {
            for(j=0;j<i;j++)
            {
                printf("%d ",b);
                b--;
            }
        }
        if(i%2==0)
        {
            t=b-i+1;
            for(j=0;j<i;j++)
            {
                printf("%d ",t);
                t++;
                b--;
            }
        }
        printf("\n");
    }
    return 0;
}