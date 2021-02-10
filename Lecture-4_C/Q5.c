#include<stdio.h>
int main()
{
	int a , b , c , d , e;
	printf("Enter any 4-digit number: ");
	scanf("%d",&a);
	b=a%10;
	c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    printf("\n%d",b);
    printf("%d",c);
    printf("%d",d);
    printf("%d",e);

    return 0;
}