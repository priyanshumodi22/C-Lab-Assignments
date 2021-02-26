#include<stdio.h>
int main()
{
     float i=1 , n , sum=0;
     printf("Enter the value of n:");
     scanf("%f",&n);
     while(i<n)
     {
         sum=sum+(i/(i+2.0));            
         i=i+4;
     }
     printf("1/3 + 5/7 + 9/11 +........+(n-2)/n\n");
     printf("Sum = %f",sum);
     
     return 0;
}