#include<stdio.h>
int main()
{
     int a , b , c , d;
     printf("\nEnter the number: ");
     scanf("%d",&a);
     if(a>99 && a<1000)
     {
          printf("\nIts a 3-digit number.");
          b=(a/10)%10;
          printf("The middle term is : %d",b);
     }
     else
     {
         if(a>999 && a<10000)
         {
          printf("\nIts a 4-digit number.");
          c=(a/10)%100;
          printf("The middle term is : %d",c);
         }
     
     else
     {
           if(a>9999 && a<100000)
           {
             printf("\nIts a 5-digit number.");
             d=(a/100)%10;
             printf("\nIts middle term is : %d",d);
           }
     
     else
     {
          printf("\nIts invalid input");
     }
     }
     }
     return 0;
}