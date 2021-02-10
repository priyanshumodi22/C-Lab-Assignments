#include<stdio.h>
int main()
{
	int a , b , c , d , e;
	printf("Enter the number:");
	scanf("%d",&a);
	b=a%10;
	c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    printf("\n%d",e);
    printf("\n%d",d);
    printf("\n%d",c);
    printf("\n%d",b);

    return 0;
}