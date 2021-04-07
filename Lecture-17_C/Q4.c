#include<stdio.h>
int main()
{                  
  int a,c,d,b=0;                                  
  printf("Enter the value of a: ");
  scanf(" %d" ,&a);
  d=a ;                                   
  start:  
    c=a%10;                      
    b=(b*10)+c;
    a=a/10;                                         
    if(a>0)
  goto start;                                     

  printf("Input Number=%d\n" , d);
  printf("Reversed Number=%d\n" , b);
  return 0;
}                                      