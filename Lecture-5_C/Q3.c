/* Minimum no. among 4 no.
*/
#include<stdio.h>
int main()
{
	int a , b , c , d , e , f , s1 , s2 , s;
	printf("Enter any four numbers: ");
	scanf("%d%d%d%d", &a , &b , &c , &d);
	(a<b)&&(a<c)&&(a<d) ? (s=a) : (b<a)&&(b<c)&&(b<d) ? (s=b) : (c<a)&&(c<b)&&(c<d) ? (s=c) : (s=d);

	printf("\nSmallest of the six numbers is: %d", s);
	return 0;
}