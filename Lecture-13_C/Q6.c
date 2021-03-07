#include<stdio.h>

int main()
{
    int n, x,  y, k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(x =1; x <= n; x++)
    {
        for(y =1; y <= n; y++)
        {
            if(y <= x)
                printf("%d",x);
            else
                printf(" ");
        }
        for(y = n; y >= 1;y--)
        {
             if(y <= x)
                 printf("%d",x);
             else
                 printf(" ");
        }
     printf("\n");
    }
return 0;
}