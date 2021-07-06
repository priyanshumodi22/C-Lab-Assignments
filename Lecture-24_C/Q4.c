#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else 
    {

        return fib(n-2)+fib(n-1);
        
    }
}
void main()
{
    int input;
    printf("Please Enter The Number For Which You Want Factorial: ");
    scanf("%d",&input);
    printf("%d ",fib(input));
}

