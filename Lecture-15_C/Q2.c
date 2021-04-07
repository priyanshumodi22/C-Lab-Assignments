#include<stdio.h>
int main()
{
    int i , j , r , c , r1 , c1;
    printf("Enter no. of rows and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements in array: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display the elements of array: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter which row to be printed: ");
    scanf("%d",&r1);
    for(i=0;i<r;i++)
    {
        if(i==(r1-1))
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\n");
    printf("Enter which column to be printed: ");
    scanf("%d",&c1);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j==(c1-1))
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}