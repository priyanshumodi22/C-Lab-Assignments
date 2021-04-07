#include<stdio.h>
int main()
{
    int i , j , r , c;
    printf("Enter no. of rows and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements in 2-d array: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe 2-d array is...\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nElements beside diagonal of matrix are: \n");
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if((i-j)==1 || (j-i)==1)
                {
                    printf("\t%d",a[i][j]);
                }
                else
                printf("\t");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nIts not a square matrix!!");
    }
    return 0;
}