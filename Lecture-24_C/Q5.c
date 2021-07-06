#include<stdio.h>
#include<stdlib.h>
int dismul(int n,int r)
{
    if(n==0)
    {
        return 1;
    }
    printf("%d ",r);
    return dismul(n-1,++r)*n;
    
}
void main()
{
    int input;
    printf("Please Enter The Last Number Of N-Natural Numbers You Want : ");
    scanf("%d",&input);
    printf("\nThe Sum Is : %d",dismul(input,1));
}
