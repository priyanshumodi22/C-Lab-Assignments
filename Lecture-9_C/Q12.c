#include<stdio.h>
int main()
{
     float i=0 , n ;
     float sum=0;
     printf("Sum 0f 0/1 + 1/2 + 2/3 +........+(n-1)/n\n");
     printf("Enter the value of n:");
     scanf("%f",&n);
     while(i<n)
     {
         sum=sum+(i/(i+1.0));            
         i++;
     }
     printf("0/1 + 1/2 + 2/3 +........+(n-1)/n\n");
     printf("Sum = %f",sum);
     return 0;
}