#include <stdio.h>

int main()
{
    int a,b=1,c=1;
    printf("Enter the numbers: ");
    while(b!=0)
    {
        scanf("%d",&b);
        if(b%2==1)
        {
            c=c*b;
        }
    }
    
    printf("%d",c);
    return 0;
}