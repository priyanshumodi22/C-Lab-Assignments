#include<stdio.h>
int main()
{
     int i=1 , n , sum=0;
     printf("N is the value till where u have to find out sum.\n");
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=n)
     {   printf("%d+",i);
         
         sum=sum+i;
         i++;
     }

     printf("\nSum = %d",sum);

     return 0;
}