#include <stdio.h>
int main()
{
	int a, /* b, */ c, d, e, f;
	printf("Enter an integer: \n");
	scanf("%d", &a);

	c = a & 0X00FF0000;
	c = c >> 8;
	d = a & 0X0000FF00;
	d = d << 8;
	e = a & 0XFF0000FF;

	f = e | c | d;
	printf("%X ", f);
	return 0;
}