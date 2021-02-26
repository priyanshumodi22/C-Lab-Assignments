#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i+=2)
    {
        for(k=1;k<=i;k++)
       {
            printf("%d ",1);
       }         
        printf("\n");
        for(j=1;j<=i+1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}