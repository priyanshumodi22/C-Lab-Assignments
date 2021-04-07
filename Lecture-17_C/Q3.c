#include<stdio.h>
int main()
{
    int i=0,j=0,m,n;
    printf("Enter the no. of rows and columns:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements in matrix:\n");
    q:
    i=0;
    p:
    scanf("%d",&a[i][j]);
    i++;
    if(i<m)
    goto p;
    j++;
    if(j<n)
    goto q;
    printf("Column wise matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}