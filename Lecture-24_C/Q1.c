#include<stdio.h>
#include<stdlib.h>
void swap(int a ,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int gcd(int a,int b)
{
    int r=0;
        if(a%b!=0)
        {
            r=a%b;
            a=b;
            b=r;
            return gcd(a,b);
        }
        else
        return b;
}
void main()
{
    int num1,num2;
    printf("\nPlease Enter The First Number: ");
    scanf("%d",&num1);
    printf("\nPlease Enter The Second Number: ");
    scanf("%d",&num2);
    printf("\nThe Gcd Is :%d ",gcd(num1,num2));
}