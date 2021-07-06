#include<stdio.h>
int f()
{
    int i,f=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
 
    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ",f());
    return 0;
}
