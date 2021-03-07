#include<stdio.h>
int main()
{
    int i , j , k=1 , c=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",c);
                c++;
            }
            else
            {
                printf("%d ",c);
                c--;
            }
        }
        c=c+k;
        if(i%2!=0)
        {
            k=k+2;
        }
        printf("\n");
    }
    return 0;
}