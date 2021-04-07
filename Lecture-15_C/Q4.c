#include<stdio.h>
int main()
{
    int i , j , m , n , b;
    printf("Enter the no. of rows and columns:  \n");
    scanf("%d %d",&m,&n);
    int a[m][n] , c[n];
    printf("\nEnter the elements in array:  \n");
     
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the no. of row to be reversed: ");
    scanf("%d",&b);
    printf("%d row in reverse order... ",b);
    for(i=0;i<m;i++)
    {
        if(i==(b-1))
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d ",a[i][j]);
                c[j]=a[i][j];
            }
        }
        printf("\n");
    }
    return 0;
}