#include <stdio.h>
int main()
{	
	char a;
	int c, d ,i;
	printf("Enter an unsigned char:\n");
	scanf("%c",&a);
	c=a&0XF0;
	c=c>>4;
	d=a&0X0F;
	printf("The left and rigit 4-bits in hexa are: %x & %x resp.\n",c,d);
	d<<4;
    i=d|c;
    printf("After interchanging : %x resp.\n", i);
    return 0;
}