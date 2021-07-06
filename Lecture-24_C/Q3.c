#include<stdio.h>
#include<stdlib.h>
int dismul(int n,int r)
{
    if(n==0)
    {
        return 1;
    }
    return dismul(n-1,++r)*n;  
}
void main()
{
    int input;
    printf("Please Enter The Number For Which You Need Factorial: ");
    scanf("%d",&input);
    printf("\nThe Factorial Is : %d",dismul(input,1));
}
