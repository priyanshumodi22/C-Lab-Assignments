#include<stdio.h>
int main()
{
    int i = 30 , j = 5 , m , n;
    printf("Print nos. from 30 to 22.\n");
    while(i>=22) //Print nos. from 30 to 22.
    {
        printf("%d ",i);
        i--;
    }
    printf("\n\n");
    printf("Print nos. from 5 to 1.\n");
    while(j>=1)//Print nos. from 5 to 1.
    {
        printf("%d ",j);
        j--;
    }
    printf("\n");
    printf("Enter the values for m and n (m>n) :");
    scanf("%d",&m);
    scanf("%d",&n);
    while(m>=n)
    {
        printf("%d ",m);
        m--;
    }
    printf("\nThe values of m and n given: 10 and 5.\n");
    m=10;
    n=5;
    while(m>=n)
    {
       printf("%d ",m);
       m--;
    }



    return 0;
}