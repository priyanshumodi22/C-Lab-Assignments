#include<stdio.h>
int main()
{
     int i=1 , n , sum=0;
     printf("N is the value till where u will get sum of odd no.\n");
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=n)
     {   printf("%d+",(2*i)-1);
         sum=sum+(2*i)-1;
         i++;
     }

     printf("\nSum = %d",sum);

     return 0;
}