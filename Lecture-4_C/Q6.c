
#include<stdio.h>
int main()
{
    int a , b , c , d , e , f ;
    printf("Enter the 7 digit number: ");
    scanf("%d",&a);
    b = (a/10000)%10;
    printf("Middle 3 digit is of %d is %d",a,b);
    c = (a/1000)%10;
    printf("%d",c);
    d = (a/100)%10;
    printf("%d\n",d);
    return 0;

 }