//For int values
#include<stdio.h>
int main()
{
	int a , b , c;
	printf("Enter the values (integer) of a & b : \n");
	scanf("%d",&a);
	scanf("%d",&b);
    c= a*a*a + b*b*b + 3*a*b*(a+b);
    printf("So, (a+b)^3 = %d",c);
    return 0;
	
}