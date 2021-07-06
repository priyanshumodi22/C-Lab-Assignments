#include<stdio.h>
#include<stdlib.h>
int dissum(int n)
{
    if(n==0)
    {
        return 0;
    }
    printf("%d ",n);
    dissum(n-2);
        
}
void main()
{
    int input;
    printf("Please Enter The Last Number Of N-Natural Numbers You Want : ");
    scanf("%d",&input);
    dissum(input);
}
