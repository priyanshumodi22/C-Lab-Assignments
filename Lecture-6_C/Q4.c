#include<stdio.h>
int main()
{	
	char a,b,c,d,e,f,g,h;
	printf("Enter any two char: \n");
	scanf("%c",&a);
	scanf("%c",&h);
	b = a & 0XF0;
	
	c = a & 0X0F;
	
	c=c<<4;
	
	d = h & 0XF0;
	
	d=d>>4;
	
	e = h & 0X0F;
	
	f = b|d;
	
	g = c|e;
	
	printf("%d\n%d",f,g);
	return 0;
}