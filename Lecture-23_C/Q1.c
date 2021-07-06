#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    int rem,ini;
    while(1)
    {
        rem=a%b;
        b=a;
        a=rem;
        if(rem==0)
        {
            return b;
            break;
        }

    }
}
void main()
{
    int a,b;
    printf("\nPlease Enter 1st Number: ");
    scanf("%d",&a);
    printf("\nPlease Enter 1st Number: ");
    scanf("%d",&b);
    printf("%d",gcd(a,b));

    
}