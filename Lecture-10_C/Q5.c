#include<stdio.h>
#include<stdlib.h>

void main()
{
  int n;
  float  r=0;
  printf("Please Enter no. of terms: ");
  scanf("%d",&n);
  n--;
  while(n>=0)
  {
  int sum=1,a=0;
    while(a<n)
    {
       sum =sum*(n-a);
       a++;
    }
      r=r+((n+1.0)/sum);
      n--;  
  }
printf("\n%f",r);
}