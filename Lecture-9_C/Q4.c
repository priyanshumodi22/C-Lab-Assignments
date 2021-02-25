#include<stdio.h>
int main()
{
     int num , i=1 , a=7;
     printf("Numbers which are divisible by 7 in between 1 to 100 are: \n\n");
     while(i<=100)
     {
       if(i%7==0)
       {
           printf("%d  ",i);
       }
       i++;
     }
       
    return 0;
}