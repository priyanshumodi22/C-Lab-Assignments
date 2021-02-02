#include<stdio.h>
int main()
{
	int value;
	printf("Enter the interger type literal:");
	scanf("%d",&value);
	printf("\nDecimal value is: %d",value);
	printf("\nOctal value is: %o",value);
	printf("\nHexadecimal value is: %x",value);

	return 0;

}