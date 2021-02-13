#include<stdio.h>
int main()
{
     int a , b , c , d;
     printf("\nEnter the number: ");
     scanf("%d",&a);
     if(a>99 && a<1000)
     {
          printf("\nIts a 3-digit number.");
     }
     else
     {
         if(a>999 && a<10000)
         {
          printf("\nIts a 4-digit number.");
         }
     
     else
     {
           if(a>9999 && a<100000)
           {
             printf("\nIts a 5-digit number.");
           }
     
     else
     {
          printf("\nIts invalid input");
     }
     }
     }
     return 0;
}