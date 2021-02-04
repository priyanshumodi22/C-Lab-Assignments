/* To check the no. if its reverse is equal to the original no.
*/
#include<stdio.h>
int main()
{
	 int num , a , b , c , d , rev;
	 printf("Enter any 4-digit integer:");
	 scanf("%d",&num);
	 a=num/1000;
	 b=(num%1000)/100;
	 c=(num%100)/10;
	 d=num%10;
	 rev=d*1000+c*100+b*10+a;
	 (num==rev) ? printf("It is a palindrome no."): printf("Its not a palindrome");

	 return 0;

}