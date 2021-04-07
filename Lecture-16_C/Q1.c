#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size (odd) of array for square matrix: ");
    scanf("%d",&n);
    int a[n][n],x,y;
    printf("\nEnter the elements in matrix: \n");
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Left arrow:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i&&i+j>=n-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Right arrow:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i&&i+j<=n-1)
                printf("%d ",a[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Upper triangle:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i&&i+j<=n-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Lower triangle:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i&&i+j>=n-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Upper triangle with secondary diagonal:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<=n-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Lower triangle with secondary diagonal:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Lower triangle with primary diagonal:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
                printf("%d ",a[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Upeer triangle with primary diagonal:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
