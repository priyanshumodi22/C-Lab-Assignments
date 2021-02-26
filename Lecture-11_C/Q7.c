#include<stdio.h>
int main()
{
   float input,result=0,c;
   printf("Please Enter The Input: ");
   scanf("%f",&input);
   for(float n=1;n<=input;n++)
  {
     float sum=1;
     c=n*2;
     printf("%f/%f! + ",n,c);
     for(float i=1;i<=c;i++)
    {
      sum=sum*i;
    }
    result = result + (n/sum);
  }
    printf("\nThe Result is : %f ",result);
   
    return 0;
}