#include<stdio.h>
int main()
{
     int a , b , c , d , max2;
     printf("Enter any 4 numbers: ");
     scanf("%d%d%d%d",&a,&b,&c,&d);
     if(a>b && a>c)
     {
          if(b>c)
          {
               printf("2nd highest number is: %d",b);
          }
          else
          {
               printf("2nd highest number is: %d",c);
          }
     }
     else if(b>a && b>c)
    {
         if(a>c)
         {
              printf("2nd highest number is: %d",a);
         }
         else
         {
              printf("2nd highest number is: %d",c);
         }

    }
    else if(a>b)
    {
         printf("2nd highest number is: %d",a);
    }
        
         else
         {
              printf("2nd highest number is: %d",b);
         }

    
    printf("\nProgram is successfully executed :)");

    return 0;
}