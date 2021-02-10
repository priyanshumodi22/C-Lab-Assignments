/* Enter a real no. to roundoff it to 2 decimal places.
*/
#include<stdio.h>
int main()
{
	float a;
	int b,num1,num2,num3,num4,num5,num6;
	printf("Enter a number : ");
	scanf("%f",&a);
	b=a*10000;
	num1=b%10;
	num2=(b/10)%10;
	num3=(b/100)%10;
	num4=(b/1000)%10;
	num5=(b/10000)%10;
	num6=(b/100000)%10;
	int last2=b%100;
	(last2<50) ? printf("\nThe no. is : %d.%d",(num6*10+num5),(num4*1000+num3*100)) : 
	printf("\nThe no. is : %d.%d", (num6*10+num5),(num4*1000+(++num3)*100));

	return 0;
}