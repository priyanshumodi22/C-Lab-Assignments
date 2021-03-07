#include<stdio.h>
int main()
{
    int i , j , rows , a , b ; 
    printf("Enter no. of rows: ");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        for(b=1;b<=rows-i;b++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            {
                a=1;
            }
            else
            {
                a=a*(i-j+1)/j;
            }
            printf(" %d",a);
        }
        printf("\n");
    }

    return 0;
}
