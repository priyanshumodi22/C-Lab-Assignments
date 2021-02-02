#include<stdio.h>

int main()
{
     float a , b , c , d;
     printf("Enter date at which you were born:");
     scanf("%f", &a);
     printf("\nEnter the month at which you were born:");
     scanf("%f", &b);
     printf("\nEnter the year at which you were born:");
     scanf("%f", &c);
     printf("\nEnter current year:");
     scanf("%f", &d);

     printf("\nNo. of years: %f ",(d-c)+(b/12)+(a/365));

     printf("\nNo. of months: %f ",b+((d-c)*12)+(a/31));

     printf("\nNo. of days: %f ",a+(b*12)+(d-c)*365);

     return 0;
}