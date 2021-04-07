#include <stdio.h>
int main ()
{
        int i, j, m, n, sum = 0;
        printf("Enter the order of the matrix: \n");
        scanf("%d %d", &m, &n);
        int a[m][n];
        printf("Enter the elements: \n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++) 
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n Display array: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for (i=0;i<m;i++) 
        {
            for (j = 0; j < n; ++j) 
            {
                sum = sum + a[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i+1, sum);
            sum = 0;
 
        }
        sum = 0;
        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i)
            {
                sum = sum + a[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j+1, sum);
            sum = 0;
 
        }
        return 0;
}