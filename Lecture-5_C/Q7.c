/* Enter a no. to roundoff it.
*/
#include<stdio.h>
int main()
{
	 int a , b , c;
	 printf("Enter any 4 digit number: ");
	 scanf("%d",&a);
	 b=a%10;
	 c=a/10;
	 (b>=5) ? printf("%d",(++c)*10) : printf("%d",c*10);

	 return 0;

}