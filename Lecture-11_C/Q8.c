#include<stdio.h>
int main()
{
    int num , a , b , c , d;
    printf("Enter the no. : ");
    scanf("%d",&num);
    a=num;                            
    c=num;
    int n=0;
    for(n=0;a>0;n++)
    {
        a=a/10;
    }
    if(n%2==0)
    {
        b=(n/2)-1;
        for(int i=0;i<b;i++)
        {
            c=c/10;
        }
        d=c%100;
        printf("%d",d);
    }
    else
    {
        b=(n/2);
        for(int i=0;i<b;i++)
        {
            c=c/10;
        }
        d=c%10;
        printf("%d",d);

    }

    return 0;
}