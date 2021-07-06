#include <stdio.h>
int digit(int n)
{
    int t=n;
    int c=0;
    while(t!=0)
    {
        ++c;
        t=t/10;
    }
    return c;
}
int main()
{
    int num;
    printf("Enter a number :: ");
  	scanf("%d",&num);
    int c=digit(num);
    printf("The number of digits in the entered number is %d",c); 
    return 0;
}