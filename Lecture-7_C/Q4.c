#include<stdio.h>
int main()
{
     int a ;
     printf("Enter an number to check whether it is +ve or -ve: ");
     scanf("%d",&a);
     if(a<0)
     {
          printf("The number is -ve.");
     }
     else
     printf("The number is +ve.");

     return 0;
}