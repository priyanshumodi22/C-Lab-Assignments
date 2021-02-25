#include<stdio.h>
int main()
{
    int m , n;
    printf("Enter the values for m and n: ");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("\n");
    if(m<n)
    {   printf("Natural no. between %d and %d are: ",m,n);
        while(m<=n)
        {
            printf("%d ",m);
            m++;
        }
    }
    else
    {   printf("Natural no. between %d and %d are: ",m,n);
        while(m>=n)
        {
            printf("%d ",m);
            m--;
        }
    }
    if(m==n)
    {
        printf("Both m & n are equal.");
    }

    return 0;

}