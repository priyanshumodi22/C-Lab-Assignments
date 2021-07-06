#include<stdio.h>
int max(int n1,int n2)
{
    if(n1>n2)
    {
        printf("%d is Greater than %d",n1,n2);
    }
    else
        printf("%d is Greater than %d",n2,n1);
}

int main()
{
    int num1,num2;
    printf("Enter two no.:\n");
    scanf("%d %d",&num1,&num2);
    max(num1,num2);
    return 0;
}