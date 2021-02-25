#include<stdio.h>
int main()
{
     int i=1 , n , mul=1;
     printf("multiplication of series n*(n-1)*(n-2)*(n-3).........*1\n");
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=n)
     {  
        printf("%d*",i);
        mul=mul*i;
        i++;
     }

     printf("\nAns = %d ",mul);

     return 0;
}