#include<stdio.h>
#include<stdlib.h>
int dissum(int n,int r)
{
    if(n==0)
    {
        return 0;
    }
    printf("%d ",r);
    return dissum(n-1,++r)+n;
    
}
void main()
{
    int input;
    printf("Please Enter The Last Number Of N-Natural Numbers You Want : ");
    scanf("%d",&input);
    printf("\nThe Sum Is : %d",dissum(input,1));
}
