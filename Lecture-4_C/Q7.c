#include<stdio.h>
int main()
{
	int n=19327 , n9 , n7 , n3 , n2 , n1;
	n9=(n/1000)%10;
	n7=n%10;
	n3=(n/100)%10;
	n2=(n/10)%10;
	n1=(n/10000)%10;
	printf("The 1st pattern is : %d%d%d%d%d",n9,n1,n3,n7,n2);
	printf("\nThe 2nd pattern is : %d%d%d%d%d",n2,n7,n3,n1,n9);
	printf("\nThe 3rd pattern is : %d%d%d%d%d",n7,n2,n3,n9,n1);

	return 0;
	
}