#include<stdio.h>
int main()
{
	 int a , b , c , d , e;
	 printf("Enter any integer: \n");
	 scanf("%d",&a);
	 b = a & 0X000000FF;
	
	 c = a & 0X0000FF00;
	 c = c >> 8;
	 
	 d = a & 0X00FF0000;
	 d = d >> 16;
	 
	 e = a & 0XFF000000;
	 e = e >> 24;
	 
	 printf("%X %X %X %X\n",e,d,c,b);

	 return 0;
}