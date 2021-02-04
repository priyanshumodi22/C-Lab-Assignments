/* Minimum no. among 6 no.
*/
#include<stdio.h>
int main()
{
	 int a , b , c , d , e , f , g , h , i;
	 printf("Enter 6 numbers :");
	 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 g = (a<b) ? ((a<c) ? a:c) : ((b<c) ? b:c);
	 h = (e<d) ? ((e<f) ? e:f) : ((d<f) ? d:f);
	 i = (g<h) ? g:h;

	 printf("Smallest no. is: %d",i);
	 return 0;

}