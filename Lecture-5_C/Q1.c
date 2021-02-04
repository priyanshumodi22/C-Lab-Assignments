/* Minimum no. among 2 no.
*/
#include<stdio.h>
int main()
{
	int num1 , num2 , c;
	printf("Enter two no. :");
	scanf("%d %d",&num1,&num2);
    c = ( num1 > num2) ? printf("min is %d", num2) : ("min is %d", num1);
    printf("\nSmallest is: %d",c);
    return 0;

}