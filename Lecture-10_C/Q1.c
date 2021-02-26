#include<stdio.h>
int main()
{
     int i=0 , a , sum=0;
     printf("Enter the value of n: ");
     while(i<6)
     {  scanf("%d",&a);
         if(a%3==0 && a%5==0)
         {
             sum=sum+a;
             
         }
         i++;
     }

     printf("Sum = %d",sum);

     return 0;
}