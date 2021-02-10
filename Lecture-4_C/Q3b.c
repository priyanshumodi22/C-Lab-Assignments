//For float values
#include<stdio.h>
int main()
{
	float a , b , c;
	printf("Enter the values (float) of a & b : \n");
	scanf("%f",&a);
	scanf("%f",&b);
    c= a*a*a + b*b*b + 3*a*b*(a+b);
    printf("So, (a+b)^3 = %f",c);
    return 0;
	
}