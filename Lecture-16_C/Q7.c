#include <stdio.h>
int main()
{
    int  r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    int b[c][r];
    printf("\nEnter matrix elements:\n");
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered matrix: \n");
    for(i = 0; i < r; ++i)
    {
            for(j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if(j == c - 1)
                printf("\n");
        }
    }
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < c; ++j)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < c; ++i)
    {
        for(j = 0; j < r; ++j)
        {
            printf("%d  ", b[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    }   
    return 0;
}