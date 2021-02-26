#include<stdio.h>
int main()
{
    int j,i=1;
    printf("Enter no. of terms: ");
    scanf("%d",&j);
    for(i=1;i<=j;i++,j--)
    {
        printf(" %d %d",i,j);
    }

    return 0;
}
