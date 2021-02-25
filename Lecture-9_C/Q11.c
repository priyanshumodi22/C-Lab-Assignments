#include<stdio.h>
int main()
{   
     float i=1 , n ;
     float sum=0;
     printf("Sum of 1/(1*1) + 1/(2*2)+........+1\n");
     printf("Enter the value of n:");
     scanf("%f",&n);
     while(i<=n)
     {
         sum=sum+(1.0/(i*i));
         i++;
     }
     printf("1/(1*1) + 1/(2*2)+........+1/(%f*%f)\n",n,n);
     printf("Sum = %f",sum);
     return 0;
}